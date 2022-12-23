
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
    

    list<string> BLLibrary::get_filenames()
    {
        return this->filenames;
    }

    
        void BLLibrary::add_filename(string value)
        {
            this->filenames.push_back( value );
        }
    

    list<shared_ptr<BLDesign>> BLLibrary::get_designs()
    {
        return this->designs;
    }

    
        void BLLibrary::add_design(shared_ptr<BLDesign> value)
        {
            this->designs.push_back( value );
        }
    
