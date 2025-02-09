
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val= data;
        prev =NULL;
        next= NULL;
        
    }
};


class DoublyLinkedlist{
    public:

    Node* head;
    Node* tail;

    DoublyLinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void display(){
    Node* temp = head;
      while(temp!=NULL){
        cout<<temp->val<<"<->";
        temp = temp->next;
        

    }
    cout<<endl;
}


void insertAtStart(int val){

    Node* new_node = new Node(val);
    if(head==NULL){

        head = new_node;
        tail = new_node;
        
        return;




    }


    new_node->next = head;
    head->prev = new_node;
    head=new_node;
};






    void insertAtTail(int val){
        Node * new_node= new Node(val);
        if(tail==NULL){
            head= new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;

         return;

    }
   


   void insertAtKthpostion(int val ,int k ){

    
    Node* temp = head; 

    int count =0;

    while(count<=k){
        temp = temp->next;
        count++;

    }
    Node* new_node= new Node(val);
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next->prev = new_node;



return ;








   }

};


int main(){
    DoublyLinkedlist dll;

    
    dll.insertAtStart(17);
    //  dll.display();
      

    
    
      dll.insertAtStart(2);
    //    dll.display();
      
     

      
      dll.insertAtStart(13);
    //   dll.display();



      dll.insertAtTail(3);
       dll.display();



       dll.insertAtKthpostion(9,3);  
      dll.display();    
      
      return 0;

}


