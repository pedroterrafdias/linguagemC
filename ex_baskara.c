#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente A: ");
    scanf("%lf", &a);

    printf("Digite o coeficiente B: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente C: ");
    scanf("%lf", &c);


    delta = b * b - 4 * a * c;

    if (delta < 0 ){
        printf("O delta e negativo");
    }

    else {
        x1 = (- b + sqrt(delta)) / (2 * a);
        printf("O valor de x1 e: %lf\n", x1);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf("O valor de x2 e: %lf\n", x2);
    }

    return 0;
}
