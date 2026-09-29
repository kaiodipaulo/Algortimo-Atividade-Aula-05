#include <stdio.h>

int main() {
    float consumo, total = 0, media;
	int i;
	
    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo do morador %d (em m3): ", i);
        scanf("%f", &consumo);
        total += consumo;

        if (consumo <= 20.0) {
            printf("Morador %d: Consumo dentro da media.\n", i);
        } else {
            printf("Morador %d: Consumo acima da media.\n", i);
        }
    }

    media = total / 5.0;
    printf("Consumo medio geral: %.2f m3\n", media);

}
