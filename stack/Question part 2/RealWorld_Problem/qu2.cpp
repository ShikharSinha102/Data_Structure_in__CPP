/*Design a stackthat supports push, pop, top and retriving the minimum elelemn in constant time o(1)

Implement the MinStack class: 
  * MinStack() Initilaces he stack object.
  * void push( int val ) pushes the element val onto the stack.
  *  void pop() removes the element on the top of the stack.
  *  int top() gets the top ele,ment of the stack.
  *  int getMin() retrieves the minimum element in the stack.
*/


#include<iostream>
#include<stack>
#include<climits>
using namespace std;

class MinStack{

    public:
        stack<int> st;
        int  mn ;
        MinStack(){
            this->mn = INT_MAX;

        }

        void push(int val){
            if(this->st.empty()){
                this->mn = val;
                this->st.push(val);
            }else{
                this->st.push(val - this->mn);
                if(val < this->mn ){
                    this->mn = val ;
                    
                }
            }
        }

        void pop(){

            if(not this->st.empty()){
                if(this->st.top() >= 0){
                    this->st.pop();
                }else {

                    this->mn = this->mn - this->st.top();

                }
            }

        }

        int getTop(){
            if(this->st.size() == 1){
                return this->st.top();
            }
            else if(this->st.top() < 0){
                return this->mn ;
            }else{
                return this->mn = this->st.top();
            }
        }
        int getMin(){
            return this->mn;
        }


};



int main(){

    MinStack st;
    
    st.push(4);
    st.push(5);
    st.push(67);
    st.push(2);
    st.push(45);
    st.push(30);

    cout<<st.getMin();


    return 0;
}
