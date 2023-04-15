#ifndef LENGUAJEPROGRAMACION_LISTCOMMAND_H
#define LENGUAJEPROGRAMACION_LISTCOMMAND_H

#include <iostream>
#include "../Commands/BaseCommand.h"
using std::string;

class CommandNode {
private:
    CommandNode *next;
    BaseCommand *com;
public:
    explicit CommandNode(BaseCommand *command);
    CommandNode *getNext();
    BaseCommand *getCommand();
    void setNext(CommandNode *node);
};

class ListCommand {
private:
    CommandNode *first;
    CommandNode *last;
    int size;
public:
    void add(CommandNode *node);
    void printContent();
    CommandNode *getFirst();
};

#endif //LENGUAJEPROGRAMACION_LISTCOMMAND_H
