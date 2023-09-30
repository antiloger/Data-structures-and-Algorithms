/*
this is test version of linklist.
to understand how pointers and other thing happend.
*/

#include <stdio.h>
#include <stdlib.h>

//create the node
struct Node
{
    /* data */
    int data;
    struct Node* next;
};


int main(int argc, int *argv){

    struct Node* head = NULL;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // alocate the memory for frist node
    newNode->data = 10;
    newNode->next = NULL;

    struct Node* newNode1 = (struct Node*)malloc(sizeof(struct Node));
    newNode1->data = 20;
    newNode1->next = newNode;

    struct Node* newNode2 = (struct Node*)malloc(sizeof(struct Node));
    newNode2->data = 30;
    newNode2->next = newNode1;

    struct Node* newNode3 = (struct Node*)malloc(sizeof(struct Node));   
    newNode3->data = 40;
    newNode3->next = newNode2;

    head = newNode3;

    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    
    free(newNode);
    free(newNode1);
    free(newNode2);
    free(newNode3);

}
