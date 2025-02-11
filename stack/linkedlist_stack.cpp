#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
        Node(int d){
            this->data = d;
            this->next = NULL;

        }

};

class stack{
    Node* head;
    int capacity;
    int currSize;

     public: 

        stack( int c){

            head = NULL;
            this->capacity = c;
            this->currSize = 0;


        }

        void push(int val){

            if( this->currSize == this->capacity){
                cout<<"overflow";
                return;
            }
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            this->currSize++;


        }

        int  pop(){
            if( this->head == NULL ){
                cout<<"underflow";
                return INT_MIN;
            }

            Node* newNode = this->head->next;
            this->head->next = NULL;
            Node* tobeRemoved = this->head;
            int result  = tobeRemoved->data;
            delete this->head;
            this->head = newNode;
            return result;
            

            
        }
        int size (){
            return this->currSize;
        }

        bool isEmpty(){
            return this->head == NULL;
        }
        
        bool isFull (){
            return this->currSize == this->capacity;
        }

        int gettop(){
            if(this->head == NULL){
                cout<<"Empty stack";
                return INT_MIN; 
            }
            return this->head->data;        }

        
};

int main(){
    stack st(4);
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    cout<<st.gettop();
    return 0;

}