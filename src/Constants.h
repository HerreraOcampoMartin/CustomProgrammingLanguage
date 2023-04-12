#ifndef LENGUAJEPROGRAMACION_CONSTANTS_H
#define LENGUAJEPROGRAMACION_CONSTANTS_H

#include <iostream>
#include <vector>

using std::string;

class GET{
public:
    static string Separators();
    static string KeyChars();
    static std::vector<string> ListOfKeywords();

};

#endif
