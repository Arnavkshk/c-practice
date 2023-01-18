#include <stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[]="ifmmp!xpsme";
    decrypt(c);
    printf("decrypted string is: %s",c);
    return 0;
}
