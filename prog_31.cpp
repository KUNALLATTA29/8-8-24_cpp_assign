#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<char> arr = {'a','b','c','d','e'} ;
    stack<char> st;
    for(auto it:arr){
        st.push(it);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}