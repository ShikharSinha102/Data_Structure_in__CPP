#include<iostream>
#include<stack>
using namespace std;

// Important interview question;


bool isValid (string str){
    stack<char> st;

    for(int i= 0 ; i<str.size() ; i++){
        char ch= str[i] ;
        if(ch == '[' or ch == '(' or ch == '{'){
            st.push(ch);

        }
        else{
            // closing brackets;

            if( ch == ')' and !st.empty() and st.top() == '('){
                st.pop();
            }
            else if ( ch == ']' and !st.empty() and st.top() == '['){
                st.pop();
            }
            else if ( ch == '}' and !st.empty() and st.top() == '{'){
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();

}

int main(){
    string str = "({[({})]})";
    cout<<isValid(str);

    return 0;
}