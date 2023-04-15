#include "ListCommand.h"
#include <utility>

CommandNode::CommandNode(BaseCommand *command) {
    this->next = nullptr;
    this->com = command;
}

CommandNode *CommandNode::getNext() {
    return this->next;
}

void CommandNode::setNext(CommandNode *node) {
    this->next = node;
}

BaseCommand *CommandNode::getCommand() {
    return this->com;
}

void ListCommand::add(CommandNode *node) {
    this->size++;

    if (this->first == nullptr) {
        this->first = node;
        this->last = node;

        return;
    } // else

    this->last->setNext(node);
    this->last = node;
}

void ListCommand::printContent() {
    if(this->first == nullptr){
        std::cout << "The list is empty" << std::endl;
        return;
    }

    CommandNode *n = this->first;
    for(; n != nullptr; n = n->getNext()){
        std::cout << n->getCommand()->getName() << std::endl;
    }

}

CommandNode *ListCommand::getFirst() {
    return this->first;
}