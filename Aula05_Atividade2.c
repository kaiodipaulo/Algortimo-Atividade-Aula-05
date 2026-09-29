#include <stdio.h>

int main() {
    float total = 0;
    int opcao;

    do {
        printf("Adicionar moeda ao cofrinho:\n");
        printf("1 - R$ 0.50\n");
        printf("2 - R$ 1.00\n");
        printf("3 - R$ 2.00\n");
        printf("0 - Parar e ver total\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total += 0.50;
        } else if (opcao == 2) {
            total += 1.00;
        } else if (opcao == 3) {
            total += 2.00;
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    printf("Total acumulado no cofrinho: R$ %.2f\n", total);
    
}
