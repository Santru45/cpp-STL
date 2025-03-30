#include<iostream>
#include<queue>         //this header file is enough to use priority queue
using namespace std;

int main(){
    priority_queue<int> q;  //it acts like a stack where an the largest element is on top of the queue

    //to have a priority queue where the smallest element is on top of the queue, we can initialize priority queue as following
    priority_queue<int , vector<int>, greater<int>> q1;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);
    
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    //Reverse
    q1.push(5);
    q1.push(3);
    q1.push(10);
    q1.push(4);

    cout<<endl;
    cout<<"Reverse priority"<<endl;
     while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    return 0;
}