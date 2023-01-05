//!  Pretty Print
/*!
  A struct with virtual function pp that can be added to any class to
  pretty print it's representation.


  Example usage:

  ```
  ---MyClass.h---
  class MyClass : public PP
  {
    public:
        void pp(pp_args args = pp_args()) override;
  }

  ---MyClass.cpp---
  void MyClass::pp(pp_args args)
  {
    cout << args.ident << name << endl;
  }
  ```
*/
#pragma once

#include <string>

//! Use pp_args to define the indentation of the printing
struct pp_args
{
    std::string ident = ""; //! indentation string
};

/* Abstract class to inherit in your class or struct */
class PP
{
public:
    virtual void pp(pp_args args = pp_args()) = 0;
};