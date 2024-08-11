#include<bits/stdc++.h>

using namespace std;



int main(){
    map<char,int> mymap = {
        {'a',2},
        {'b',3},
        {'c',4},
        {'d',5}
    };
    stack<char> st;
    for(auto it:mymap){
        st.push(it.first);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}