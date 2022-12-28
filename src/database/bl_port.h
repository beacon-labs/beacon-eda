
/*
 * BLPort
 * ------------------------------
 * A port of a design
 */

#pragma once

#include "bl_port_base.h"

using namespace std;

class BLPort : public BLPortBase
{
public:
    void pp(std::string ident);
};
