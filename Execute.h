#ifndef LENGUAJEPROGRAMACION_EXECUTE_H
#define LENGUAJEPROGRAMACION_EXECUTE_H

#include <iostream>
#include "src/Structures/ListText.h"
#include "src/Reader.h"
#include "src/Constants.h"
#include "src/Errors/BaseError.h"
#include "src/Commands/BaseCommand.h"
#include "src/Commands/PrintCommand.h"
#include "src/Structures/ListCommand.h"


class Execute{
private:
    ListText *allText;
    string path;
    int lineCount;
    ListCommand *coms;
public:
    explicit Execute(const string& fileName);
    void start();
    void searchCommands();
    static BaseCommand *getType(const string& com, ListParams *p);
    void executeCommands();
    static int verifyCommand(const string& command);
};

#endif //LENGUAJEPROGRAMACION_EXECUTE_H
