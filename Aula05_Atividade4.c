#include <stdio.h>

int main() {
    int passos, totalPassos = 0, horas = 0;

    while (totalPassos < 10000) {
        horas++;
        printf("Digite a quantidade de passos na hora %d: ", horas);
        scanf("%d", &passos);
        totalPassos += passos;
    }

    printf("Meta atingida, Total de passos: %d\n", totalPassos);
    printf("Foram necessarias %d horas para atingir a meta.\n", horas);

}
