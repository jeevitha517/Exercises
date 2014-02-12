#include <stdio.h>

int check_character_by_character(char ch1, char ch2)
{
    if((ch1 >= 65) && (ch1 <= 90)) || ((ch1 >= 97) && (ch2 <= 122)) {
    }
    if((ch2 >= 65) && (ch2 <= 90)) || ((ch2 >= 97) && (ch2 <= 122)) {
    }
    if((ch1 - ch2 == 32) || (ch1 - ch2 == -32)) {
        return 0;
    }
    return (ch1 - ch2);
}    
    

int case_insensitive_string_compare(char *s1, char *s2)
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

    for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); s1++, s2++) {
        rv = check_character_by_character(s1[i], s2[i]);
        
        if(rv != 0) {
            return rv;
        }
    }
    return 0;
}

int main()
{
    char s1[20] = "hello";
    char s2[20] = "HELLO";
    printf("%d\n", case_insensitive_string_compare(s1, s2));
    return 0;
}
