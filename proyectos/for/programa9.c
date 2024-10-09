#include <conio.h>
#include <stdio.h>

int main()
{

    int a;
    printf("Digite um numero: ");
    scanf("%i", &a);
    for(int i = 1; i <= 13; i++) {
        printf("%i - %i\n", i, a*i);
    }

    getch();
    return 0;
}