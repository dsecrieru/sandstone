//
// Created by Daniel Secrieru on 01/09/2023.
//

#ifndef SANDSTONE_ENTRY_POINT_HPP
#define SANDSTONE_ENTRY_POINT_HPP

#include <sandstone/core/log.hpp>
#include <sandstone/core/application.hpp>

int main(int argc, char** argv) {
    sandstone::log::init();
    auto app = sandstone::create_application();
    app->run();
    delete app;
}

#endif //SANDSTONE_ENTRY_POINT_HPP
