
/*
 * BLDesign
 * ------------------------------
 * A design or module used to group functions and cells
 */

#pragma once

#include <any>

#include "bl_design_base.h"
#include "pp.h"

class BLDesign : public BLDesignBase, PP
{
public:
    void pp(pp_args args = pp_args()) override;
};
