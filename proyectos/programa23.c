#include <conio.h>
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite un numero: ");
    scanf("%i", &num1);
    printf("Digite otro numero: ");
    scanf("%i", &num2);
    printf("Digite otro numero: ");
    scanf("%i", &num3);
    if(num1<10 || num2<10 || num3<10) {
        printf("Al menos un valor es menor a 10");
    }
    getch();
    return 0;
}

