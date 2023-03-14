/* 
Homework 2, Week 3;
    Implement a single linked list to store int data type in each node of the list in C or C++ programming language.
    The implementation must include “insert”, “search” and “delete” procedure .
*/

#include <iostream>
using namespace std;

//Node structure for linked list
//holds int data and a pointer of the next node
struct Node {
    int data;
    Node* next;
};

//pointer for head node
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head = NULL;
        }
        //inserts a new node to the end
        void insert(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
            }
            else {
                Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        void search(int value) {
            Node* temp = head;
            int pos = 1;
            bool found = false;

            while (temp != NULL) {
                if (temp->data == value) {
                    cout << "\nValue " << value << " found at position " << pos << endl;
                    found = true;
                    break;
                }
                pos++;
                temp = temp->next;
            }
            if (!found) {
                cout << "Value " << value << " not found in the list." << endl;
            }
        }
        void deleteNode(int value) {
            Node* temp = head;
            Node* prev = NULL;
            bool found = false;

            while (temp != NULL) {
                if (temp->data == value) {
                    found = true;
                    break;
                }
                prev = temp;
                temp = temp->next;
            }

            if (found) {
                if (prev == NULL) {
                    head = temp->next;
                }
                else {
                    prev->next = temp->next;
                }
                delete temp;
                cout << "\nValue " << value << " deleted from the list." << endl;
            }
            else {
                cout << "Value " << value << " not found in the list.\n" << endl;
            }
        }
        //displaying the entire list
        void display() {
            Node* temp = head;

            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    LinkedList myList;

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);
    myList.insert(50);
    myList.display();

    myList.search(30);
    myList.search(60);

    myList.deleteNode(40);
    myList.deleteNode(60);

    cout << "The new LinkedList: " << endl;
    myList.display();
    
    return 0;
}