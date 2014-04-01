#include <stdio.h>

char repeated_first_char(char *s)
{
    int i, j;
    int flag;

    /* going through the end of the string */
    for(i = 0; s[i] != '\0'; i++) {

        /* for checking character by character */
        for(j = 0; s[j] != '\0'; j++) {

            if(s[i] == ' ') {
                continue;
            }
            /* comparing first character with other characters in an array
               if there is a match flag is 1 */
            if( s[i] == s[j+1]) { 
                flag = 1;
                /* if flag is 1 break from the loops */
                if (flag == 1) {
                    break;
                }
            }
        }
        break;
    }
    return s[i];
}

int main()
{
    char s[50] = "aamy name is jeevitha";
    /* char s[50] = " my name" */;
    /*char s2[50] = "name";*/
    char rv;

   /* rv = repeated_first_char(s);*/
    rv = repeated_first_char(s);
    /*rv = repeated_first_char(s2);*/
    printf("First repeated character in an array is %c\n", rv);

    return 0;
}
