#include<iostream>
#include<stack>
using namespace std;



void reverseStack(stack<int> &st){

    //base condition

    if(st.empty()){
        return;
    }
    
    int curr = st.top();
    st.pop();
    reverseStack(st);

    

    stack<int> temp;

    while(not st.empty()){
        temp.push(st.top());
        st.pop();

    }

    st.push(curr);

    while(not temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

}


    // pushAtBottom(st, curr);
    // cout<<st.top();



    


int main(){
    stack<int> st;
    st.push(9);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);

    reverseStack(st);

    while (not st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;

}