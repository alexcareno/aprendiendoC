#include <conio.h>
#include <stdio.h>

int main()
{
    int x = 1;
    int num1;
    printf("Digite un numero: ");
    scanf("%i", &num1);
    while(x <= num1) {
        printf("x es igual a: %i\n", x);
        x += 1;
    }

    getch();
    return 0;

}