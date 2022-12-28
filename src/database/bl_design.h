
/*
 * BLDesign
 * ------------------------------
 * A design or module used to group functions and cells
 */

#pragma once

#include <any>

#include "bl_design_base.h"

class BLDesign : public BLDesignBase
{
public:
    void pp(std::string ident);
};
