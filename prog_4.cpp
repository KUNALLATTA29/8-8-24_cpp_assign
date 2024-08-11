#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<char> st;
    st.push('A');
    st.push('B');
    st.push('C');
    st.push('D');
    vector<char> arr;
    while(!st.empty()){
        cout<<st.top()<<endl;
        arr.push_back(st.top());
        st.pop();
    }
    cout<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
