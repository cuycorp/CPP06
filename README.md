# CPP06
* Concepts by level
    * ex00
        * Non instantiable class: putting constructors private so they can't be used
        * Static methods: can be called without creating an object
        * static cast
        * Scalar type: the fundamental built-in C++ types that hold a single value
            * char - single character
            * int - integer number
            * float - single-precision floating point
            * double - double-precision floating point
        * scope of function str2int, str2float, str2dbl: 
        * str is different than char * in CPP, convert with string method
        *   Algo
            1.  Identify what type is the string as an input
            2. Convert in realtion to the type
    * ex01
        * reinterpret cast

    * ex02

* Casting 
| Cast Type   | Purpose                       | When to Use         |
|-------------|-------------------------------|---------------------|
| static      | Compile-time                  | Numeric, Upcasting in inheritance hierarchies  |
| dynamic     | Runtime-check                 | Safe downcasting in polymorphic hierarchies | 
| const_cast  | Add or remove const/volatile  | removing const        |
| reinterpret | Bit-level reinterpretation    | pointer conversion, system manipulation|
| C-style     | Old-style generic cast        | Avoid in modern C++ |

