#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroValido;

    do {
        printf("Digite um valor inteiro N (não negativo): ");
        scanf("%d", &numeroValido);

        if (numeroValido < 0) {
            printf("Valor inválido! N deve ser não negativo.\n");
        }
    } while (numeroValido < 0);

    
    int *V = (int *)malloc(numeroValido * sizeof(int));
    if (V == NULL) {
        printf("Erro na alocacao\n");
        exit(1);
    }

    for (int i = 0; i < numeroValido; i++) {
        do {
            printf("Digite o valor %d (maior ou igual a 2): ", i + 1);
            scanf("%d", &V[i]);

            if (V[i] < 2) {
                printf("Valor inválido! Deve ser maior ou igual a 2.\n");
            }
        } while (V[i] < 2);
    }


    printf("Elementos do vetor:\n");
    for (int i = 0; i < numeroValido; i++) {
        printf("%d \n", V[i]);
    }
   

    free(V);
    V = NULL;

    return 0;
}
