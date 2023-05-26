#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

//aluno@debian:~/Documentos$ gcc -o bst *.c
//aluno@debian:~/Documentos$ ./bst < teste.in > saida
//aluno@debian:~/Documentos$ diff teste.out saida 

int main(int argc, char*argv[]) {
    //declarar uma árvore
    arvore a;
    int opcao, aux;


    //inicializar a árvore como uma árvore vazia
    a = NULL;

    while(1) {
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                scanf("%d", &aux);
                a = inserir_bst(aux, a);
                break;
            case 2:
                pre_order_bst(a);
                printf("\n");
                break;
            case 3:
                in_order_bst(a);
                printf("\n");
            case 4:
            	pos_order_bst(a);
            	printf("\n");
            case 5:
            	exit(0);
        }
    }
}
