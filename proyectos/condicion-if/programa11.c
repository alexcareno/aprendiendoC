#include <conio.h>
#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, promedio;
    printf("Digite la primer nota: ");
    scanf("%i", &nota1);
    printf("Digite la segunda nota: ");
    scanf("%i", &nota2);
    printf("Digite la tercer nota: ");
    scanf("%i", &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;
    if(promedio >= 7) {
      printf("Promocionado!");
    }
    getch();
    return 0;
}
