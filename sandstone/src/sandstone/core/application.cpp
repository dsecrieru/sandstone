//
// Created by Daniel Secrieru on 01/09/2023.
//

#include <sandstone/core/log.hpp>

#include "application.hpp"

using namespace sandstone;

application::~application() = default;

void application::run() {
    ss_eng_logi("application running ...");
}