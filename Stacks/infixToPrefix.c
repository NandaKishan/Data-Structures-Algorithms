#include<stdio.h>
#include<ctype.h>
#include<string.h>

char stack[100];
int top = -1;

void push(char x){
    stack[++top] = x;
}

char pop(){
    return stack[top--];
}

int priority(char x){
    if(x == '^'){
        return 3;
    }else if(x == '*' || x == '/'){
        return 2;
    }else if(x == '+' || x == '-'){
        return 1;
    }
}

int main(){
    char infix[100];
    printf("Enter infix expression : ");
    scanf("%s", infix);

    char revInfix[100] = strrev(infix);

    for(int i=0; revInfix[i] != '\0'; i++){
        if(revInfix[i] == '('){
            revInfix[i] = ')';
        }else if(revInfix[i] == ')'){
            revInfix[i] = '(';
        }
    }

    for(int i=0; revInfix[i] != '\0'; i++){
        char x = revInfix[i];

        //operand
        if(isalnum(x)){
            printf("%c", x);
        }

        //opening parenthesis
        else if(x == '('){
            push(x);
        }

        //closing parenthesis
        else if(x == ')'){
            while(stack[top] != '('){
                printf("%c", pop());
            }
            pop();
        }

        //operator
        else{
            while(top != -1 && stack[top] != '(' && priority(stack[top]) >= priority(x)){
                printf("%c", pop());
            }
            push(x);
        }
    }

    while(top != -1){
        printf("%c", pop());
    }

    char ans[100] = strrev(revInfix);

    return 0;
}