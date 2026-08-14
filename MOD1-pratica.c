//===========================================================================
// SISTEMA DE BIBLIOTECA - PARTE 1
// OBJETIVO DESSA PARTE:
// Implementar o Cadastro e a Listagem de Livros usando um Array Estático
// Foco em Structs, Entrada e saída de dados e organização Básica


// ___________________________________________________________________

#include <stdio.h>
#include <stdlib.h> //
#include <string.h> // para strcspn()

// -----Constantes Globais --------
#define MAX_LIVROS 50
#define TAM_STRING 100

//------ Definição da Estrutura (Struct)-----------------
struct Livro{
    char nome [TAM_STRING];
    char autor [TAM_STRING];
    char editora [TAM_STRING];
    int edicao;
};

// ----- Função para Limpar o Buffet de Entrada ----------

void limparBuffetEntrada(){
    int c;
    while ((c = getchar ()) != '\n' && c != EOF);
}

// Função principal (main) -----

int main () {
    struct Livro biblioteca [MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

// ------- Laço Principal do Menu ---------
do {


    // Exibe o Menu de Opções 

        printf ("===========================\n");
        printf ("      Biblioteca Parte 1 - \n");
        printf ("============================\n");
        printf ("1- Cadastrar Novo Livro=====\n");
        printf ("2- Listar todos os Livro=====\n");
        printf ("0- Sair \n");
        printf ("===========================\n");
        printf ("Escolha uma opção: ");

    // Lê a Opção do Usuário

        scanf ("%d", &opcao);
        limparBuffetEntrada(); // Limpa o \n deixado pelo scanf

    // Processamento da Opção -----

        switch (opcao) {
        case 1: // CADASTRO DE LIVRO
            printf ("- Cadastro de Novo Livro=====\n\n");

            if (totalLivros< MAX_LIVROS) {
                printf ("- Cadastro de Novo Livro=====\n\n");
                printf ("Digite o Nome do Livro:  ");
                fgets (biblioteca [totalLivros].nome, TAM_STRING, stdin);

                printf ("Digite o Autor:  ");
                fgets (biblioteca [totalLivros].autor, TAM_STRING, stdin);

                printf ("Digite a Editora:  ");
                fgets (biblioteca [totalLivros].editora, TAM_STRING, stdin);

                biblioteca [totalLivros].nome [strcspn (biblioteca [totalLivros].nome, "\n")]
                
            }
            /* code */
            break;
        
        default:
            break;
        }



}


