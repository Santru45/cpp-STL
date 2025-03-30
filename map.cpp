#include<iostream>
#include<map>
using namespace std;

//Note: charactertitic of maps is that - Keys are unique and are automatically sorted lexicographically

int main(){
    map<int,string> m;

    m[1] = "camera";
    m[2] = "torch";
    m[4] = "laptop";
    
    for(auto val : m){
        cout<<val.first<<" "<<val.second<<endl;
    }

    m.emplace(3,"earbuds");
    m.insert({5 , "speaker"});

    //After addition using insert() and emplace functions
    cout<<"After addition of elements"<<endl;
    for(auto val : m){
        cout<<val.first<<" "<<val.second<<endl;

    }
    return 0;
}