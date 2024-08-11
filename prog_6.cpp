#include<bits/stdc++.h>
using namespace std;

stack<int> rever(stack<int> st){
    stack<int> temp;
    
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    
    return temp;
}
int main(){
    
    stack<int> st;
    int a,b,c,d,e,f,g,h,i,j;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    st.push(a);
    st.push(b);
    st.push(c);
    st.push(d);
    st.push(e);
    st.push(f);
    st.push(g);
    st.push(h);
    st.push(i);
    st.push(j);
    stack<int> ans = rever(st);
    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
    return 0;
}
