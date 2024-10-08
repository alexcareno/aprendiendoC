#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1, suma = 0;
    int n;
    printf("Ingresa un numero: ");
    scanf("%i", &n);
    while (x <= n) {
      float altura;
      printf("Ingresa la altura de la persona: ");
      scanf("%f", &altura);
      suma = suma + altura;
      x = x + 1;
    }
    float promedio = suma / n;
    printf("El promedio de altura de las personas es %f.2", promedio);

    getch();
    return 0;

}