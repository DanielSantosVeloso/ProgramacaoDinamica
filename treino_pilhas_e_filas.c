#include <stdio.h>
#include <stdlib.h>

//||--- Fazendo ums pilhs ---|||

//      Declarando os ponteiros e variáveis da pilha

typedef struct no {

    int dado;
    struct no *below;

}no;

struct no *topo, *corrente, *auxiliar;

enterdata(){

    printf("\ndigite um numero: ");
    scanf("%i", &corrente->dado);

}

//      Opções do programa

int main (void){

    int select;
    int out = 1;
do{
    printf("[1]adicionar dado\n[2]remover dado\n[3]exibir tudo\n[0]sair do programa\n\n");
    scanf("%i", &select);

    switch(select){
    case 1:
        //adicionar à pilha (push)
        printf("iniciando adição de dados\n");
        pushPilha();
        break;
    case 2:
        //retirar da pilha (pop)

        break;
    case 3:
        //exibir a pilha (show)

        break;
    case 0:
        //sair
        out = 0;
        break;
    default:
        //msg erro
        printf("opcao inexistente\n\n\n");
        break;
    }
    system("pause");
    system("cls");

}while(out == 1);

}

pushPilha(){

    if (topo==NULL){
        corrente = (no*)malloc(sizeof(no));
        corrente -> below = NULL;
        auxiliar = corrente;
        enterdata();
        topo == corrente;
    }else{
        corrente = (no*)malloc(sizeof(no));
        enterdata();
        auxiliar->below=corrente;
        topo == corrente;
    }

}
