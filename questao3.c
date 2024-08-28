#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[100];
    int idade;
    char endereco[200];
};


struct cadastro* criandoCadastro(int n) {
    struct cadastro* cadastros = malloc(n * sizeof(struct cadastro));
    if (cadastros == NULL) {
        printf("Erro na alocacao\n");
        exit(1);

    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(cadastros[i].nome, sizeof(cadastros[i].nome), stdin);
        printf("Digite a idade %d: ", i + 1);
        scanf("%d", &cadastros[i].idade);
        getchar(); 
        printf("Digite o endereco %d: ", i + 1);
        fgets(cadastros[i].endereco, sizeof(cadastros[i].endereco), stdin);
    }

    return cadastros;
}

int main() {
    int n;
    printf("Digite o número de cadastros: ");
    scanf("%d", &n);
    getchar(); 

    struct cadastro* meusCadastros = criandoCadastro(n);


    for (int i = 0; i < n; i++) {
        printf("\nCadastro %d:\n", i + 1);
        printf("Nome: %s", meusCadastros[i].nome);
        printf("Idade: %d\n", meusCadastros[i].idade);
        printf("Endereco: %s", meusCadastros[i].endereco);
    }

    free(meusCadastros);
    meusCadastros = NULL;

    return 0;
}
