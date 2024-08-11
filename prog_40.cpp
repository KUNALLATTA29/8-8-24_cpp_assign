#include<bits/stdc++.h>

using namespace std;

float ave(stack<float> st){
    int c = 0;
    float k =0;
    while(!st.empty()){
        c++;
        k+=st.top();
        st.pop();
    }
    
    return k/c; 
}

int main(){
    vector<float> arr = {2.1,4.2,5.5,1.6,22.4};
    stack<float> st;
    for(auto it:arr){
        st.push(it);
    }
    cout<<ave(st);
    
    
    return 0;
}