#include <stdio.h>

int uppercase_string(char *s)
{
    int i;

    if (s == NULL) {
        return -1;
    }
    
    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a') && (s[i] <= 'z')) {
            s[i] = s[i] - 32;
        }
    }

    return 0;
}

int main()
{
    char str[100] = "My name is Jeevitha";
    int i;

    printf("Original string : %s\n", str);

    uppercase_string(str);

    printf("New string : %s\n", str);

    return 0;
}
