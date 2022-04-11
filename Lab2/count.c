#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, vCount = 0, cCount = 0;
    char str[] = "how are you?";
    for (i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vCount++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            cCount++;
        }
    }
    printf("Number of vowels : %d\n", vCount);
    printf("Number of consonants : %d", cCount);
    return 0;
}