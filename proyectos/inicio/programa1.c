 #include<stdio.h>
#include<conio.h>

    // Programa 1
int main() {
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado:");
    scanf("%i",&horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f",&costoHora);
    sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es ");
    printf("%f",sueldo);
    getchar();
    return 0;
}