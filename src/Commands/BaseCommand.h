#ifndef LENGUAJEPROGRAMACION_BASECOMMAND_H
#define LENGUAJEPROGRAMACION_BASECOMMAND_H

#include <iostream>
#include "../Structures/ListText.h"

using std::string;

class BaseCommand {
private:
    string commandName;
protected:
    ListParams *params{};
public:
    explicit BaseCommand(string command, ListParams *p);
    void setCommand(string com);

    virtual void execute();
    string getName();
};

#endif //LENGUAJEPROGRAMACION_BASECOMMAND_H
