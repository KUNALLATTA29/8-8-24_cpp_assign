#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    stack<int> st;
    for(auto it:arr){
        st.push(it);
    }
    int k =0;
    while(!st.empty() && k<5){
        cout<<st.top()<<" ";
        st.pop();
        k++;
    }
    
    return 0;
}