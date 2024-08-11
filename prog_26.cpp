#include<bits/stdc++.h>

using namespace std;



int main(){
    map<string,int> mymap = {
        {"kunal",2},
        {"chulbul",3},
        {"papu",4},
        {"damru",5}
    };
    stack<map<string,int>> st;
    st.push(mymap);
    
    while(!st.empty()){
        map<string,int> k = st.top();
        for(auto it: k){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<endl;
        st.pop();
    }
    
    
    return 0;
}