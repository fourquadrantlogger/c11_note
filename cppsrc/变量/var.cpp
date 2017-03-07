#include <iostream>
using   namespace   std;

main(){
    unsigned u=0;
    std::cout<<u<<endl;

    int i;
    std::string s;
    std::cout<<i<<endl<<s<<endl;

    int err_numb=0;
    int *const curErr=&err_numb;

    std::cout<<*curErr<<endl;
}