#include <iostream>
#include "Execute.h"

int main(int argc, char **argv) {

    auto *e = new Execute();
    e->parseFile("prueba.mrt");

    return 0;
}
