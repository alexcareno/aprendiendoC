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
    if(num1==num2 && num1==num3) {
      int suma, producto;
      suma = num1 + num2;
      printf("%i: \n", suma);
      producto = suma * num3;
      printf("%i:", producto);

    }
    getch();
    return 0;
}

