#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void insert(Node*& head, int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteValue(Node*& head, int value){
    if(head == nullptr){
        cout<<"List is empty." <<endl;
        return;
    }

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr && temp->next->data != value){
        temp = temp->next;
    }

    if(temp->next == nullptr){
        cout<<"Value not found in the list." <<endl;
    }
    else{
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}

void printList(Node* head){
    if(head == nullptr){
        cout<<"List is empty." <<endl;
        return;
    }
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data;
        if(temp->next != nullptr){
            cout<<"->";
        }
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = nullptr;
    int n, value, deleteVal;

    cout<<"Enter the number of elements in the linked list: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin>>value;
        insert(head, value);
    }

    cout<<"Original List: ";
    printList(head);

    cout<<"Enter the value to delete: ";
    cin>>deleteVal;

    deleteValue(head, deleteVal);

    cout<<"Updated List: ";
    printList(head);

    return 0;
}