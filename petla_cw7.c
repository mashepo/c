/*7. Napisz program, ktory ze stdin wczyta 6 liczb rzeczywistych do tablicy,
 a nastepnie wypisze liczbe liczb dodatnich w niej zawartych.*/

#include <stdio.h>

int main(void)
{
int result[5], i, y;
i = 0;

while (i < 6)

        {
                printf("podaj liczbe \n");
                scanf("%d", &result[i]);
                ++i;
        }
                for (i = 0; i < 6; ++i)
                {
                if (result[i] >= 0)
                        ++y;
                }
        printf("Ilosc liczb rzeczywistych to : %d \n", y);


return 0;

}
