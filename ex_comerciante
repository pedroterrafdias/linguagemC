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

    int n, i;
    double somab, somam, somaa;
    char nomeproduto[n][50];
    double lucro[n], venda[n], compra[n];

    printf("Serao digitados dados de quantos produtos? \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf(" Produto %d: \n", i+1);
        printf("Nome: \n");
        limpar_entrada();
        ler_texto(nomeproduto[i], 50);

        printf("Preco de compra: \n");
        scanf("%lf", &compra[i]);

        printf("Preco de compra: \n");
        scanf("%lf", &venda[i]);
    }

    somab = 0;
    somam = 0;
    somaa = 0;
    for (i = 0; i < n; i++){
        lucro[i] = compra[i] - venda[i];
        if (lucro[i] < 0.1){
            somab = somab + 1;
        }
            else if (lucro[i] < 0.2){
                somam = somam + 1;
            }
            else {
                somaa = somaa + 1;
            }
        }

        printf("A quantidade de produtos com lucro abaixo de 10%% e: \n");
        printf("%lf", somab);

        printf("A quantidade de produtos com lucro entre 10%% e 20% e: \n");
        printf("%lf", somam);

        printf("A quantidade de produtos com lucro acima de 20%* e: \n");
        printf("%lf", somaa);

        return 0;
}
