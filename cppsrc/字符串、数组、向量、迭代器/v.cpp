#include<vector>
#include<iostream>

using namespace std;

main(){
    vector<int> v5={1,3,234,31,5};
    v5.push_back(10086);


    for (int &i:v5){
        cout<<i<<endl;
    }



}