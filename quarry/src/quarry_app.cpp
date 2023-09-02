//
// Created by Daniel Secrieru on 01/09/2023.
//

#include <sandstone/core/entry_point.hpp>

class quarry : public sandstone::application {
};

sandstone::application* sandstone::create_application() {
    return new quarry();
}