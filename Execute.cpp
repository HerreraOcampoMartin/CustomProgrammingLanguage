#include "Execute.h"
#include "src/Constants.h"
#include "src/Errors/BaseError.h"

Execute::Execute(const string& fileName) {
    this->path = "../" + fileName;
    this->allText = nullptr;
}

void Execute::start() {
    this->allText = Reader::readFile(path);
    Execute::searchCommands();
}

void Execute::searchCommands() {
    Line *l = this->allText->getFirst();
    int lineCount = 1;

    for(; l != nullptr; l = l->getNext()){
        Token *command = l->getFirstToken();
        if (!verifyCommand(command->getText())){
            auto *be = new BaseError("command '" + command->getText() + "' not found.", this->path, lineCount);
            be->launchError();
        }

        lineCount++;
    }
}

bool Execute::verifyCommand(const string& command) {
    for ( const string& com : GET::ListOfKeywords() ) {
        if(com == command) {
            return true;
        }
    }
    return false;
}


