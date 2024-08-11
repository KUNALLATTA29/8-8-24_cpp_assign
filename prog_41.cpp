#include<bits/stdc++.h>

using namespace std;



int main(){
    map<string,double> mymap = {
        {"kunal",2.3},
        {"papu",3.6},
        {"papu",4.8},
        {"damru",5.9}
    };
    stack<string> st;
    for(auto it:mymap){
        st.push(it.first);
    }
    map<string,int> map2;
    while(!st.empty()){
        cout<<st.top()<<" ";
        string s = st.top();
        st.pop();
        
        map2[s]++;
        
    }
    cout<<endl;
    for(auto it:map2){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    
    return 0;
}