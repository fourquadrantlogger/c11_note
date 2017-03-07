#include <iostream>
using namespace std;

main(){
    string c="李鹏";
    string c1("lipeng");
    string c3(102,'x');

    cout<<c<<endl<<c1<<endl<<c3<<endl;

    string in;
    cin>>in;

    for (auto ccL:in){
        cout<<ccL<<endl;
    }

    for (auto &cc:in){
        cc=toupper(cc);
    }
    cout<<in<<endl;
}