#ifndef LENGUAJEPROGRAMACION_PRINTCOMMAND_H
#define LENGUAJEPROGRAMACION_PRINTCOMMAND_H

#include <iostream>
#include "BaseCommand.h"

class PrintCommand: public BaseCommand {
public:
    explicit PrintCommand(ListParams *p);
    void execute();
};

#endif //LENGUAJEPROGRAMACION_PRINTCOMMAND_H
