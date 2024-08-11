#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<int> arr = {1,2,3,4,5};
    stack<int> st;
    for(auto it:arr){
        st.push(it);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    
    
    return 0;
}