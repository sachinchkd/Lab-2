#ifndef StackList_h
#define StackList_h

#include "iostream"

class Node
{

    public:
        int info;
        Node * next;

        Node(){}
        Node(int data, Node next ): info(data), next(nullptr) {}
        
};



class List 
{
    public:
    

    List(){}
    ~List(){}

        bool isEmpty();
        void addToTail(int data);
        
        void removeFromHead();
        
        




};


#endif