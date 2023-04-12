#ifndef LENGUAJEPROGRAMACION_EXECUTE_H
#define LENGUAJEPROGRAMACION_EXECUTE_H

#include <iostream>
#include "src/Structures/ListText.h"
#include "src/Reader.h"

class Execute{
private:
    ListText *allText;
public:
    void parseFile(const std::string& fileName);
};

#endif //LENGUAJEPROGRAMACION_EXECUTE_H
