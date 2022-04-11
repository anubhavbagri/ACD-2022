#include <stdio.h>
#include <string.h>
#define MAX_LEN 1024

int main()
{
    char keyword[32][10] = {
        "auto", "double", "int", "struct", "break", "else", "long",
        "switch", "case", "enum", "register", "typedef", "char",
        "extern", "return", "union", "const", "float", "short",
        "unsigned", "continue", "for", "signed", "void", "default",
        "goto", "sizeof", "voltile", "do", "if", "static", "while"};
    char str[MAX_LEN];

    printf("Enter a string: ");
    gets(str);

    char *word;
    int flag = 0, count = 0, j;

    word = strtok(str, " ");
    while (word != NULL)
    {
        for (j = 0; j < 32; j++)
        {
            if (strcmp(word, keyword[j]) == 0)
            {
                flag = 1;
                count++;
                break;
            }
        }
        word = strtok(NULL, " ");
    }

    if (flag == 1)
    {
        printf("Entered string has keyword");
        printf("\nKeyword count: %d", count);
    }
    else
    {
        printf("Entered string does not have a keyword");
    }
}