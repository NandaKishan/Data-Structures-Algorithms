#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* createNode(int x){
    Node* newNode = malloc(sizeof(Node));
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

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,10);

    display(head);
    freeList(&head);

    return 0;
}