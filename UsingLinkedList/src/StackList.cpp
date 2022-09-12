#include "Stack.h"
#include "StackList.h"


bool Stack :: isEmpty()
{
    if(Head == nullptr)
    {
        return true;
    }
        
    else 
    {
        return false;
    }
}

void Stack :: push(int data)
{
    Node *newNode = new Node();
    newNode -> info = data;
    newNode->next = nullptr;    
    Head = newNode;
    // if(Tail == nullptr)
    // {
    //     Tail = Head;
    // }
    
    
    
    
}

void Stack :: pop()
{
    if(!isEmpty()){
        Node * NodeToDelete = Head;
        Head = NodeToDelete->next;
        delete NodeToDelete;
        // if(Head == nullptr)
        // {
        //     Tail = nullptr;
        // }
        

    }
    
}

int Stack :: top()
{
    if(!isEmpty())
    {
        return Head->info;
    }
    
}

