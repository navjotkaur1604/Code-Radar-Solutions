#include <stdio.h>
int main()
{
    char num;
    int num1;
    scanf("%c %d", &num, &num1);
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n" , num1);
    return 0;
}