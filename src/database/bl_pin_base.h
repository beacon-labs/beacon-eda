
/*
 * BLPinBase
 * ------------------------------
 * Pin of an instance
 *
 * IMPORTANT NOTE: DO NOT EDIT THIS FILE, edit bl_pin.cpp instead
 *
 */

#pragma once

using namespace std;

#include <memory>
#include <string>
// 

class BLPinBase
{
    
        string name;
    
        string direction;
    
    public:
        
            string get_name();
            
                void set_name(string value);
            
        
            string get_direction();
            
                void set_direction(string value);
            
        

};
