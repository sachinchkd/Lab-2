
#include "Stack.h"

int main()
{
    Stack S;
    std::cout << "\nChecking Empty or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(S.isEmpty())
    {
        std::cout << "\tEmpty\n" << std::endl;
    }
    else{
        std::cout << "\tnot empty\n" << std::endl;
    }

    std::cout << "\tpushing ";
    S.push(5);
    std:: cout << S.top() << std::endl;

    std::cout << "\tpushing ";
    S.push(6);
    std:: cout << S.top() << std::endl;

    std::cout << "\tpushing ";
    S.push(7);
    std:: cout << S.top() << std::endl;

    std::cout << "\tpushing ";
    S.push(8);
    std:: cout << S.top() << std::endl;

    std::cout << "----------------------------" << std::endl;
    
    
    std::cout << "\nChecking Empty or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(S.isEmpty())
    {
        std::cout << "\tEmpty\n" << std::endl;
    }
    else{
        std::cout << "\tnot empty\n" << std::endl;
    }
    std::cout << "\tpopping ";
    std:: cout << S.top() << std::endl;
    S.pop();

    std::cout << "\tpopping\n " ;
    
    S.pop();

    std::cout << "\tpopping \n";
    
    S.pop();

    
    




   
    
    

}
