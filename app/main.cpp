#include <iostream>
#include "my_lib.hpp"
#include "config.hpp"



int main()
{
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;
    print_hello();
    return 0;
}
