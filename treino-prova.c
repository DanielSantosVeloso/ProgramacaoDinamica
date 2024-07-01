#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int cod;
    struct no *acima, *abaixo;
}no;

struct no *fundo, *topo, *corrente, *auxiliar;

int main(){
    printf("\n");
    system("pause");
    int selecao;

    printf("\n\nQual modo usar?");
    printf("\n  [0] Pilha Push");
    printf("\n  [1] Pilha Pop");
    printf("\n  [2] Fila Exibir");
    printf("\n  [3] Adicionar Arvore");
    printf("\n\n[99]Sair do Programa:");
    printf("\n\nSelecao: ");
    scanf("%i", &selecao);

    switch(selecao){
        case 0:
            pilhaPush();
            break;
        case 1:
            pilhaPop();
            break;
        case 2:
            top();
            break;

        case 3:
            arvoreAdicionar();
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
    printf("\nInsira o Codigo: ");
    scanf("%i", &corrente->cod);
return 0;
}

int pilhaPush(){

    if(fundo==NULL){
        corrente=(no*)malloc(sizeof(no));
        fundo=corrente;
        topo=corrente;
        auxiliar=corrente;
        corrente->abaixo=NULL;
        EnterData();
        printf("\nDado adicionado ao Inicio da Pilha");
    }
    else{
        corrente=(no*)malloc(sizeof(no));
        corrente->abaixo=auxiliar;
        topo=corrente;
        auxiliar=corrente;
        EnterData();
        printf("\nDado adicionado ao Topo da Pilha");
    }

    main();
return 0;
}

int pilhaPop(){

    corrente=topo;

    if(topo==NULL){
        printf("\nTu nao criou a pilha paizao\n");
        main();
    }
    else{
        if(corrente->abaixo==NULL){
            free(corrente);
            topo=NULL;
            printf("\nPilha desconstruida");
        }
        else{
            auxiliar=corrente->abaixo;
            topo=auxiliar;
            free(corrente);
            printf("\nTopo retirado");
        }
    }

    main();
return 0;
}

int top(){

    corrente=topo;

    if(topo==NULL){
        printf("\nCRIA A PILHA");
    }
    else{
        printf("\nCodigo: %i", corrente->cod);
    }

    main();
return 0;
}



int arvoreAdicionar(){

    if(){

    }

return 0;
}
