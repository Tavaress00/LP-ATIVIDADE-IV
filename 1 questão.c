#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_contato
{
    char nome[200];
    char telefone[20];
    char email[200];

};

void verificandotelefone(struct dados_contato contato[], char* contatodesejado)
{
    int i;
    for ( i = 0; i < 3; i++)
    {
        if (strcmp(contato[i].nome, contatodesejado) == 0)
        {
           printf("telefone de %s: %s", contato[i].nome, contato[i].telefone);
           break;
        }
        printf("Contato não encontrado!!");
    }
    
}
   
int main() {
    
    int i;
    char nome;
    char contatodesejado[200];

    struct dados_contato contato[3];
    
        for ( i = 0; i < 3; i++)
        {
            printf("nome: ");
            gets(contato[i].nome);

            printf("Numero de telefone: ");
            gets(contato[i].telefone);

            printf("Email: ");
            gets(contato[i].email);
            fflush(stdin);

            
        }   
    
    printf("\nDigite o nome que deseja saber o cantato: ");
    gets(contatodesejado);

    verificandotelefone(contato, contatodesejado);


    return 0;
}