#include <conio.h>
#include <stdio.h>

int main()
{
    int c1, c2, c3, c4, n;
    printf("Digite un numero: ");
    scanf("%i", &n);
    for(int i = 1; i <= n; i++) {
        int x, y;
        printf("Ingrese x");
        scanf("%i", &x);
        printf("Ingrese y");
        scanf("%i", &y);
        if(x > 0 && y > 0) {
            c1++;
        } else if (x < 0 && y > 0) {
            c2++;
        } else if (x < 0 && y < 0) {
            c3++;
        } else {
          c4++;
        }
    }

    printf("\n\nc1: %i ", c1);
    printf("\nc2: %i", c2);
    printf("\nc3: %i", c3);
    printf("\nc4: %i", c4);


    getch();
    return 0;

}