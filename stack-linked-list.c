#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int data;
    struct node* link;
} node;
void main(){
    printf("%d",malloc(sizeof(node)));
}