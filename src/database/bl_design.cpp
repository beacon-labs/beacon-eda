
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
    std::cout << args.ident << "name: " << get_name() << std::endl;
    std::cout << args.ident << "ports:" << std::endl;
    for (shared_ptr<BLPort> port : get_ports())
    {
        cout << endl;
        port->pp(args.ident + "  ");
    }
}
