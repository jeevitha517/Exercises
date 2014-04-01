#include <stdio.h>

int first_character_upper(char *s)
{
    int i;

    if (s == NULL) {
        return -1;
    }
    
    /* Making the first character upper case */
    if ((s[0] >= 'a') && (s[0] <= 'z')) {
        s[0] = s[0] - 32;
    }

    /* for each character in string untill '\0' */
    for(i = 0; s[i] != '\0'; i++) {

        /* if character is space then */
        if (s[i] == ' ') {

            /* if next character is lower case then */
            if ((s[i+1] >= 'a') && (s[i+1] <= 'z')) {

                /* make character as upper case */
                s[i+1] = s[i+1] - 32;
            }
        }
    }

    return 0;
}


int main()
{
    char s[100] = "My name is Jeevitha";

    printf("The original string : %s\n", s);

    /* first_character_upper function makes first character in the word
    as uppercase character by passing string to the function.*/
    first_character_upper(s);

    printf("The new string : %s\n", s);

    return 0;
}
