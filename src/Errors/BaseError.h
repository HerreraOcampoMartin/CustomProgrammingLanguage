#ifndef LENGUAJEPROGRAMACION_BASEERROR_H
#define LENGUAJEPROGRAMACION_BASEERROR_H

#include <iostream>

using std::string;

class BaseError {
private:
    string message;
    string file;
    int line;
public:
    BaseError(string message, string file, int line);
    void launchError();
};

#endif //LENGUAJEPROGRAMACION_BASEERROR_H
