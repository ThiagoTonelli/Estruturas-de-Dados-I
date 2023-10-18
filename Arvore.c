/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/*
 * File:   main.c
 * Author: thiago.silva.66
 *
 * Created on 15 de Junho de 2023, 16:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

typedef struct arvore{

    char info;
    struct arvore *esq;
    struct arvore *dir;

}Arvore;

Arvore *criarArvoreVazia(){
    return NULL;

}

Arvore *criarArvore(char c, Arvore *sae, Arvore *sad){
    Arvore *novo = (Arvore*)malloc(sizeof(Arvore));
    if(novo != NULL){
        novo->info = c;
        novo->esq = sae;
        novo->dir = sad;
        return novo;
    }else{
        printf("n foi possivel alocar");
    }
}

int estaVazia(Arvore *a){
    return (a == NULL);
}

void imprime(Arvore *arv){
    printf("<");
    if(!estaVazia(arv)){
        printf("%c", arv->info);
        imprime(arv->esq);
        imprime(arv->dir);
    }
        printf(">");
}

Arvore *liberar(Arvore *a){
    if(!estaVazia(a)){
        liberar(a->esq);
        liberar(a->dir);
        free(a);
    }
    return NULL;
}

int pertence(Arvore *a, char c){
    if(!estaVazia(a)){
        return NULL;
    }else if(a->info == c){
        return 1;
    }else if(pertence(a->esq, c)){
        return 1;
    }else{
        return (pertence(a->dir, c));
    }
}

int quantidade(Arvore *a){
    if(!estaVazia(a)){
        return 1 + quantidade(a->dir) + quantidade(a->esq);
    }else{
        return 0;
    }
}

int altura(Arvore *a){

    if(!estaVazia(a)){
        return (2 * altura(a->esq) + 1) + (2 * altura(a->dir ) + 1) - 1;;
    }else{
        return 0;
    }
}

int impares(Arvore *a){
    if(estaVazia(a)){
        return 0;
    }else{

    }




int main(int argc, char** argv) {

    Arvore *d = criarArvore('d', criarArvoreVazia(), criarArvoreVazia());
    Arvore *b = criarArvore('b', criarArvoreVazia(), d);
    Arvore *e = criarArvore('e', criarArvoreVazia(), criarArvoreVazia());
    Arvore *f = criarArvore('f', criarArvoreVazia(), criarArvoreVazia());
    Arvore *c = criarArvore('c', e, f);
    Arvore *a = criarArvore('a', b, c);
    printf("%d", quantidade(a));
     printf("\n%d", altura(a));
   // imprime(a);




    return (EXIT_SUCCESS);
}
