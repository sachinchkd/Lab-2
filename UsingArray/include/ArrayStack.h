#ifndef ArrayStack_h
#define ArrayStack_h

#include "Stack.h"

class ArrayStack : public Stack
{

public:
    int top_index = -1;
    

    void push(int data);
    int pop();
    bool isEmpty();
    bool isFull();
    int top();

};




#endif