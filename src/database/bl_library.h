
/*
 * BLLibrary
 * ------------------------------
 * A library is a group of designs
 */

#pragma once

#include "bl_library_base.h"
#include "pp.h"

class BLLibrary : public BLLibraryBase, PP
{
public:
    void pp(pp_args args = pp_args()) override;
};
