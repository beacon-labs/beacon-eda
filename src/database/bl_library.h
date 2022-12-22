
/*
 * BLLibrary
 * ------------------------------
 * A library is a group of designs
 */

#pragma once

using namespace std;

#include <memory>
#include <string>
#include <list>
#include "bl_design.h"

class BLDesign;

class BLLibrary
{
    
        string name;
    
        list<shared_ptr<BLDesign>> designs;
    
    public:
        
            string get_name();
            
                void set_name(string value);
            
        
            list<shared_ptr<BLDesign>> get_designs();
            
                void add_design(shared_ptr<BLDesign> value);
            
        

};
