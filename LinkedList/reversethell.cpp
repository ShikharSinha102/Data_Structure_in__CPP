#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

        Node(int data){
            val= data;
            next =NULL;
        }

};


 class Linkedlist{

    public:
    
        Node* head;
        Linkedlist(){
            head= NULL;

        }
    void insertAtTail(int val){

        Node* new_node = new Node(val);

        if(head==NULL){
            head= new_node;
        }

        else{

        
        Node* p;
        p= head;
        while(p->next!=NULL){
           p = p->next;
        }

        p->next= new_node;


        }


    
    }


    void deleteAtAlternate(){
    Node* p ;
    Node* temp;
    p= head;

    while(p!=NULL && p->next!= NULL){
        temp = p->next;
        p->next=temp->next;
        free(temp);

        p=p->next;

        


    }


    }




    void display(){
        Node* p;
        p=head;

        while(p!=NULL){

            cout<<p->val<<"->";
            p= p->next;

        }
        cout<<"NULL";
    }

 };


 Node* findMiddleelement(Node* &head){
    Node* slow = head;
    Node* fast = head;


while(fast!=NULL && fast->next!= NULL){
    slow = slow->next;
    fast = fast->next->next;


 }


 return slow;
 }


 void reversePrint(Node* head){
    // base conditiona

    if(head==NULL){
        return;

    }

    reversePrint(head->next);
    cout<<head->val<<"  ";
 }



 Node* reverseAll(Node* &head)
{
    Node* prevptr = NULL;
    Node* curptr = head;

    while(curptr!=NULL){
        Node* nexttptr = curptr->next;
        curptr->next = prevptr;
        prevptr= curptr;
        curptr= nexttptr;
    }

    //when this loop ends, preptr pointing to my last node which is new head 

    Node* new_head = prevptr;
    return new_head;
}
int main(){

    Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    // ll.deleteAtAlternate();
    ll.display();


    // Node* middleElement;
    // middleElement= findMiddleelement(ll.head);

    // cout<<endl;
    // cout<<endl;

    // cout<<"middleElement  :   "<<middleElement->val;

cout<<endl;
    // cout<<"Reverse Order Print the linkedlist : ";
    // reversePrint(ll.head);



    cout<<"Reverse the Linked List Structure :  ";

     ll.head= reverseAll(ll.head);
     ll.display();

    

                                 
    return 0;

}