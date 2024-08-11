#include<bits/stdc++.h>
using namespace std;

bool sol(stack<int> st, string s){
    string tem;
    while(!st.empty()){
        tem+=st.top();
        st.pop();
    }
    if(tem==s){
        return true;
    }
    return false;
}

int main(){
    
    stack<int> st;
    string s = "kunallatta";
    for(auto it:s){
        st.push(it);
    }
    if(sol(st,s)){
        cout<<"it's palindrome";
    }else{
        cout<<"it's not palindrome";
    }
    
    
    return 0;
}