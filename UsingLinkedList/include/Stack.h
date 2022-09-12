#ifndef Stack_h
#define Stack_h

#include "StackList.h"

class Stack 
{

public:
    Node *Head = nullptr;
    Node *Tail;

    void push(int data);
    void pop();
    bool isEmpty();
    bool isFull();
    int top();

};


#endif