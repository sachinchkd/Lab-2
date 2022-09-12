#include "ArrayStack.h"

void ArrayStack :: push(int data)
{
    if(!isFull())
    {
        top_index++;
        array[top_index] = data;
    }

}

int ArrayStack :: pop()
{
    if(!isEmpty())
    {
        
        int popping_array = array[top_index];
        top_index--;
        return popping_array;
    }
}

bool ArrayStack :: isEmpty()
{
    if(top_index == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ArrayStack :: isFull()
{
    if(top_index == TOP_MAX_SIZE-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int ArrayStack :: top()
{
    if(!isEmpty())
    {
        return array[top_index];
    }
    
}