#include<bits/stdc++.h>
using namespace std;


int main(){
    
    stack<int> st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    
    while(!st.empty()){
        if(st.top()%2==0){
            cout<<st.top()<<" ";
            st.pop();
        }else{
            st.pop();
        }
    }
    return 0;
}
