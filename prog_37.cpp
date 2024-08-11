#include<bits/stdc++.h>

using namespace std;

int maxi(stack<int> st){
    int max=0;
    while(!st.empty()){
        if(st.top()>max){
            max=st.top();
        }
        st.pop();
    }
    return max;
}

int main(){
    vector<int> arr = {1,7,3,4,5};
    stack<int> st;
    for(auto it:arr){
        st.push(it);
    }
    
    cout<<maxi(st);
    
    return 0;
}