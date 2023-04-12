#include "BaseError.h"
#include <utility>

BaseError::BaseError(string message, string file, int line) {
    this->message = std::move(message);
    this->file = std::move(file);
    this->line = line;
}

void BaseError::launchError() {
    std::cout << "- ERROR: " << this->message << std::endl;
    std::cout << "In file " << this->file << std::endl;
    std::cout << "In line " << this->line << std::endl;
    exit(-1);
}