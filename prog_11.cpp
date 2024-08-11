#include<bits/stdc++.h>
using namespace std;

void zoom(stack<int> st){
    while(!st.empty()){
        st.pop();
    }
    
}

int main(){
    
    stack<int> st;
    for(int i=1;i<=15;i++){
        st.push(i);
    }
    zoom(st);
    
    
   
    return 0;
}
