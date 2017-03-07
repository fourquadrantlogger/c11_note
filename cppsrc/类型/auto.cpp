#include <iostream>
using   namespace   std;

main(){
    int i=0,&r=i;
    auto a=r;
    std::cout<<a;
}