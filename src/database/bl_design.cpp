
/*
 * BLDesign
 * ------------------------------
 * A design or module used to group functions and cells
 */
#include <iostream>

#include "bl_design.h"
#include "bl_port.h"

void BLDesign::pp(pp_args args)
{
    std::cout << args.ident << "- name: " << get_name() << std::endl;
    std::cout << args.ident << "  ports:" << std::endl;
    pp_args new_args = pp_args({.ident = args.ident + "    "});
    for (shared_ptr<BLPort> port : get_ports())
    {
        port->pp(new_args);
        cout << endl;
    }
}
