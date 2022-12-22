
/*
 * BLLibrary
 * ------------------------------
 * A library is a group of designs
 */

#include "bl_library.h"


    string BLLibrary::get_name()
    {
        return this->name;
    }

    void BLLibrary::set_name(string value)
        {
            this->name = value;
        }
    

    list<shared_ptr<BLDesign>> BLLibrary::get_designs()
    {
        return this->designs;
    }

    
        void BLLibrary::add_design(shared_ptr<BLDesign> value)
        {
            this->designs.push_back( value );
        }
    
