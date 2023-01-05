
/*
 * BLLibrary
 * ------------------------------
 * A library is a group of designs
 */

#include "bl_library.h"
#include "bl_design.h"
#include <iostream>

void BLLibrary::pp(pp_args args)
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "  filenames:" << std::endl;
    for (std::string filename : get_filenames())
    {
        std::cout << "    - " << filename << std::endl;
    }
    std::cout << "  designs:" << std::endl;
    for (shared_ptr<BLDesign> design : get_designs())
    {
        design->pp({.ident = "    "});
    }
}