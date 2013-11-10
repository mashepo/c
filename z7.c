
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main() {
   double x, z, r;

   printf("Podaj liczbe rzeczywista: ");
   scanf("%lf", &x);

   if (x > 0) {
   r = 1/x;
   z = sqrt(x);
   printf("Pierwiastek kwadratowy z %.2lf to %.2lf\n", x, z);
   printf("Odwrotnosc z %.2lf to %.2lf\n", x, r);
   return 2;
   } else {
   printf("Pierwiastek kwadratowy z %lf nie istnieje\n", x);
   printf("Nie obliczam odwrotności z ujemnej liczby\n");
   return 0;
   }

}
