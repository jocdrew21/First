#include <iostream>
#include "tree.h"

int main(int argc, const char * argv[])
{
    tree Tree;
    int num =0;
    int result=0;

    for (int i=0; i<1000; ++i)
    {
        Tree.insert(i);
    }
    
    std::cout<<"Look for a number:\n";
    std::cin>>num;
    
    result=Tree.search(num);
    
    std::cout<<"The result found was: " <<result<<"\n";
    
    
    
    return 0;
}

