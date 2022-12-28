
/*
 * BLNetBase
 * ------------------------------
 * An net to connect instance pins (and optionally design ports)
 *
 * IMPORTANT NOTE: DO NOT EDIT THIS FILE, edit bl_net.h instead
 *
 */

#include "bl_net_base.h"


    string BLNetBase::get_name()
    {
        return this->name;
    }

    void BLNetBase::set_name(string value)
        {
            this->name = value;
        }
    

    list<shared_ptr<BLPin>> BLNetBase::get_pins()
    {
        return this->pins;
    }

    
        void BLNetBase::add_pin(shared_ptr<BLPin> value)
        {
            this->pins.push_back( value );
        }
    

    list<shared_ptr<BLPort>> BLNetBase::get_ports()
    {
        return this->ports;
    }

    
        void BLNetBase::add_port(shared_ptr<BLPort> value)
        {
            this->ports.push_back( value );
        }
    
