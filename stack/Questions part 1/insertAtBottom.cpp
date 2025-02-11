#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x){

    stack<int> temp;

    while(not st.empty()){
        temp.push(st.top());
        st.pop();

    }

    st.push(x);

    while(not temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

}



int main(){
    stack<int>st;
    st.push(2);
    st.push(4);
    st.push(5);

    insertAtBottom(st, 1000);

    while(not st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    

    
    return 0;
}