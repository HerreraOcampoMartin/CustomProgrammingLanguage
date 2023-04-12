#ifndef LENGUAJEPROGRAMACION_LISTTEXT_H
#define LENGUAJEPROGRAMACION_LISTTEXT_H

#include <iostream>
using std::string;

class Token{
private:
    string text;
    Token *next;
public:
    explicit Token(string txt);
    void setText(string txt);
    string getText();
    void setNext(Token *n);
    Token *getNext();
};

class Line {
private:
    Token *first;
    Token *last;
    Line *next;
    int tokens;
public:
    explicit Line();
    Line *getNext();
    Token *getFirstToken();
    void addToken(Token *t);
    void setNext(Line *node);
};

class ListText {
private:
    Line *first;
    Line *last;
    int size;
public:
    void add(Line *node);
    void printContent();
    Line *getFirst();
};

#endif //LENGUAJEPROGRAMACION_LISTTEXT_H
