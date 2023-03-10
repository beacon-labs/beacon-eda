
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
#include "bl_observer.h"
#include <list>
#include <string>

class BLPinBase
{
    
    string name;
    list<shared_ptr<IBLObserver<string>>> name_observers;
    
    string direction;
    list<shared_ptr<IBLObserver<string>>> direction_observers;
    
public:
    
    string get_name();
    void observe_name(shared_ptr<IBLObserver<string>> observer);
    void set_name(string value);
    
    string get_direction();
    void observe_direction(shared_ptr<IBLObserver<string>> observer);
    void set_direction(string value);
    

};
