#include <iostream>
int main()
{
int x=0;

while(x!=3){
    std::cout<<"1 - kawa\n";
    std::cout<<"2 - woda\n";
    std::cout<<"3 - wylacz\n";
    std::cin>>x;

    switch (x){
        case 1: 
            std::cout<<"wybrano kawe\n";
        break;
            
        case 2:
            std::cout<<"wybrano wode\n";
        break;
    
        case 3:
            std::cout<<"zamykam system...\n";
        break;
    
        default :
            std::cout<<"brak takiej opcji\n";
        break;
    }
}
    
return 0;
}
