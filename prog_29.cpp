#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<pair<int,string>> arr = {
        {1, "kunal"},
        {2, "bablu"},
        {3, "kalu"},
        {4, "ram"}
    };
    stack<vector<pair<int,string>>> st;
    st.push(arr);
    
    while(!st.empty()){
        vector<pair<int,string>> k = st.top();
        for(auto it: k){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<endl;
        st.pop();
    }
    
    
    return 0;
}