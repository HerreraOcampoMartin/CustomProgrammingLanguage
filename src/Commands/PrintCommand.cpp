#include "PrintCommand.h"
#include <utility>
#include "../Constants.h"

PrintCommand::PrintCommand(ListParams *p)
    :BaseCommand(GET::ListOfKeywords()[0], p){

}

void PrintCommand::execute() {
    string texto = params->getFirst()->getText();
    std::cout << texto << std::endl;
}
