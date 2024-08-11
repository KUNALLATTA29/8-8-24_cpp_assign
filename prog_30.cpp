#include<bits/stdc++.h>

using namespace std;



int main(){
    map<int,int> mymap = {
        {1,222},
        {2,243},
        {3,434},
        {4,586}
    };
    stack<int> st;
    for(auto it:mymap){
        st.push(it.first);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}