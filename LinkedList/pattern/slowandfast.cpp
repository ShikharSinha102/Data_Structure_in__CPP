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

class linkedlist
{

public:
    Node *head;

    linkedlist()
    {
        head = NULL;
    }

    void insertAtstart(int val)
    {

        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        new_node->next = head;
        head = new_node;
    }


    void find_the_mid_node(){

        Node* slow = head;
        Node* fast = head;

        while( fast != NULL){

            slow = slow->next;
            fast = fast->next->next;
        }

        cout<<slow->val;
        cout<<endl;
        cout<<fast->next;




    }

    void display()
    {

        Node *temp = head;

        while (temp != NULL)
        {

            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    linkedlist ll;

    ll.insertAtstart(1);
    ll.insertAtstart(2);
    ll.insertAtstart(3);
    ll.insertAtstart(4);
    ll.insertAtstart(5);
    ll.insertAtstart(6);
    ll.insertAtstart(7);
    ll.insertAtstart(8);
    ll.insertAtstart(9);
    ll.insertAtstart(10);
    ll.display();

    ll.find_the_mid_node();

    return 0;
}