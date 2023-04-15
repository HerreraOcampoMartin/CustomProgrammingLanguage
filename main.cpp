#include <iostream>
#include "Execute.h"

int main(int argc, char **argv) {

    string file = argv[1];

    auto *e = new Execute(file);
    e->start();

    std::cout << std::endl << std::endl
        << "- Program executed without errors -" << std::endl;

    return 0;
}
