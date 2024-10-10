#include <conio.h>
#include <stdio.h>

int main()
{

   int valor;

   do {
       printf("Ingresa un valor entre 0 y 99 (0 finaliza): ");
       scanf("%i", &valor);
       if(valor >= 100) {
           printf("El valor tiene 3 digitos");
       } else {
         if(valor >= 10) {
           printf("El valor tiene 2 digitos");
         } else {
             printf("El valor tiene 1 digito");
         }
       }
       printf("\n");
   } while (valor != 0);
    getch();
    return 0;

}
