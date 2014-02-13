#include <stdio.h>

int check_character_by_character(char ch1, char ch2)
{
    if ( (((ch1 >= 'A') && (ch1 <= 'Z')) || ((ch1 >= 'a') && (ch1 <= 'z'))) &&
         (((ch2 >= 'A') && (ch2 <= 'Z')) || ((ch2 >= 'a') && (ch2 <= 'z'))) ) {

        if ((ch1 - ch2 == 32) || (ch1 - ch2 == -32)) {
            return 0;
        }
    }

    return (ch1 - ch2);
}    
    

int i_strcmp(char *s1, char *s2)
{
    int i, rv;

    if((s1 == NULL) && (s2 == NULL)) {
        return 0;
    }
    if((s1 == NULL) && (s2 != NULL)) {
        return -1;
    }
    if((s1 != NULL) && (s2 == NULL)) {
        return 1;
    }

    for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); s1++, s2++) {
        rv = check_character_by_character(s1[i], s2[i]);
        
        if(rv != 0) {
            return rv;
        }
    }
    return 0;
}

int main()
{
    char s1[20] = "AA@B";
    char s2[20] = "AA b";
    printf("%d\n", i_strcmp("AA@B", "AA b"));
    printf("%d\n", i_strcmp("HELLO", "hello"));
    printf("%d\n", i_strcmp("HeLLo", "hEllO"));
    printf("%d\n", i_strcmp("HELLO123", "hello1"));
    printf("%d\n", i_strcmp("HELLO", "hello123"));
    printf("%d\n", i_strcmp("", "hello"));
    printf("%d\n", i_strcmp("HELLO", ""));
    return 0;
}
