#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main (void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;

    std::string& ref = str;

    std::cout << "\n\n              Memory\n";
    std::cout << "\n----------------------------------\n";
    std::cout << "str memory adress = " << &str << "\n";
    std::cout << "ptr memory adress = " << ptr << "\n";
    std::cout << "ref memory adress = " << &ref << "\n";
    std::cout << "----------------------------------\n\n";

    std::cout << "\n\n            Value\n";
    std::cout << "\n----------------------------\n";
    std::cout << "str value = " << str << "\n";
    std::cout << "ptr value = " << *ptr << "\n";
    std::cout << "ref value = " << ref << "\n";
    std::cout << "----------------------------\n\n";


}