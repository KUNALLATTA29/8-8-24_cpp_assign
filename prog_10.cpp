#include<bits/stdc++.h>
using namespace std;

bool find(stack<int> st, int k){
    while(!st.empty()){
        if(st.top()==k){
            return true;
        }else{
            st.pop();
        }
    }
    return false;
}

int main(){
    
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(7);
    st.push(11);
    int k = 7;
    if(find(st,k)){
        cout<<"found it";
    }else{
        cout<<"not found";
    }
    
    
   
    return 0;
}
