#include <stdio.h>
#include <stdlib.h>

int stack[15], i, ch, top= -1,n,x;

void push(){
    if (top == n-1)
        printf("Stack overflow!");
    else
    {
        printf("Enter the data to be inserted into stack:");
        scanf("%d", &x);
        top++;
        stack[top]= x;
        //printf("%d element entered successfully\n", &x);
    }
}

void pop(){
    if(top == -1)
        printf("Stack overlfow!");
    else
    {
        printf("Element popped is %d",stack[top]);
        top-- ;
    }
}

void display(){
    if(top == -1)
        printf("stack is empty");
    else{
        printf("Stack elemets are:");
        for(i=top; i>=0; i--)
            printf("%d", stack[i]);
        printf("Enter your next choice");
    }
}

int main() {
    
    printf("enter the size of stack: ");
    scanf("%d", &n);
    while(1)
    {
    printf("enter the choice of operation to be performed on stack:\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }

            case 2:
            {
                pop();
                break;
            }

            case 3:
            {
                display();
                break;
            }

            default:
            printf("Wrong choice entered, enter number between 1-3");
        }
    }
}
