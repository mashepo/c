/* 3. Napisz program, ktory wczyta dwie liczby calkowite a i b (a<b) a nastepnie napisze wszystkie liczby calkowite pomiedzy a i b.*/
#include <stdio.h>

int main (void)
{
        int x,y,i;

                printf("podaj pierwsza liczbe ");
                scanf("%d",&x);
                printf("podaj pierwsza liczbe ");
                scanf("%d",&y);
                        while (x < y)
                                {
                                printf("%d \n", x);
                                ++x;
                                }
return;
}
