#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5};

    l.push_back(6);
    l.emplace_back(7);
    l.push_front(0);

    cout<<"After adding elements"<<endl;
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"after removing element"<<endl;
    l.pop_back();
    l.pop_back();
    l.pop_front();
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}