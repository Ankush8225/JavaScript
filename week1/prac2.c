#include<stdio.h>
#include<string.h>
void main()
{
    char word[100];

    printf("enter a word: ");
    scanf("%s", word);

    int i = 0;

    if (word [i] >= '0' && word [i] = '9')
    {
        printf("invalid identifier : Starts with digit");
    }else if(word[i] == '!' || word[i] == '@' || word[i] == '#' || word[i] == '$' || word[i] == '%' || word[i] == '^' || word[i] == '&' || word[i] == '*'){
        printf("invalid identifier : Starts with special character")
    }else if(strcmp(word,"int") == 0 || strcmp(word,"float") == 0 || strcmp(word,"double") == 0 || strcmp(word,"if") == 0 || strcmp(word,"else") == 0 || strcmp(word,"while") == 0 || strcmp(word,"char") == 0 ||strcmp(word,"void") == 0 || strcmp(word,"for") == 0 || strcmp(word,"return") == 0 || strcmp(word,"break") == 0){
        printf("invalid identifier : A keyword");
    }else{
        printf("valid identifier");
    }
}