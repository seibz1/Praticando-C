#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
} aluno;


int buscaseq(aluno lista[], int tamanho, int chave, int *comparacoes) { 
    for (int i = 0; i < tamanho; i++) {
        (*comparacoes)++; 
        if (lista[i].matricula == chave) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    aluno alunos[] = {
        {1, "Alice Silva", {7.5, 8.0, 6.5}},
        {2, "Bruno Souza", {9.0, 7.0, 8.5}},
        {3, "Carla Oliveira", {6.0, 7.5, 8.0}},
        {4, "Daniel Costa", {8.5, 9.5, 7.0}},
        {5, "Eduarda Mendes", {6.5, 7.0, 6.0}},
        {6, "Felipe Pereira", {8.0, 9.0, 8.5}}
    };
    
    int tamanho = sizeof(alunos) / sizeof(alunos[0]);
    int chave, comparacoes = 0;

    printf("digite a matricula do aluno: "); 
    scanf("%d", &chave);

    int posicao = buscaseq(alunos, tamanho, chave, &comparacoes);

    if (posicao != -1) {
        printf("\n aluno encontrado: %s\n", alunos[posicao].nome);
        printf("comparacoes feitas: %d\n", comparacoes);
    } else {
        printf("\n aluno n encontrado.\n");
        printf("comparacoes feitas: %d\n", comparacoes);
    }

    return 0;
}
