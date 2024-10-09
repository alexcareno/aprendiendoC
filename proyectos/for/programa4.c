#include <stdio.h>
#include <conio.h>

int main()
{
    for(int i = 1; i <= 30; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("%i - fizz buzz\n", i);
        } else if (i % 3 == 0) {
            printf("%i - fizz \n", i);
        } else if (i % 5 == 0) {
            printf("%i - buzz \n", i);
        }

    }

    getch();
    return 0;

}