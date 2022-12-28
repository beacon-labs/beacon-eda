
/*
 * BLDesign
 * ------------------------------
 * A design or module used to group functions and cells
 */
#include <iostream>

#include "bl_design.h"
#include "bl_port.h"

void BLDesign::pp(std::string ident)
{
    std::cout << ident << "name: " << get_name() << std::endl;
    std::cout << ident << "ports:" << std::endl;
    for (shared_ptr<BLPort> port : get_ports())
    {
        cout << endl;
        port->pp(ident + "  ");
    }
}
