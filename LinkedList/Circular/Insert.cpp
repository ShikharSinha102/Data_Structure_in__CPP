#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circularlinkedlist
{

public:
    Node *head;

    circularlinkedlist()
    {
        head = NULL;
    }

    void insertAtStart(int val)
    {

        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {

            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAttail(int val)
    {

        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
        }

        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->next = head;
        head = new_node->next;
    }

    void insertAtkthposition(int val, int pos)
    {

        int i = 2;

        Node *new_node = new Node(val);
        Node *temp = head;

        while (i != pos)
        {

            temp = temp->next;
            i++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteatstart()
    {

        if (head == NULL)
        {

            return;
        }

        Node *temp;
        Node *tail = head;

        while (tail->next != head)
        {
            tail = tail->next;
        }

        temp = head;

        tail->next = head->next;
        head = tail->next;
        free(temp);
    }

    void deleteAtEnd()
    {

        if (head == NULL)
        {
            return;
        }

        // Reaching to the second last node in the circular linked list;

            Node* tail = head;

            while( tail->next->next != head)
            {
                tail = tail->next ; 

            }

            Node* temp = tail->next ;
            tail->next = head;
            head = tail->next;
            free(temp);


    }

    void deleteatpostion(int pos){

        if (head == NULL){
            return;

        }

        int i = 0;
        Node* p = head;
        Node* temp ;

        
        while(i<pos){
          p = p->next;
        }




        

        temp = p->next;
        p->next = temp->next;
        
        free(temp);





    }

    void printCicular()
    {

        Node *temp = head;
        for (int i = 0; i < 15; i++)
        {

            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }

    void display()
    {

        Node *temp = head;
        do
        {

            cout << temp->val << "<->";
            temp = temp->next;
            /* code */
        } while (temp != head);

        cout << endl;

        // while(temp->next!=head){
        //     cout<<temp->val<<"->";
        //     temp=temp->next;
        // }
    }
};

int main()
{

    circularlinkedlist cll;

    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.insertAtStart(4);

    cll.deleteatpostion(2);
    cll.display();

    // cll.printCicular();
    

    return 0;
}