#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1;
    int termino = 11;
    while (x <= 25) {
       printf("%i.- %i\n", x, termino);
       termino = termino + 11;
       x = x + 1;
    }
    getch();
    return 0;

}