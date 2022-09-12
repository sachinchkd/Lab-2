#include "ArrayStack.h"


int main()
{
    ArrayStack A;
    std::cout << "\nChecking Empty or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(A.isEmpty())
    {
        std::cout << "\tEmpty\n" << std::endl;
    }
    else{
        std::cout << "\tnot empty\n" << std::endl;
    }

    std::cout << "\tpushing ";
    A.push(5);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(6);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(7);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(8);
    std:: cout << A.top() << std::endl;
    
    
    
    std::cout << "\n\nChecking Full or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(A.isFull())
    {
        std::cout << "\tFull\n" << std::endl;
    }
    else{
        std::cout << "\tnot Full\n" << std::endl;
    }

    std::cout << "\tpopping " << A.pop() <<std::endl;
    std::cout << "\tpopping " << A.pop() <<std::endl;
    std::cout << "\tpopping " << A.pop() <<std::endl;
    std::cout << "\tpopping " << A.pop() <<std::endl;

    std::cout << "\tpushing ";
    A.push(1);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(2);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(3);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(4);
    std:: cout << A.top() << std::endl;
    std::cout << "\tpushing ";
    A.push(5);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(6);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(7);
    std:: cout << A.top() << std::endl;

    std::cout << "\tpushing ";
    A.push(8);
    std:: cout << A.top() << std::endl;

    std::cout << "\n\nChecking Full or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(A.isFull())
    {
        std::cout << "\tFull\n" << std::endl;
    }
    else{
        std::cout << "\tnot Full\n" << std::endl;
    }
}