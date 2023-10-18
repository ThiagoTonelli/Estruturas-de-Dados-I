/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: thiago.silva.66
 *
 * Created on 13 de Abril de 2023, 16:13
 */

#include <stdio.h>
#include <stdlib.h>
#define max 3
/*
 * 
 */
typedef struct tlista{
    
    int n;
    int itens[max];
}lista;

lista * criarLista (){
    
    lista*l = (lista *)malloc(sizeof(lista));
    l->n = 0;
    return l;
}

int estaVazia(lista *l){
    if(l->n == 0){
        return 1;
    }
}
int estaCheia (lista *l){
    for(int i = 0; i < max; i++){
    if(l->n == max){
        return 0;
    }
  }
}

void insere (lista *l, int j){
    if (l->n == 0){
        l->itens[l->n] = j;
        l->n++;
    }
    else {
    printf("posicoes cheias");
  }
}    

void printa (lista* l){
    
    
}
int main(int argc, char** argv) {
    int j = 2;
   lista *a = criarLista ();
   int x = estaVazia(a);
   int y = estaCheia(a);
   insere (a,j);
   
    return (EXIT_SUCCESS);
}
