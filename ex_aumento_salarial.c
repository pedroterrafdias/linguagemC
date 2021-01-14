#include <string.h>
#include <stdio.h>

int main(){

    double sal, aument, novosal, porc;

    prinf("Digite o salario da pessoa: ");
    scanf("%lf", sal);

    if (sal <= 1000.00){
        novosal = sal * 0.2;
        aument = novosal - sal;
        printf("O novo salario e de: %lf.2\n", novosal);
        printf("O aumento foi de: %lf.2\n", aument);
        printf("O porcentual foi de 20%");
    }

    else if ( sal > 1000.00 && sal <= 3000.00){
         novosal = sal * 0.15;
         aument = novosal - sal;
         printf("O novo salario e de: %lf.2\n", novosal);
         printf("O aumento foi de: %lf.2\n", aument);
         printf("O porcentual foi de 15%");
     }

     else if ( sal > 1000.00 && sal <= 3000.00){
         novosal = sal * 0.1;
         aument = novosal - sal;
         printf("O novo salario e de: %lf.2\n", novosal);
         printf("O aumento foi de: %lf.2\n", aument);
         printf("O porcentual foi de 10%");
      }

      else ( sal > 8000.00); {
         novosal = sal * 0.05;
         aument = novosal - sal;
         printf("O novo salario e de: %lf.2\n", novosal);
         printf("O aumento foi de: %lf.2\n", aument);
         printf("O porcentual foi de 05%");
       }

 return 0;
 
 }
