#include <conio.h>
#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite un numero: ");
    scanf("%i", &x);
    printf("Digite otro numero: ");
    scanf("%i", &y);
    if(x > 0 && y > 0) {
      printf("Pertenece al primer cuadrante");
    } else if (x < 0 && y > 0) {
        printf("Pertenece al segundo cuadrante");
    } else if ( x < 0 && y < 0 ) {
      printf("Pertenece al tercer cuadrante");
    } else if (x > 0 && y < 0 ) {
      printf("Pertenece al cuarto cuadrante");
    } else {
      printf("Pertenece a un eje");
    }
    getch();
    return 0;
}

