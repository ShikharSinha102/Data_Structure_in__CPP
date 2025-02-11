#include <iostream>
#include<climits>
using namespace std;

class Stack
{

    int capacity;
    int* arr;
    int top;

    public:
        Stack(int c){
            this->top = -1;
            this->capacity = c;
            arr = new int[c];
            
        }

        void push(int data ){
            if(top == capacity && capacity == 1  ){
                cout<<"overflow";
                return ;
                
            }
            this->top++;
            this->arr[this->top] = data;
        }


      int  pop(){
            if( this->top == -1){
                cout<<"underflow";
                return INT_MIN;
            }
            
            this->top--;
            
        }

        int gettop(){
            if(this->top == -1){
                cout<<"underflow";
                return INT_MIN;
            }
            return this->arr[this->top];
        }

        bool isEmpty(){
            return this->top == -1;
        }

        int size(){
            return this->top +1;
        }

        bool isFull(){
            return this->top == this->capacity;
        }
};

int main(){
    Stack st(5);

    st.push(10);
    st.push(120);
    
    st.push(130);
    
    st.push(104);
    st.pop();
    cout<<st.gettop();

    
    
    
    return 0;
    
}