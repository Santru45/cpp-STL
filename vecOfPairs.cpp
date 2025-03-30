#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,string>> vec = {{1,"sa"},{2,"re"},{3,"ga"},{4,"ma"}};

    vec.push_back({5,"pa"});
    vec.emplace_back(6,"dha");

    for(pair<int,string> val : vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"OR"<<endl;

    //here keyword auto is used which minimizes the extra struggle to write the whole pair datatype
    for(auto val : vec){
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}