#include <iostream>
using namespace std;

class Node
{

public:
    int val;
    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class doublyLinkedlist
{
public:
    Node *head;
    Node *tail;

    doublyLinkedlist()
    {

        head = NULL;
        tail = NULL;
    }

    void insertATTail(int val)
    {

        Node *new_node = new Node(val);

        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;

        return;
    }

    void display()
    {

        Node *temp = head;

        while (temp != NULL)
        {

            cout << temp->val << "<->";

            temp = temp->next;
        }

        cout << endl;
    }

    // ////////////////////////  Deletion Code//////.//////

    void deletion_at_Start()
    {

        if (head == NULL)
        {
            return;
        }

        Node *temp = tail;
        head = head->next;

        if (head != NULL)
        {
            tail = NULL;
        }
        else
        {

            head->prev = NULL;
        }

        free(temp);
    }

    void deleteAtEnd()
    {

        if (head == NULL)
        {
            return;
        }

        Node* temp = tail;

        tail = tail->prev;
        if (tail != NULL)
        { // condtion for single node in a doublylinkedlist;
            head = NULL;
        }
        else
        {

            tail->next = NULL;
        }

        free(temp);

        return;
    }
};

int main()
{

    doublyLinkedlist dll;

    dll.insertATTail(0);
    dll.insertATTail(1);
    dll.insertATTail(3);
    dll.insertATTail(4);
    dll.display();

    dll.deletion_at_Start();
    dll.display();

    dll.deleteAtEnd();
    dll.display();

    return 0;
}