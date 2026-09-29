#include<stdio.h>
#include<string.h>

void check(char word[], int index){
    int len = strlen(word) - (index + 1);
    if(word[index] == word[len]){
        if(index +1 == len || index == len){
            printf("The given word is a palindrome \n");
            return;
        }
        check(word, index + 1);
    }else{
        printf("The given word is not a palindrome\n");
        return;
    }
}

int main(){
    char word[20];
    printf("Enter the word: ");
    scanf("%s", word);
    check(word,0);
    return 0;
}