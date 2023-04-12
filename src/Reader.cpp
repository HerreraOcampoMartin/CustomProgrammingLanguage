#include "Reader.h"
#include <string>

using std::getline;
string borrar = " ;,";
string separadores = "()";

ListText *Reader::readFile(const string& path) {
    auto *list = new ListText();
    string line;
    std::ifstream file(path);

    while ( std::getline(file, line) ) {
        list->add(tokenizeString(line));
    }
    file.close();

    return list;
}

Line *Reader::tokenizeString(const string& text) {
    Line *l = new Line();

    string temp;
    bool esString = false;
    for (char i : text){

        if(i == '"'){
            esString = !esString;
        }

        if(borrar.find(i) != std::string::npos && !esString){
            if(!temp.empty() ){
                l->addToken(new Token(temp));
                temp = "";
            }
            continue;
        }

        if(separadores.find(i) != std::string::npos && !esString){
            if(temp.empty() ){
                temp += i;
                l->addToken(new Token(temp));
                temp = "";
                continue;
            }
            l->addToken(new Token(temp));
            temp = "";
        }

        temp += i;
    }

    if(!temp.empty()){
        l->addToken(new Token(temp));
    }

    return l;
}
