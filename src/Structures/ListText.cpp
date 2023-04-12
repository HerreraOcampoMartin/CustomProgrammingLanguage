#include "ListText.h"
#include <utility>

Line::Line() {
    this->first = nullptr;
    this->tokens = 0;
    this->next = nullptr;
    this->last = nullptr;
}

Line *Line::getNext() {
    return this->next;
}

void Line::setNext(Line *node) {
    this->next = node;
}

Token *Line::getFirstToken() {
    return this->first;
}

void Line::addToken(Token *t) {
    this->tokens++;

    if (this->first == nullptr) {
        this->first = t;
        this->last = t;

        return;
    } // else

    this->last->setNext(t);
    this->last = t;
}


void ListText::add(Line *node) {
    this->size++;

    if (this->first == nullptr) {
        this->first = node;
        this->last = node;

        return;
    } // else

    this->last->setNext(node);
    this->last = node;
}

void ListText::printContent() {
    if(this->first == nullptr){
        std::cout << "The list is empty" << std::endl;
        return;
    }

    Line *n = this->first;
    for(; n != nullptr; n = n->getNext()){
        Token *t = n->getFirstToken();
        for (; t != nullptr ; t = t->getNext()) {
            std::cout << t->getText() << "|";
        }
        std::cout << std::endl;
    }

}

Line *ListText::getFirst() {
    return this->first;
}

Token::Token(string txt) {
    this->text = std::move(txt);
    this->next = nullptr;
}

void Token::setText(string txt) {
    this->text = std::move(txt);
}

string Token::getText() {
    return this->text;
}

void Token::setNext(Token *n) {
    this->next = n;
}

Token *Token::getNext() {
    return this->next;
}

