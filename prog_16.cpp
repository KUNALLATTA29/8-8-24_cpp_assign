#include<bits/stdc++.h>
using namespace std;

stack<int> sol(stack<int> st){
    stack<int> ans;
    while(!st.empty()){
        if(st.top()%2==0){
            ans.push(st.top());
            st.pop();
        }else{
            st.pop();
        }
    }
    return ans;
}

int main(){
    
    stack<int> st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    stack<int> ans = sol(st);
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    
    return 0;
}