#include "Constants.h"

string GET::Separators() {
    return " ;,";;
}

string GET::KeyChars() {
    return "()";
}

std::vector<string> GET::ListOfKeywords() {
    return {"Escribir", "Ingresar"};
}
