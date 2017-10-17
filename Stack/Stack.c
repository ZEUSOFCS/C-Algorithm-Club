/*
 * Author: C Algorithm Club 
 *
 * Description: C program that implement stack. Stack is a LIFO data structure.
 * 
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack. Push and pop are O(1) operations.
 *
 */

#include <stdio.h>
#define MAXSIZE 5

struct Stack {
  
  int stack[MAXSIZE]
  int top 
    
};

void push();
int pop();
void display();

void main () {
  
 int choice;
 int option = 1
 Stack.top = -1;
  
 printf ("STACK OPERATION\n");
 while (option) {
   
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH                    \n");
        printf ("      2    -->    POP                     \n");
        printf ("      3    -->    DISPLAY                 \n");
        printf ("      4    -->    EXIT                    \n");
        printf ("------------------------------------------\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        
        // flush function allows you to flush [clear] the input buffer
        fflush (stdin);
   
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}

http://www.sanfoundry.com/c-program-stack-implementation/
