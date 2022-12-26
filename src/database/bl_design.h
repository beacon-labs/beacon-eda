
/*
 * BLDesign
 * ------------------------------
 * A design or module used to group functions and cells
 */

#pragma once

using namespace std;

#include <memory>
#include <string>
#include <list>
#include "bl_instance.h"
#include "bl_port.h"

class BLInstance;
class BLPort;

class BLDesign
{
    
        string name;
    
        list<shared_ptr<BLInstance>> instances;
    
        list<shared_ptr<BLPort>> ports;
    
    public:
        
            string get_name();
            
                void set_name(string value);
            
        
            list<shared_ptr<BLInstance>> get_instances();
            
                void add_instance(shared_ptr<BLInstance> value);
            
        
            list<shared_ptr<BLPort>> get_ports();
            
                void add_port(shared_ptr<BLPort> value);
            
        

};
