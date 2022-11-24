#include <stdio.h>
#include <stdlib.h>

int i, x, n, ch, top, stack[100];

void isEmpty()
{
    if (top == -1) {
        printf("Stack is Empty!\n");
    }
    else {
        printf("Stack is not empty!\n");
    }
}

void push()
{   
    if (top >= n-1) {
        printf("Stack over-flow!\n");
    }
    else {
        printf("Enter a value to be pushed : ");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1) {
        printf("Stack under-flow!\n");
    }
    else {
        printf("The popped element is %d\n", stack[top]);
        top--;
    }
}

void display(){
    if(top>=0)
    {
        printf("The elements in the stack : ");
        for (i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
    else{
        printf("The stack is Empty !");
    }
}

int main()
{
    
    top = -1;
    
    printf("Enter the size of the stack : ");
    scanf("%d",&n);
    printf("\nSTACK USING ARRAY :- \n1) Check if the stack is empty \n2) Display the contents of the stack \n3) Push \n4) Pop \n5) Exit");

    do
    {
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1 :
              isEmpty();
              break;
            
            case 2 :
              display();
              break;

            case 3 :
              push();
              break;

            case 4 :
              pop();
              break;

            case 5 :
              printf("Program Exited...Goodbye!\n");
              break;

            default :
              printf("Please enter a valid choice!\n");
              break;
        }
    }
    while (ch != 5);

    return 0;
}
