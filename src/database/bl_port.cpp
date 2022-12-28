
/*
 * BLPort
 * ------------------------------
 * A port of a design
 */

#include <iostream>

#include "bl_port.h"

void BLPort::pp(std::string ident)
{
    std::cout << ident << "name: " << get_name() << std::endl;
    std::cout << ident << "direction: " << get_direction() << std::endl;
    int from = get_from();
    int to = get_to();

    if (from != 0 || to != 0)
    {
        std::cout << ident << "from: " << std::to_string(from) << std::endl;
        std::cout << ident << "to: " << std::to_string(to) << std::endl;
    }
}
