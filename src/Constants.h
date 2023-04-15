#ifndef LENGUAJEPROGRAMACION_CONSTANTS_H
#define LENGUAJEPROGRAMACION_CONSTANTS_H

#include <iostream>
#include <vector>

using std::string;

class GET{
private:
    static string coms[];
public:
    static string Separators();
    static string KeyChars();
    static string ListOfKeywords(int i);
    static std::vector<string> ListOfKeywords();

};

#endif
