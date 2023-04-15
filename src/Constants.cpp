#include "Constants.h"

string GET::coms[] = {"Write", "Ingresar"};

string GET::Separators() {
    return " ;,";;
}

string GET::KeyChars() {
    return "()";
}

string GET::ListOfKeywords(int i) {
    return coms[i];
}

std::vector<string> GET::ListOfKeywords() {
    std::vector<string> vec(std::begin(coms), std::end(coms));
    return vec;
}
