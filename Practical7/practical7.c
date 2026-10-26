#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 5

char arr[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX-1)
    {
        printf("\nArray Filled");
    }
    top++;
    arr[top] = value;
    printf("\nnumber %d Pushed ", arr[top]);
}

int pop()
{
    int poppedValue = arr[top--];
    printf("\nNumber %d popped", poppedValue);
    return poppedValue;
}


int Evaluate(char Exp[]){
    char ch;
    int result;
    int solution;
    for (int i = 0; i<MAX;i++)
    {
        ch = Exp[i];
        if(isdigit(ch))
        {
            push((ch-'0'));
        }
        else{
            int v1 = pop();
            int v2 = pop();

            switch(ch){
                case '+': 
                    result = v1+v2;
                    push(result);
                    break;
                case '-':
                    result = v1-v2;
                    push(result);
                    break;
                case '*':
                    result = v1*v2;
                    push(result);
                    break;
                case '/':
                    result = v1/v2;
                    push(result);
                    break;
                default:
                    printf("\ninvalid input");
            }
        }
    }
    solution = arr[0];
    return solution;
}

int main()
{
    char exp[MAX];

    for(int i = 0; i < MAX; i++){
        printf("Enter element: ");
        scanf(" %c", &exp[i]);
    }
    printf("Entered Expression is: \n");
    for(int i = 0; i < MAX; i++)
    {
        printf("%c ", exp[i]);
    }
    printf("\nPostfix Evaluation of the given expression is: %d", Evaluate(exp));
}
