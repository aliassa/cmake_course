#include <iostream>
#include "my_lib.hpp"
#include <cstdint>
#include <nlohmann/json.hpp>
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>


/**
 * @brief Prints out hello world and tests the JSON lib
 *
 *
 */
void print_hello()
{
    std::cout << "_my_lib_ JSON Lib Version: "
             << NLOHMANN_JSON_VERSION_MAJOR << "."
             << NLOHMANN_JSON_VERSION_MINOR << "."
             << NLOHMANN_JSON_VERSION_PATCH << "\n";
    std::cout << "_my_lib_ FMT Lib Version: "
             << FMT_VERSION << "\n";
    std::cout << "_my_lib_ CXXOPTS Lib Version: "
             << CXXOPTS__VERSION_MAJOR << "."
             << CXXOPTS__VERSION_MINOR << "."
             << CXXOPTS__VERSION_PATCH << "\n";
    std::cout << "_my_lib_ SPDLOG Lib Version: "
             << SPDLOG_VER_MAJOR << "."
             << SPDLOG_VER_MINOR << "."
             << SPDLOG_VER_PATCH << "\n";

}

std::uint32_t factorial( std::uint32_t number )
{
    return number <= 1 ? number : factorial(number-1)*number;
}
