//
// Created by Daniel Secrieru on 01/09/2023.
//

#include <iostream>

#include "application.hpp"

using namespace sandstone;

application::~application() = default;

void application::run() {
    std::cout << "Hello sandstone!\n";
}