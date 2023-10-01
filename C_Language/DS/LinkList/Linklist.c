#include <stdio.h>
#include <stdlib.h>

//create the node
typedef struct node
{
    int data;
    struct node *next;
}node_f;

void addToFrist(node_f **head,int data);
void show(node_f *head);

int main(int argc, int *argv){
    node_f *head = NULL;


    //adding values to link list
    addToFrist(&head, 10);
    addToFrist(&head, 20);
    addToFrist(&head, 30);
    addToFrist(&head, 40);

    show(head);

    //this will deallocate all the data we allocate
    while (head != NULL)
    {
        node_f *temp = head;
        head = head->next;
        free(temp);
    }
}

//this fuction will add value to front of the link list
void addToFrist(node_f **head,int data){

    node_f *newNode = (node_f *)malloc(sizeof(node_f));
    newNode->data = data;
    newNode->next = *head;

    *head = newNode;


}

void addToEnd(node_f **head, int data){
    node_f *newNode, *ptr;
    ptr = *head;

    newNode = (node_f *)malloc(sizeof(node_f));
    newNode->data = data;
    newNode->next = NULL;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr->next = newNode;

}

//this func will show the linklist values
void show(node_f *head){
    node_f *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
        
    }
    
}