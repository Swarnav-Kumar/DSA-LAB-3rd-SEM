#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;
struct Node* top2=NULL;

int isEmpty (struct Node* top)
{
    return top == NULL;
}

void push (int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    if (top == NULL) {
        newNode->next = NULL;
    }
    else {
        newNode->next = top;
    }
    top = newNode;
}

void push2(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    if (top2 == NULL) {
        newNode->next = NULL;
    }
    else {
        newNode->next = top2;
    }
    top2 = newNode;
}

int pop()
{
    if (top == NULL) {
        printf("Stack Underflow\n");
    }
    else {
        struct Node *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
}

int pop2()
{
    if (top2 == NULL) {
        printf("Stack Underflow\n");
    }
    else {
        struct Node *temp = top2;
        int temp_data = top2->data;
        top2 = top2->next;
        free(temp);
        return temp_data;
    }
}

void display()
{
    if(top == NULL)
    {
        printf("\nStack underflow\n");
    }
    else{
        printf("The stack is: \n");
        struct Node *temp=top;
        while(temp->next!=NULL)
        {
            printf("%d--->",temp->data);
            temp=temp->next;
        }
        printf("%d\n\n",temp->data);
    }
}

void display2()
{
    if(top2 == NULL)
    {
        printf("\nStack underflow\n");
    }
    else{
        printf("The reversed stack is: \n");
        struct Node *temp=top2;
        while(temp->next!=NULL)
        {
            printf("%d--->",temp->data);
            temp=temp->next;
        }
        printf("%d\n\n",temp->data);
    }
}


int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    display();

    push2(pop());
    push2(pop());
    push2(pop());
    push2(pop());
    push2(pop());
    push2(pop());
    display2();


    
    return 0;
}
