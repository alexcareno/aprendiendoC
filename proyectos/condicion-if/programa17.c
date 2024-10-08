#include <conio.h>
#include <stdio.h>

int main()
{
    int preguntas = 10, contestadasOK = 7;

    int porcentaje = contestadasOK * 100 / preguntas;

    if(porcentaje >= 90) {
      printf("Nivel maximo");
    } else if (porcentaje >= 75 && porcentaje < 90) {
      printf("Nivel medio");
    } else if (porcentaje >= 50 && porcentaje < 75) {
      printf("Nivel regular");
    } else {
      printf("Fuera de nivel");
    }
    getch();
    return 0;
}

