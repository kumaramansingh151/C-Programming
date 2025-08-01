#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    // take a string array and also a reverse array to save the reverse of the array string //
    char string[100],rev[100];
    int i, len;

    printf("Enter a string : ");
    scanf("%s", string);

    len = strlen(string);
    /* Example:
        If str = "madam", then:
        len = 5

        i = 0 ? rev[0] = str[5 - 0 - 1] = str[4] = 'm'
        i = 1 ? rev[1] = str[5 - 1 - 1] = str[3] = 'a'
        i = 2 ? rev[2] = str[5 - 2 - 1] = str[2] = 'd'
        i = 3 ? rev[3] = str[5 - 3 - 1] = str[1] = 'a'
        i = 4 ? rev[4] = str[5 - 4 - 1] = str[0] = 'm'

        So, rev = "madam"
    */

    for (i = 0; i < len; i++)
    {
        rev[i] = string[len - i - 1];
    }

    rev[i] = '\0';
    /*every string must end with '\0' so that the compiler knows where the string ends.*/
    if (strcmp(string, rev) == 0)
    {
        printf("It is a Palindrome.\n");
    }
    else
    {
        printf("It is not a Palindrome.\n");
    }
    
    getch();
    return 0;
}
