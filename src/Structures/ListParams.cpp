
#include "ListParams.h"
#include <utility>

void ListParams::add(Params *node) {
    this->size++;

    if (this->first == nullptr) {
        this->first = node;
        this->last = node;

        return;
    } // else

    this->last->setNext(node);
    this->last = node;
}

void ListParams::printContent() {
    if(this->first == nullptr){
        std::cout << "The list is empty" << std::endl;
        return;
    }

    Params *n = this->first;
    for(; n != nullptr; n = n->getNext()){
        std::cout << n->getText() << std::endl;
    }

}

Params *ListParams::getFirst() {
    return this->first;
}

Params::Params(string txt) {
    this->text = std::move(txt);
    this->next = nullptr;
}

void Params::setText(string txt) {
    this->text = std::move(txt);
}

string Params::getText() {
    return this->text;
}

void Params::setNext(Params *n) {
    this->next = n;
}

Params *Params::getNext() {
    return this->next;
}


