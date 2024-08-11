#include<bits/stdc++.h>
using namespace std;

int find(stack<int> st){
    int max=0;
    while(!st.empty()){
        if(max<st.top()){
            max=st.top();
            st.pop();
        }else{
            st.pop();
        }
    }
    return max;
}

int main(){
    
    stack<int> st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    cout<<find(st);
    
   
    return 0;
}
