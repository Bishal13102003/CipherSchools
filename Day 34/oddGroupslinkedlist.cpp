#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr){}
};

class linkedList{
    private:
    Node* head;

    public:
    linkedList(){
        head = nullptr;
    }

    void insertNode(int val){
        Node* newNode = new Node(val);
        if(!head){
            head = newNode;
            return;
        }

        Node* lastNode = head;
        while(lastNode->next){
            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
    }

    void display() const{
        Node* currentNode = head;
        if(!currentNode){
            cout<<"Empty list!!!" <<endl;
            return;
        }

        while(currentNode){
            cout<<currentNode->data <<"->";
            currentNode = currentNode->next;
        }
        cout<<"nullptr" <<endl;
    }

    void oddEvenList(){
        if(!head || !head->next){
            return;
        }

        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;

        while(even && even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
    }
};
int main(){
    linkedList obj;

    int val;
    int check;
    do{
        cin>>val;
        obj.insertNode(val);
        cin>>check;
    }while(check != -1);

    obj.display();
    cout<<endl;
    obj.oddEvenList();
    cout<<"\n";
    obj.display();
    return 0;
}