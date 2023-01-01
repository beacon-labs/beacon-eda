
/*
 * BLPort
 * ------------------------------
 * A port of a design
 */

#include <iostream>

#include "bl_port.h"

void BLPort::pp(pp_args args)
{
    std::cout << args.ident << "- name: " << get_name() << std::endl;
    std::cout << args.ident << "  direction: " << get_direction() << std::endl;
    int from = get_from();
    int to = get_to();

    if (from != 0 || to != 0)
    {
        std::cout << args.ident << "  from: " << std::to_string(from) << std::endl;
        std::cout << args.ident << "  to: " << std::to_string(to) << std::endl;
    }
}
