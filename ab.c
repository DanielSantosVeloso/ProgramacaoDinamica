corrente = (nodo*) malloc(sizeof(nodo));
corrente->next = NULL;
corrente->back = NULL;
enterdata();
aloca = 0;

if(raiz == NULL){
	raiz = corrente;
	auxiliar = corrente;
	printf("\n Elemento alocado na raiz arvore...\n");
	system("pause");
}else{
	auxiliar = raiz;
	while(aloca == 0){
		if(auxiliar->codigo < corrente->codigo){
			if(auxiliar->next == NULL){
				auxiliar->next = corrente;
				printf("\n O elemento foi alocado a Direita da arvore!");
				system("\npause");
				aloca = 1;
				break;
			}else{
				auxiliar = auxiliar->next;
			}
		}
		if(auxiliar->codigo > corrente->codigo){
			if(auxiliar->back == NULL){
				auxiliar->back = corrente;
				printf("\n O elemento foi alocado a esquerda da arvore!");
				system("\npause");
				aloca = 1;
				break;
			}else{
				auxiliar = auxiliar->back;
			}
		}
	}
}
