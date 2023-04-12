
#ifndef LENGUAJEPROGRAMACION_READER_H
#define LENGUAJEPROGRAMACION_READER_H
#include <iostream>
#include <fstream>
#include "Structures/ListText.h"

using std::string;

class Reader {
public:
    static ListText *readFile(const string& path);
    static Line *tokenizeString(const string& text);
};

#endif //LENGUAJEPROGRAMACION_READER_H
