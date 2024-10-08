#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1;
    while (x <= 500) {
      if(x / 8 == 0) {
          int multiplo = x;
          printf("%i.- %i", x, multiplo);
      }
      x += 1;
    }

    getch();
    return 0;

}