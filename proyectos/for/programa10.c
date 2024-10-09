#include <conio.h>
#include <stdio.h>

int main()
{
    int n, equ = 0, isc = 0, esc = 0;
    printf("Digite um numero: ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++) {
        int base, d1, d2;
        printf("Ingrese base");
        scanf("%i", &base);
        printf("Ingrese d1");
        scanf("%i", &d1);
        printf("Ingrese d2");
        scanf("%i", &d2);
        if(base == d1 && d2 == d1) {
            equ++;
        } else if (base == d1 || base == d2 || d2 == d1) {
            isc++;
        } else {
            esc++;
        }
    }

    printf("\n\n%i equilateros", equ);
    printf("\n%i iscoceles", isc);
    printf("\n%i escaleno", esc);

    if(equ < isc && equ < esc) {
      printf("Equilateros tiene menos");
    } else if(isc < equ && isc < esc) {
        printf("Isoseles tiene menos");
    } else {
      printf("Escaleno tiene menos");
    }

    getch();
    return 0;

}