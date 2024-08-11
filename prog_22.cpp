#include<bits/stdc++.h>

using namespace std;



int main(){
    
    map<int,string> mymap ={
        {1,"kunal"},
        {2,"dholu"},
        {3,"babu"},
        {4,"shona"}
    };
    stack<map<int,string>> st;
    
    st.push(mymap);
    
    while(!st.empty()){
        map<int,string> k = st.top();
        for(auto it:k){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<endl;
        st.pop();
    }
    
    return 0;
}