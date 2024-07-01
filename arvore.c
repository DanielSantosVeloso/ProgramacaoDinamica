#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int cod;
    struct no *back, *next, *center;
}no;

struct no *fundo, *raiz, *corrente, *auxiliar;

int respostaArvore;

int main(){
    printf("\n");
    system("pause");
    int selecao;

    printf("\n\nQual modo usar?");
    printf("\n  [0] Adicionar");
    printf("\n  [1] Mostrar a arvore");
    printf("\n  [2] Tirar da arvore");
    printf("\n\n[99]Sair do Programa:");
    printf("\n\nSelecao: ");
    scanf("%i", &selecao);

    switch(selecao){
        case 0:
            arvoreAdicionar();
            break;
        case 1:
            arvoreExibir();
            break;
        case 2:
            //arvoreRetirar();
            break;

        case 3:
            //arvoreAdicionar();
            break;

        case 99:
            system("exit");
            break;
        default:
            main();
    }

return 0;
}

int EnterData(){
    printf("\nInsira o cod: ");
    scanf("%i", &corrente->cod);
return 0;
}

int arvoreAdicionar(){

    if(raiz==NULL){
        printf("\nCriando a Arvore");
        corrente=(no*)malloc(sizeof(no));
        EnterData();
        corrente->back=NULL;
        corrente->next=NULL;
        corrente->center=NULL;
        auxiliar=corrente;
        raiz=corrente;
        printf("\nDado armazenado na Raiz");
    }
    else{
        printf("\nDeseja alocar a [0]Esquerda, a [1]Direita ou [2]Centro: ");
        scanf("%i", &respostaArvore);

        if(respostaArvore==0){
           printf("\nAlocando a Esquerda.");
           corrente=(no*)malloc(sizeof(no));
           EnterData();
           auxiliar->back=corrente;
           corrente->back=NULL;
           auxiliar=corrente;
           printf("\nDado alocado a Esquerda.");
        }
        else if(respostaArvore==1){
           printf("\nAlocando a Direita.");
           corrente=(no*)malloc(sizeof(no));
           EnterData();
           auxiliar->next=corrente;
           corrente->next=NULL;
           auxiliar=corrente;
           printf("\nDado alocado a Direita.");
        }
        else if(respostaArvore==2){
           printf("\nAlocando ao Centro.");
           corrente=(no*)malloc(sizeof(no));
           EnterData();
           auxiliar->center=corrente;
           corrente->center=NULL;
           auxiliar=corrente;
           printf("\nDado alocado ao Centro.");
        }
        else{
           arvoreAdicionar();
           system("cls");
        }
    }
    main();

    return 0;
}

int arvoreExibir(){

    if(raiz==NULL){
        printf("\nN aprendeu a criar arvore n?");
        main();
    }
    else{
        corrente = raiz;

        printf("\ncod da Raiz: %i", corrente->cod);

        while(corrente->back!=NULL){
            printf("\ncod da Esquerda: %i", corrente->cod);
            corrente=corrente->back;
        }
        //mostra o ultimo
        printf("\ncod da Esquerda: %i", corrente->cod);
        printf("\nTeste");

        corrente = raiz;

        while(corrente->next!=NULL){
            printf("\ncod da Direita: %i", corrente->cod);
            corrente=corrente->next;
        }
        printf("\nASDAD");
        corrente = raiz;

        while(corrente->center!=NULL){
            printf("\ncod do Centro: %i", corrente->cod);
            corrente=corrente->center;
        }
    }

return 0;
}
