#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho_vetor;
    int *vetor;

    printf("Digite o tamanho do vetor que vc quer: ");
    scanf("%d",&tamanho_vetor);

    vetor = (int *)malloc(tamanho_vetor * sizeof(int));
    if (vetor == NULL) {
        printf("ERRO na alocacao.\n");
        exit(1);
    }


    printf("Agora preencha o vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Elementos do vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d \n", vetor[i]);
    }

    free(vetor);
    vetor = NULL;

    return 0;
}
