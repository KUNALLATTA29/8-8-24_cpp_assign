#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<float> arr = {2.1,4.2,5.5,1.6,22.4};
    stack<float> st;
    for(auto it:arr){
        st.push(it);
    }
    bool k = true;
    while(!st.empty() && k){
        cout<<st.top()<<" = "<<st.top()/st.size()<<endl;
        
        st.pop();
    }
    
    
    return 0;
}