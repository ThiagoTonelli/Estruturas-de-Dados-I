/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: thiago.silva.66
 *
 * Created on 5 de Junho de 2023, 14:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
typedef struct no{
    
    float info;
    struct no* prox;
    
}noLista;

typedef struct fila{
    
    noLista *ini;
    noLista *fim;
    
}Fila;

Fila *criarFila(){
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
    
}

int estaVazia(Fila *f){
    return (f->ini == NULL);
}

void inserir(Fila *f, float v){
    
    noLista *novo = (noLista*)malloc(sizeof(noLista));
    
    if(novo != NULL){
        if(f->ini == NULL){
            novo->info = v;
            novo->prox = NULL;
            f->ini = f->fim = novo;
        }else {
            
            novo->info = v;
            novo->prox = NULL;
            f->fim->prox = novo;
            f->fim = novo;
        }
    } 
}

void imprime(Fila *f){
    noLista *temp;
    
    for(temp = f->ini; temp != NULL; temp = temp->prox){
        printf("\n%2.f", temp->info);
    }
}

float remover(Fila *f){
    noLista *p;
    if(!estaVazia(f)){
        p = f->ini;
        float v = p->info;
        f->ini = p->prox;
        if (f->ini == NULL){
            f->fim = NULL;
        }
        free(p);
        return v;
    }   
}

void libera(Fila *f){
    noLista *aux, *p;  
    for(aux = f->ini; aux != NULL; p = aux){
        aux = p->prox;
        free(p);
    }
    free(f);
    f = NULL;
}
    
void busca(Fila *f, float v){
    noLista *aux, *p, *ant;  
    for(p = f->ini; p->prox != f->fim; p = p->prox){
        ant = p;
    }
    for(aux = f->ini; aux != NULL; aux = aux->prox){
        if(aux->info == v){
            if(f->ini->prox == NULL){
            
            }else{
                ant->prox = aux->prox;
                aux->prox = f->ini;
                f->ini = aux;
            }
            break;
        }
    }
}
           
int main(int argc, char** argv) {
    Fila *fila = criarFila();
    estaVazia(fila);
    inserir(fila, 1);
    inserir(fila, 2);
    inserir(fila, 3);
    inserir(fila, 4);
   // remover(fila);
   // imprime(fila);
    busca(fila, 3);
    imprime(fila);
    
    
    
    return (EXIT_SUCCESS);
}
