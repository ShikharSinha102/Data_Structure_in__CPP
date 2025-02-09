#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    

    Node(int data)
    {

        val = data;
        next = NULL;
    }
};

void insertAtTop(Node *&head, int val)
{

    if (head == NULL)
    {

        Node *new_node = new Node(val);
        head = new_node;
    }
    else
    {

        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
    }
}

void insertAtposition(Node *&head, int val, int pos)
{

    if (pos == 0)
    {

        insertAtTop(head, val);
        return;
    }
    else
    {
        int i = 0;

        Node *new_node = new Node(val);

        Node *p;
        p = head;

        while (i != (pos - 1))
        {
            p = p->next;
            i++;
        }

        new_node->next = p->next;
        p->next = new_node;
    }
}

void updateAtpos(Node *&head, int val, int pos)
{

    Node *p;
    p = head;

    int i = 0;

    while (i != (pos - 1))
    {
        p = p->next;
    }
    p->val = val;
}
 void insertAtTail(Node* &head,int val){

        Node* new_node = new Node(val);

        if(head==NULL){
            head= new_node;
        }

        else{

        
        Node* p;
        p= head;
        while(p->next!=NULL){
            p= p->next;
        }

        p->next = new_node;


        }
 }



// ***********************************// DELETION ***********************************

void deleteAtpos(Node *&head, int pos)
{
    if (pos == 0)
    {
        return;
    }
    else
    {
        Node *temp;
        int i = 1;
        Node *p;
        p = head;

        while (i < pos)
        {
            p = p->next;
            i++;
        }

        temp = p->next;
        p->next = temp->next;
        free(temp);
    }
}

void deletionAthead(Node* &head)
{
    Node *temp;

    temp = head;
    head = temp->next;
    free(temp);
}


void deletionAtTail(Node* head){

    Node* p;
    Node* temp;
    p=head;
    int count=0;

    while(p->next->next!= NULL){
        p = p->next;
        // count=count+1;
        
    }
    // cout<<"the count is "<<count;

   temp = p->next;
   p->next=NULL;
   free(temp);






}

void display(Node *head)
{
    Node *p;
    p = head;
    while (p != NULL)
    {
        cout << p->val << "->";
        p = p->next;
    }
    cout << "NULL";
}

int main()
{

    Node *head = NULL;
    insertAtTop(head, 12);
    // display(head);
    insertAtTop(head, 55);
    //   display(head);
    insertAtTop(head, 15);
    // //   display(head);

    insertAtTop(head, 17);
    // //   display(head);

    insertAtTop(head,51);
    insertAtTop(head, 449);
    insertAtTop(head,567);

    insertAtTop(head, 786);

    insertAtTop(head, 101);

    insertAtTop(head, 56);

    insertAtTop(head, 99);
    display(head);

    // insertAtposition(head, 175, 2);
    // display(head);

    //   updateAtpos(head,240,2);

    //   display(head);

    cout << endl;
    cout << endl;

    // deleteAtpos(head, 2);
    // display(head);

    // deletionAthead(head);
    // display(head);

   insertAtTail(head,1011);
   display(head);

   cout<<endl;

   deletionAtTail(head);
   display(head);
    return 0;
}