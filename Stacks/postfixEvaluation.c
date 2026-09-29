#include<stdio.h>
#include<ctype.h>

int stack[100];
int top = -1;

void push (int x){
    stack[++top] = x;
}

int pop(){
    return stack[top--];
}

int main(){

    char expression[100];
    printf("Enter postfix expression: ");
    scanf("%s", expression);

    for(int i=0; expression[i] != '\0'; i++){
        char ch = expression[i];

        if(isdigit(ch)){
            push(ch - '0');
        }else{
            int a = pop();
            int b = pop();
            int result;

            if (ch == '+')
                result = b + a;

            else if (ch == '-')
                result = b - a;

            else if (ch == '*')
                result = b * a;

            else if (ch == '/')
                result = b / a;

            else
                result = 0;

            push(result);
        
        }
    }

    printf("Answer = %d\n", pop());

    return 0;
}
