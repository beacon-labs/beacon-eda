#!/usr/bin/python3

import click
import jinja2
import re
import os
from pathlib import Path
from jinja2 import Environment, BaseLoader

CPP_TEMPLATE = """
#include "{{name}}.h"

#include <iostream>

{%- for syntax in syntax_list: %}

void {{name}}::handle(const slang::syntax::{{syntax}} &syntax)
{
    std::cout << "start:{{syntax}}" << std::endl;
    std::cout << syntax.toString() << std::endl;
    std::cout << "end:{{syntax}}" << std::endl;
    visitDefault(syntax);
}

{% endfor -%}

"""

H_TEMPLATE = """
#include "slang/syntax/SyntaxVisitor.h"

class {{name}} : public slang::syntax::SyntaxVisitor<{{name}}>
{
public:
{% for syntax in syntax_list: %}
    void handle(const slang::syntax::{{syntax}} &syntax);
{% endfor %}
};
"""


@click.command()
@click.option("-i", "--input", required=True, help="Path to AllSyntax.h file")
@click.option("-o", "--output", required=True, help="Path to output dir")
@click.option(
    "-n", "--name", default="TestVisitor", help="Name of visitor class to generate"
)
def main(input: str, output: str, name: str):
    o = Path(output)
    o.mkdir(parents=True, exist_ok=True)

    # Read input header file
    print(f"INFO: reading {input}")
    with open(input, "r") as f:
        lines = f.readlines()

    # Extract syntax structs
    syntax_list = []
    exp = re.compile("struct SLANG_EXPORT (\S+)")
    for line in lines:
        m = exp.match(line)
        if m:
            syntax_list.append(m.group(1))

    for ext, template in {"cpp": CPP_TEMPLATE, "h": H_TEMPLATE}.items():
        fn = os.path.join(output, f"{name}.{ext}")
        print(f"INFO: writing {ext} file {fn}")
        t = Environment(loader=BaseLoader()).from_string(template)

        with open(fn, "w") as f:
            f.write(t.render(name=name, syntax_list=syntax_list))


if __name__ == "__main__":
    main()
