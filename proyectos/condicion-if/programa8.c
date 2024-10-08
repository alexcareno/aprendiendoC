#include <stdio.h>
#include <conio.h>

int main()
{

    float sueldo;
    printf("Ingrese su sueldo\n");
    scanf("%f", &sueldo);
    if(sueldo > 3000) {
        printf("Esta persona debve abonar impuestos");
    }
    getch();
    return 0;

}
