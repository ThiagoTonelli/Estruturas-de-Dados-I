/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: thiago.silva.66
 *
 * Created on 18 de Maio de 2023, 16:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
typedef struct noLista{
        int info;
        struct noLista *prox;
    }Lista;
    
typedef struct pilha{
        Lista *prim;
    }Pilha;
    
Pilha *criarPilha(){
        
       Pilha *p = (Pilha*)malloc(sizeof(Pilha));
       p->prim = NULL;
       return p; 
}   

int estaVazia(Pilha *p){
    return (p->prim == NULL);
}

void push(Pilha *p, int v){
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    lista->info = v;
    lista->prox = p->prim;
    p->prim = lista;  
}

void imprime(Pilha *p){
    Lista *l;
    for(l = p->prim; l != NULL; l=l->prox){
        printf("\n%d", l->info);
    }
}

float pop(Pilha *p){
    Lista *aux = p->prim;
    p->prim = aux->prox;
    float v = aux->info;
    free(aux);
    return v;
}

void liberar(Pilha *p){
    Lista *temp, *aux;
    for(aux = p->prim; aux != NULL; aux=temp){
        temp = aux->prox;
        free(aux);
    } 
}
    
int main(int argc, char** argv) {

    Pilha *pilha = criarPilha();
    push(pilha, 5);
    push(pilha, 3);
    push(pilha, 3);
    imprime(pilha);
    printf("\n%2.f", pop(pilha));
        
    return (EXIT_SUCCESS);
}
