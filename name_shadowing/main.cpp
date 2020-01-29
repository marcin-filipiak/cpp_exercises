#include <stdio.h>
#include <iostream>

int x = 10;

int test(){
    std::cout<<"\nx z funkcji test"<<x;
    return 0;
}

int main()
{
    int x = 5;
    
    if(1==1){
        int x = 22;
        std::cout<<"\n w ifie"<<x;
    }
    
    std::cout<<"\nx w main:"<<x;
    
    test();

    return 0;
}
