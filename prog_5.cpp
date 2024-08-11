#include<bits/stdc++.h>
using namespace std;

int findsum(stack<int> st){
    stack<int> temp = st;
    int sum=0;
    while(!temp.empty()){
        sum+=temp.top();
        temp.pop();
    }
    
    return sum;
}
int main(){
    
    stack<int> st;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    st.push(a);
    st.push(b);
    st.push(c);
    st.push(d);
    st.push(e);
    cout<<findsum(st);
    return 0;
}
