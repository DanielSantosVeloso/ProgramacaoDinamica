#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int codigo;
    struct no *next, *back, *center;

}no;

struct no *comecoPilha, *fimPilha, *corrente, *auxiliar;
struct no *comecoFila, *fimFila, *correnteFila, *auxiliarFila;
struct no *comecoArvore, *correnteArvore, *auxiliarArvore;

int contadorPilha=0;
int respostaArvore;
int code;

//=============== !!!!! NAO FINALIZADO !!!!! ===============//

int colocarDado(){
    printf("\nInsira o Codigo: ");
    scanf("%i", &corrente->codigo);
return 0;
}

int EnterData(){
    printf("\nInsira o Codigo: ");
    scanf("%i", &code);
return 0;
}

int main(){
    printf("\n");
    system("pause");

    int selecao;

    printf("\n\nQual modo usar?");
    printf("\n\n(Pilha e Fila):");
    printf("\n  [0] Pilha Push");
    printf("\n  [1] Pilha Pop");
    printf("\n  [2] Fila Exibir");
    printf("\n\n(Arvore Binaria e Pilha):");
    printf("\n  [3] Adicionar Arvore");
    printf("\n  [4] Exibir dados Arvore");
    printf("\n  [5] Fila Exibir");
    printf("\n\n[99]Sair do Programa:");
    printf("\n\nSelecao: ");
    scanf("%i", &selecao);

    switch(selecao){
        //pilha e fila
        case 0:
            pilhaPush();
            break;
        case 1:
            pilhaPop();
            break;
        case 2:
            filaExibir();
            break;

        //Arvore binaria e Pilha
        case 3:
            arvoreAdicionar();
            break;
        case 4:
            arvoreExibir();
            break;
        case 5:
            break;

        case 99:
            system("exit");
            break;
        default:
            main();
    }

return 0;
}

//------------------------ INICIO Arvore Normal ------------------------//
int arvoreAdicionar(){

    if(comecoArvore==NULL){
        printf("\nCriando a Arvore");
        correnteArvore=(no*)malloc(sizeof(no));
        EnterData();
        correnteArvore->codigo=code;
        correnteArvore->back=NULL;
        correnteArvore->next=NULL;
        correnteArvore->center=NULL;
        auxiliarArvore=correnteArvore;
        comecoArvore=correnteArvore;
        printf("\nDado armazenado na Raiz");
    }
    else{
        printf("\nDeseja alocar a [0]Esquerda, a [1]Direita ou [2]Centro: ");
        scanf("%i", &respostaArvore);

        if(respostaArvore==0){
           printf("\nAlocando a Esquerda.");
           correnteArvore=(no*)malloc(sizeof(no));
           EnterData();
           correnteArvore->codigo=code;
           auxiliarArvore->back=correnteArvore;
           correnteArvore->back=NULL;
           auxiliar=corrente;
           printf("\nDado alocado a Esquerda.");
        }
        else if(respostaArvore==1){
           printf("\nAlocando a Direita.");
           correnteArvore=(no*)malloc(sizeof(no));
           EnterData();
           correnteArvore->codigo=code;
           auxiliarArvore->next=correnteArvore;
           correnteArvore->next=NULL;
           auxiliar=corrente;
           printf("\nDado alocado a Direita.");
        }
        else if(respostaArvore==2){
           printf("\nAlocando ao Centro.");
           correnteArvore=(no*)malloc(sizeof(no));
           EnterData();
           correnteArvore->codigo=code;
           auxiliarArvore->center=correnteArvore;
           correnteArvore->center=NULL;
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

    if(comecoArvore==NULL){
        printf("\nN aprendeu a criar arvore n?");
        main();
    }
    else{
        correnteArvore = comecoArvore;

        printf("\nCodigo da Raiz: %i", correnteArvore->codigo);

        while(correnteArvore->back!=NULL){
            printf("\nCodigo da Esquerda: %i", correnteArvore->codigo);
            correnteArvore=correnteArvore->back;
        }
        printf("\n");
        correnteArvore = comecoArvore;

        while(correnteArvore->next!=NULL){
            printf("\nCodigo da Direita: %i", correnteArvore->codigo);
            correnteArvore=correnteArvore->next;
        }
        printf("\n");
        correnteArvore = comecoArvore;

        while(correnteArvore->center!=NULL){
            printf("\nCodigo do Centro: %i", correnteArvore->codigo);
            correnteArvore=correnteArvore->center;
        }
    }

return 0;
}

//------------------------ FIM Arvore Normal ------------------------//



//=========================================================================//



//------------------------ INICIO Arvore Binaria e Pilha ------------------------//
int abAdicionar(){



return 0;
}

//------------------------ FIM Arvore Binaria e Pilha ------------------------//



//=========================================================================//



//------------------------ INICIO Pilha e Fila ------------------------//
int pilhaPush(){

    if(comecoPilha==NULL){
        corrente=(no*)malloc(sizeof(no));
        colocarDado();
        auxiliar=corrente;
        comecoPilha=corrente;
        fimPilha=corrente;
        corrente->next=NULL;
        corrente->back=NULL;
        contadorPilha++;
        printf("\nPrimeiro dado adicionado na Pilha");
    }
    else{
        if(contadorPilha>=10){
            printf("\nLimite Atingido");
        }
        else{
            corrente=(no*)malloc(sizeof(no));
            colocarDado();
            fimPilha=corrente;
            corrente->next=NULL;
            corrente->back=auxiliar;
            auxiliar->next=corrente;
            auxiliar=corrente;
            contadorPilha++;
            printf("\nDado adicionado na Pilha");
        }
    }
    main();
return 0;
}

int pilhaPop(){

    corrente=fimPilha;

    if(comecoPilha==NULL){
        printf("\nNão existem dados na pilha\n");
    }
    else{
        if(comecoPilha==fimPilha){
            filaPush();
            comecoPilha=NULL;
            fimPilha=NULL;
            free(corrente);
            printf("\nRetirado ultimo dado da Pilha");
        }
        else{
            auxiliar=corrente->back;
            auxiliar->next=NULL;
            fimPilha=auxiliar;
            filaPush();
            free(corrente);
            printf("\nDado excluido da pilha, adicionado na Fila");
        }
    }
    main();
return 0;
}

int filaPush(){
    if(comecoFila==NULL){
        printf("\nCriando uma fila para armazenar os dados da Pilha");
        correnteFila=(no*)malloc(sizeof(no));
        correnteFila->codigo=corrente->codigo;
        correnteFila->next=NULL;
        correnteFila->back=NULL;
        auxiliarFila=correnteFila;
        comecoFila=correnteFila;
        fimFila=correnteFila;
        printf("\nDado armazenado na Fila");
    }
    else{
        printf("\nArmazenando os Dados na Fila");
        correnteFila=(no*)malloc(sizeof(no));
        correnteFila->codigo=corrente->codigo;
        correnteFila->next=auxiliarFila;
        auxiliarFila->back=correnteFila;
        correnteFila->back=NULL;
        auxiliarFila=correnteFila;
        fimFila=correnteFila;
    }
return 0;
}

int filaExibir(){
    correnteFila=comecoFila;
    if(comecoFila==NULL){
        printf("\nNao existe fila para ser mostrada");
    }
    else{
        while(sizeof(no)){
            if(fimFila==correnteFila){
                printf("\nDado da fila: %i", correnteFila->codigo);
                break;
            }
            printf("\nDado da fila: %i", correnteFila->codigo);
            correnteFila = correnteFila->back;
        }
    }
    main();
return 0;
}
//------------------------ FIM Pilha e Fila ------------------------//
