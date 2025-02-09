#include <iostream>
using namespace std;

class Node{
    public: 




    int val;
    Node* next;
    Node(int data){
        val = data ;
        next = NULL;

    }
    

};

class circularLinkedList{
    public:

    Node* head;


    circularLinkedList(){
        head = NULL;

    }


    void insertatstart(int val){

        Node* new_node = new Node(val);




    }

};

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int data)
//     {
//         val = data;
//         next = NULL;
//     }
// };

// class circularlinkedlist
// {

// public:
//     Node *head;

//     circularlinkedlist()
//     {
//         head = NULL;
//     }

//     void insertAtStart( int val)
//     {

//         Node *new_node = new Node(val);

//         if (head == NULL)
//         {
//             head = new_node;
//             new_node->next = head;
//             return;
//         }

//         Node *tail = head;
//         while (tail->next != head)
//         {

//             tail = tail->next;
//         }

//         tail->next = new_node;
//         new_node->next = head;
//         head = new_node;
//     }
// }








// int main(){













// }