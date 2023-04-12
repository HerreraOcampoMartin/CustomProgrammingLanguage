#ifndef LENGUAJEPROGRAMACION_EXECUTE_H
#define LENGUAJEPROGRAMACION_EXECUTE_H

#include <iostream>
#include "src/Structures/ListText.h"
#include "src/Reader.h"


class Execute{
private:
    ListText *allText;
    string path;
public:
    explicit Execute(const string& fileName);
    void start();
    void searchCommands();
    static bool verifyCommand(const string& command);
};

#endif //LENGUAJEPROGRAMACION_EXECUTE_H
