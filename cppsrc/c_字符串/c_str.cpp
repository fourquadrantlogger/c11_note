#include <iostream>
#include <cstring>

using namespace std;

main(){

    //c风格字符串
    char ca[] ={'a','b','c','\0'};
    //正确
    cout<<strlen(ca)<<endl;
    //错误
    ca[] ={'a','b','c'};
    cout<<strlen(ca)<<endl;
}