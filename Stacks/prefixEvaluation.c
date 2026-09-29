#include <stdio.h>
#include <ctype.h>
#include <string.h>

int stack[100];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char expression[100];

    printf("Enter prefix expression: ");
    scanf("%s", expression);

    int length = strlen(expression);

    for (int i = length - 1; i >= 0; i--)
    {
        char ch = expression[i];

        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            int a = pop();
            int b = pop();

            int result;

            if (ch == '+')
                result = a + b;

            else if (ch == '-')
                result = a - b;

            else if (ch == '*')
                result = a * b;

            else if (ch == '/')
                result = a / b;

            else
                result = 0;

            push(result);
        }
    }

    printf("Answer = %d\n", pop());

    return 0;
}