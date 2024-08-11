#include<bits/stdc++.h>

using namespace std;



int main(){
    map<string,int> mymap = {
        {"kunal",2},
        {"chulbul",3},
        {"papu",4},
        {"damru",5}
    };
    stack<int> st;
    for(auto it:mymap){
        st.push(it.second);
    }
    bool k = true;
    while(!st.empty() && k){
        cout<<st.top()<<" ";
        if(st.top()%2==0){
            k=false;
        }
        st.pop();
    }
    
    
    return 0;
}