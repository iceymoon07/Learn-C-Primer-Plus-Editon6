#include <stdio.h>

int main(void)
{
    char inputChar;
    printf("input char\n");
    scanf("%c", &inputChar);
    printf("the code of char %c is %d.\n", inputChar, inputChar);
    return 0;
}