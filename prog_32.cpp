#include<bits/stdc++.h>

using namespace std;



int main(){
    map<string,string> mymap = {
        {"kunal","good"},
        {"babu","great"},
        {"dholu","garam"},
        {"chi","eww"}
    };
    stack<string> st1;
    stack<string> st2;
    for(auto it:mymap){
        st1.push(it.first);
        st2.push(it.second);
    }
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    
    
    return 0;
}