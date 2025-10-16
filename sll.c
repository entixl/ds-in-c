#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

node*head = NULL;

void printData() {
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

void addToEnd(int data){
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
void addToFront(int data){
    node *temp;
    temp = malloc(sizeof(node));
    temp -> data = data;
    temp -> link = head;
    head = temp;    
    
}

int main() {
    head = malloc(sizeof(node));
    head -> data = 10;
    head -> link = NULL;
    addToFront(5);
    addToFront(100);
    addToEnd(20);
    addToEnd(30);
    printData();
    free(head);
    return 0;
}
