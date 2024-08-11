#include<bits/stdc++.h>

using namespace std;



int main(){
    
    vector<double> arr = {2.1,4.2,5.5,1.6,22.4};
    stack<double> st;
    for(auto it:arr){
        st.push(it);
    }
    double sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum;
    
    return 0;
}