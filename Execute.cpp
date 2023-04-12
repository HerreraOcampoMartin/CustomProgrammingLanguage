#include "Execute.h"

void Execute::parseFile(const std::string& fileName) {
    string path = "../" + fileName;
    ListText *list = Reader::readFile(path);

    list->printContent();

}
