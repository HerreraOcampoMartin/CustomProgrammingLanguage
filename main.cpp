#include <iostream>
#include "Execute.h"

int main(int argc, char **argv) {

    string file = argv[1];

    auto *e = new Execute(file);
    e->start();

    std::cout << "Program executed without errors." << std::endl;

    return 0;
}
