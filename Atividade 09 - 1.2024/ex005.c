#include <stdio.h>
 
int main()
{
   double altura, peso;
   printf("Digite sua altura: \n");
   scanf("%lf", &altura);
   printf("Digite sua peso: \n");
   scanf("%lf", &peso);
   if (altura <= 1.20) {
       if (peso <= 60) {
           printf("A");
   } else if (peso > 60 && peso <= 90){
       printf("D");
   } else if (peso > 90){
       printf("G");
    }
   }
   if (altura > 1.20 && altura <=1.70 ){
       if(peso <= 60){
           printf("B");
       } else if (peso > 60 && peso <= 90){
           printf("E");
       } else if (peso > 90){
           printf("H");
       }
   }
   if (altura > 1.70){
       if (peso <= 60){
           printf("C");
       } else if (peso > 60 && peso <=90){
           printf("F");
       } else if (peso > 90){
           printf("I");
       }
   }
    return 0;
}