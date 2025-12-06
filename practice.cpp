#include<iostream>
using namespace std;
//creating node
class Node{
    public:
    int data; // data to input
    Node *next;// pointer of the next data 
    Node(int data){
        this ->data= data; 
        this ->next= NULL;
    }
};

//Inserting node at head 
void InsertingHead(Node* &head,int data){
    Node* temp = new Node(data);// creatning a new node as temp
    temp->next= head; // shifting the position of first node with temp 
    head = temp; // labeling temp as head 
}
//Inserting node at the Middle 
void InsertAtmiddle(Node* &head,int position, int data){
    Node * temp = head;
    int cnt = 1;
    while(cnt <position -1){
        temp= temp->next;
        cnt++;
    }
    Node* NodeToInsert = new Node(data);
    NodeToInsert->next = temp ->next;
    temp->next = NodeToInsert;
}

//Inserting node at tail 
void insertingTail(Node* &tail,int data){
    Node *temp = new Node(data);
    tail-> next = temp;
    tail = temp;
}

//Printing node 
void printinglist(Node*head){
    Node * temp = head; // declearing teh head as temp 
    while (temp != NULL)
    {
        cout<< temp->data<< " ";// printing the temp data
        temp = temp ->next;// Moving the temp to the next temp which holds the data
    }
    cout <<endl;   
}
int main(){
    Node* node1 = new Node(10);// making a new node 
    Node* head = node1;// Declearing Head 
    Node* tail = node1;//Declearing Tail
    InsertingHead(head,13);
    insertingTail(tail,90);
    InsertAtmiddle(head,2, 44);
    printinglist(head);

    
    
    return 0;

}