#include <iostream>
using namespace std;

class Node{
    public:
    int val;

    Node* prev;
    Node* next;

    Node(int data ){
        val= data;
        prev= NULL;
        next= NULL;
    }

};


class DoublyLinkedlist{
    public:

    Node* head;
    Node* tail;

    DoublyLinkedlist(){
        head= NULL;
        tail=NULL;
    }
};

int main(){
    Node* new_node = new Node(3);
    DoublyLinkedlist dll;
    dll.head =new_node;
    dll.tail=new_node;
    cout<< "I am here "<<dll.tail->val<<endl;
    return 0;


}