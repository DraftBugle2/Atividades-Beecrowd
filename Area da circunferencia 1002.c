#include <stdio.h>

int main() {

   double R, A;
   //double pi = 3.14159;

   // DIGITE O VALOR DO RAIO
   scanf("%lf", &R);

   A = 3.14159 * (R * R);

   printf("A=%0.4lf\n", A);

    return 0;
}
