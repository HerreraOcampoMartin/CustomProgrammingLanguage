#include "Execute.h"


Execute::Execute(const string& fileName) {
    this->path = "../" + fileName;
    this->allText = nullptr;
}

void Execute::start() {
    this->coms = new ListCommand();
    this->allText = Reader::readFile(path);
    this->searchCommands();
    this->executeCommands();
}

void Execute::searchCommands() {
    Line *l = this->allText->getFirst();
    this->lineCount = 1;

    for(; l != nullptr; l = l->getNext()){
        Token *command = l->getFirstToken();
        if (verifyCommand(command->getText()) == -1){
            auto *be = new BaseError("command '" + command->getText() + "' not found.", this->path, lineCount);
            be->launchError();
        }

        BaseCommand *temp = getType(command->getText(), l->getAllButFirst());
        this->coms->add(new CommandNode(temp));

        lineCount++;
    }


}

void Execute::executeCommands() {
    auto *c = this->coms->getFirst();

    for(; c != nullptr; c = c->getNext()){
        c->getCommand()->execute();
    }

}

int Execute::verifyCommand(const string& command) {
    int cont = 0;
    for ( const string& com : GET::ListOfKeywords() ) {
        if(com == command) {
            return cont;
        }
        cont++;
    }
    return -1;
}

BaseCommand *Execute::getType(const string& com, ListParams *p) {

    if (com == GET::ListOfKeywords()[0]){
        return new PrintCommand(p);
    }

    return nullptr;
}


