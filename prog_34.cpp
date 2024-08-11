#include<bits/stdc++.h>

using namespace std;



int main(){
    map<int,bool> mymap = {
        {1,true},
        {2,false},
        {3,true},
        {4,true}
    };
    stack<bool> st;
    
    for(auto it:mymap){
        st.push(it.second);
    }
    int sum =0;
    while(!st.empty()){
        cout<<st.top()<<" ";
        if(st.top()==true){
            sum++;
        }
        st.pop();
    }
    cout<<endl;
    cout<<sum;
    
    
    return 0;
}