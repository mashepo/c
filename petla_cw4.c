/*4. Napisz program, ktory  wyliczy sume liczb naturalnych od 1 do liczby n podanej przez uzyttkownika. Kiedy
 uzytkownik poda liczbmniejsza niz 1, to program powinien wypisac stosowny komunikat o bledzie.*/

#include <stdio.h>

int main(void)
{
int x, y;
        printf("Podaj gorna granice: ");
        scanf("%d", &y);
        if (y < 1){
                printf("podaj liczbe wieksza niz 1");
                }
        while (x < y)
                {
                printf("%d\n" , x );
                ++x ;
                }
return 0;
}

