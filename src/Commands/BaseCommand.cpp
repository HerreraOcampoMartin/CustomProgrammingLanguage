#include "BaseCommand.h"
#include <utility>

BaseCommand::BaseCommand(string command, ListParams *p) {
    this->commandName = std::move(command);
    this->params = p;
}

void BaseCommand::setCommand(string com) {
    this->commandName = std::move(com);
}

void BaseCommand::execute() {
    std::cout << "Command not implemented:" << std::endl;
}

string BaseCommand::getName() {
    return this->commandName;
}
