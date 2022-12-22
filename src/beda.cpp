using namespace std;

#include "database/bl_library.h"
#include <iostream>
#include <memory>

int main()
{
    shared_ptr<BLLibrary> library = make_shared<BLLibrary>();
    library->set_name("my_library");

    cout << "Library: " << library->get_name() << endl;
}