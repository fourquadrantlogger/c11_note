
using   namespace   std;

main(){
    int i=0,&r=i;
    auto a=r;
    std::cout<<a;

    const int ci=0,&cj=ci;
    decltype(ci) x=0;
}