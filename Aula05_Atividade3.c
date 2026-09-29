#include <stdio.h>

int main() {
    int i;
    float nota, soma = 0.0, media;

    for (i = 1; i <= 10; i++) {
        do {
            printf("Digite a nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);

            if (nota < 0.0 || nota > 10.0) {
                printf("Nota invalida! Apenas valores entre 0 e 10 sao permitidos.\n\n");
            }
        } while (nota < 0.0 || nota > 10.0);

        soma += nota;
    }

    media = soma / 10.0;
    printf("\nNota media de atendimento: %.2f\n", media);

    if (media < 7.0) {
        printf("ALERTA: A media de atendimento esta abaixo de 7!\n");
    }

}
