//!  Pretty Print
/*!
  A struct with virtual function pp that can be added to any class to
  pretty print it's representation.


  Example usage:

  ```
  class MyClass : public PP
  {
    public:
        void pp(pp_args args = pp_args());
  }
  ```
*/
#pragma once

#include <string>

/* Use pp_args to define the indentation of the printing */
struct pp_args
{
    std::string ident = "";
};

/* Abstract class to inherit in your class or struct */
class PP
{
public:
    virtual void pp(pp_args args = pp_args()) = 0;
};