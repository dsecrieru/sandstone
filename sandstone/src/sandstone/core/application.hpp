//
// Created by Daniel Secrieru on 01/09/2023.
//

#ifndef SANDSTONE_APPLICATION_HPP
#define SANDSTONE_APPLICATION_HPP

int main(int argc, char** argv);

namespace sandstone {

    class application {
    public:
        virtual ~application();

    private:
        void run();

    private:
        friend int ::main(int argc, char** argv);
    };

    application* create_application();

}

#endif //SANDSTONE_APPLICATION_HPP
