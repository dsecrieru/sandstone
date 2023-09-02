//
// Created by Daniel Secrieru on 01/09/2023.
//

#ifndef SANDSTONE_ENTRY_POINT_HPP
#define SANDSTONE_ENTRY_POINT_HPP

#include "application.hpp"

int main(int argc, char** argv) {
    auto app = sandstone::create_application();
    app->run();
    delete app;
}

#endif //SANDSTONE_ENTRY_POINT_HPP
