#include<bits/stdc++.h>
using namespace std;

int zoom(stack<int> st){
    return st.size();
    
}

int main(){
    
    stack<int> st;
    for(int i=1;i<=5;i++){
        st.push(i);
    }
    cout<<zoom(st);
    
    
   
    return 0;
}
