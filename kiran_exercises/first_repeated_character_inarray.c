#include <stdio.h>
/* Followng function returns the repeated character.
If there is no repeated character the function returns NULL */

char repeated_first_char(char *s)
{
    int i, j;
    int flag;

    /* going through the end of the string */
    for(i = 0; s[i] != '\0'; i++) {

        /* Don't consider space as repeated character */
        if(s[i] == ' ') {
            continue;
        }

        /* for checking character by character */
        for(j = i+1; s[j] != '\0'; j++) {

            /* comparing first character with other characters in an array
               if there is a match flag is 1 */
            if( s[i] == s[j]) { 
                flag = 1;
                /* if flag is 1 break from the loops */
                if (flag == 1) {
                    break;
                }
            }
        }

        /* Repeated character found, so break from outer loop too. */
        if (flag == 1) {
            break;
        }
    }
    return s[i];
}

int main()
{
    char s[50] = "aamy name is jeevitha";
    char s1[50] = " my name";
    char s2[50] = "name";
    char rv;

    rv = repeated_first_char(s);
    printf("First repeated character in \"%s\" is %c\n", s, rv);

    rv = repeated_first_char(s1);
    printf("First repeated character in \"%s\" is %c\n", s1, rv);

    rv = repeated_first_char(s2);
    printf("First repeated character in \"%s\" is %c\n", s2, rv);

    return 0;
}
