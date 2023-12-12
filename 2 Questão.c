#include <stdio.h>
#include <stdlib.h>


struct Aluno {
    char nome[200];
    char dataNascimento[22];
    float n1;
    float n2;
    float media;
};


float calcularMedia(struct Aluno aluno) {
    return (aluno.n1 + aluno.n2) / 2;
}


char* verificarAprovacao(struct Aluno aluno) {
    if (aluno.media >= 7.0) {
        return "aprovado";
    } else {
        return "reprovado";
    }
}

int main() {
    
    struct Aluno alunos[5]; 
     int i;
     
    for (i = 0; i < 5; ++i) {
        
        printf("aluno %d:\n", i + 1);
        printf("nome: ");
        scanf("%s", &alunos[i].nome);

        printf("data de Nascimento: ");
        scanf("%s", &alunos[i].dataNascimento);
    
        printf("nota 1: ");
        scanf("%f", &alunos[i].n1);
        
        printf("nota 2: ");
        scanf("%f", &alunos[i].n2);
        
        alunos[i].media = calcularMedia(alunos[i]);
    }
   
    system("cls");
    
    printf("\nSituacao dos alunos:\n\n");
    for (i = 0; i < 5; ++i) {
        printf("\naluno %s: media: %.2f, situacao: %s\n", alunos[i].nome, alunos[i].media, verificarAprovacao(alunos[i]));
    }

    return 0;
}