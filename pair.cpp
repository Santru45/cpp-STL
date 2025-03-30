#include<iostream>

using namespace std;

int main(){
    pair<int , string> p = {1,"Santru"};

    cout<<p.first<<endl;
    cout<<p.second<<endl;

   pair<int , pair<char , string>> p1 = {5 , {'x', "Programmer"}};
   cout<<p1.first<<endl;
   cout<<p1.second.first<<endl;
   cout<<p1.second.second<<endl; 

   

    return 0;
}