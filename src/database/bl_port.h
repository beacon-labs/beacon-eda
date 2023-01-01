
/*
 * BLPort
 * ------------------------------
 * A port of a design
 */

#pragma once

#include "bl_port_base.h"
#include "pp.h"

class BLPort : public BLPortBase, PP
{
public:
    void pp(pp_args args = pp_args()) override;
};
