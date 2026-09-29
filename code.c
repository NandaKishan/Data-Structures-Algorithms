#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int x){
    Node* newNode = malloc(sizeof *newNode);
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int x){
    Node* newNode = createNode(x);
    newNode->next = *head;
    *head = newNode;
}

void insertInMiddle(Node** head, int position, int x){
    if(position == 1){
        insertAtBeginning(head,x);
        return;
    }
    Node* newNode = createNode(x);
    Node* temp = *head;
    for(int i=1; i<position-1; i++){
        temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtEnd(Node** head, int x){
    Node* newNode = createNode(60);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* head){
    for(Node* temp = head; temp!=NULL; temp=temp->next){
        printf("%d\t",temp->data);
        printf("\n");
    }
}

void freeList(Node** head){
    Node* temp;
    while(*head != NULL){
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main(){
    Node* head = NULL;
    insertAtBeginning(&head,50);
    insertAtBeginning(&head,40);
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,10);
    insertAtEnd(&head,60);
    insertInMiddle(&head,3,18);

    display(head);
    freeList(&head);

    return 0;
}