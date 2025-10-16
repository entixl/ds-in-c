#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

void printData(node* head) {
    if (head == NULL) {
        printf("Empty linked list\n");
        return;
    }

    node* ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;  
    }
}

void addToEnd(node* head , int data){
    node *ptr , *temp;
    temp = malloc(sizeof(node));
    temp -> data = data;
    temp -> link = NULL;
    ptr = head ;
    while (ptr -> link != NULL){
        ptr = ptr -> link;
    }
    ptr -> link = temp; 
}

node* addToFront(node* head , int data){
    node *temp;
    temp = malloc(sizeof(node));
    temp -> data = data;
    temp -> link = head;
    head = temp;  
    return head;  
}


void addToPos(node *head , int data , int position){
    if (position == 1) {
        addToFront(head , data);
    }
    node *ptr , *temp;
    temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    ptr = head;
    for (int i = 1; (i < position -1 && ptr != NULL); i++){
        ptr = ptr->link;
    }
    if (ptr == NULL) {
        printf("Invalid position\n");
        free(temp);
        return;
    }
    temp->link = ptr->link;
    ptr->link = temp;
}

int main() {
    node*head = NULL;
    head = malloc(sizeof(node));
    head -> data = 10;
    head -> link = NULL;
    head = addToFront(head , 5);
    head = addToFront(head , 100);
    addToEnd(head , 20);
    addToPos(head , 30 , 1);
    printData(head);
    free(head);
    return 0;
}
