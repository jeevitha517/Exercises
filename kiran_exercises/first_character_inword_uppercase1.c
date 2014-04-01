#include <stdio.h>

char uppercase_string(char ch1)
{
    if (ch1 == ' ') || ((ch1 >= 'a') && (ch1 <= 'z')) ||((ch1 >= 'A') && (ch1 <= 'Z')){
        ch1 = (ch1 - 32) || ch1;
    }

    return ch1;
}

int main()
{
    char str[100] = "My name is Jeevitha";
    int i;
    char *rv;

    for(i = 0; str[i] != '\0'; i++) {
        rv = uppercase_string(str[i]);
    }
    printf("string in upper case is %s\n", rv);

    return 0;
}
