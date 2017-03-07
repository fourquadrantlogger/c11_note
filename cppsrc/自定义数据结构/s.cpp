#include<iostream>

using  namespace   std;

struct User{
  std::string name;
  int age;
};

main(){
   User u={"lpeng",123};
   std::cout<<u.age<<endl<<u.name<<endl;
}