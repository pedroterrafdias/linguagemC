#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
 }


int main(){

    int n, i, nmenores;
    double soma, alturatotal, alturamedia, percentualMenores;

    int idades[n];
    double altura[n];
    char nomes[n][50];

    printf("Quantas pessoas serao digitadas?\n ");
    scanf("%d", &n);

    printf("Dados da %da pessoa:\n",  i + 1);
    for (i = 0; i < n; i++){
       printf("Nome: \n");
       limpar_entrada();
       ler_texto(nomes[i], 50);

       printf("Idade: \n");
       scanf("%d", &idades[i]);
       printf("Altura: \n");
       scanf("%lf", &altura[i]);
    }

  nmenores = 0;
	alturatotal = 0;
    for (int i=0; i<n; i++) {

        if (idades[i] < 16) {
            nmenores++;
        }
        alturatotal = alturatotal + altura[i];
    }

    alturamedia = alturatotal / n;
    percentualMenores = ((double)nmenores / n) * 100.0;

	  printf("\nAltura media = %.2lf\n", alturamedia);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for(int i=0; i<n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
