#include <stdio.h>
#include <conio.h>

int main()
{

    int aprobados = 0, reprobados = 0;
    for (int i = 1; i <= 5; i++) {
        int nota;
        printf("Digite un numero: ");
        scanf("%i", &nota);
        if(nota >= 7) {
          aprobados++;
        } else {
          reprobados++;
        }
    }
    printf("los aprobados: %i", aprobados);
    printf("los reprobados: %i", reprobados);
    getch();
    return 0;

}