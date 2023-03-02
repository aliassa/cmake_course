#include <iostream>
#include "my_lib.hpp"
#include "config.hpp"
#include <nlohmann/json.hpp>



int main()
{
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;

    std::cout << "JSON LIB VERSION: "
                << NLOHMANN_JSON_VERSION_MAJOR << "."
                << NLOHMANN_JSON_VERSION_MINOR << "."
                << NLOHMANN_JSON_VERSION_PATCH << "\n";
    print_hello();
    return 0;
}
