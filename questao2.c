#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;

};


int main(){

    printf("Tamanho da struct aluno em bytes = %zu\n",sizeof(struct aluno));

}