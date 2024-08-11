#include<bits/stdc++.h>

using namespace std;


int main(){
    map<int,float> mymap = {
        {1,2.3},
        {2,66.3},
        {3,5.9},
        {4,9.9}
    };
    stack<pair<int,float>> st;
    for(auto it:mymap){
        st.push(it);
    }
    

    while(!st.empty()){
        auto k = st.top();
        cout<<k.first<<":"<<k.second<<endl;
        st.pop();
    }
    
    return 0;
}
