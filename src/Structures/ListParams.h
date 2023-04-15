
#ifndef LENGUAJEPROGRAMACION_LISTPARAMS_H
#define LENGUAJEPROGRAMACION_LISTPARAMS_H

#include <iostream>
using std::string;

class Params{
private:
    string text;
    Params *next;
public:
    explicit Params(string txt);
    void setText(string txt);
    string getText();
    void setNext(Params *n);
    Params *getNext();
};

class ListParams {
private:
    Params *first;
    Params *last;
    int size;
public:
    void add(Params *node);
    void printContent();
    Params *getFirst();
};

#endif //LENGUAJEPROGRAMACION_LISTPARAMS_H
