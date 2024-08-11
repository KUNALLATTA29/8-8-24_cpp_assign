#include<bits/stdc++.h>
using namespace std;

stack<int> sol(stack<int> &st){
    stack<int> tem = st;
    
    int k = 0;
    k+=tem.top();
    tem.pop();
    k+=tem.top();
    st.push(k);
    return st;
}

int main(){
    
    stack<int> st;
    for(int i=1;i<=5;i++){
        st.push(i);
    }
    sol(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}