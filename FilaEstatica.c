/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: thiago.silva.66
 *
 * Created on 1 de Junho de 2023, 16:29
 */

#include <stdio.h>
#include <stdlib.h>
#define N 50
/*
 * 
 */

typedef struct fila{
    
    float info[N];
    int n, inicio;
}Fila;

Fila *criar_fila(){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->inicio = f->n = 0;
    return f;
}

int estaVazia(Fila *f){
    return(f->n == 0);
}

int estaCheia(Fila *f){
    return (f->n == N);
}

void inserir(Fila *f, float v){
    if(!estaCheia(f)){
        int fim = (f->inicio + f->n) % N;
        f->info[fim] = v;
        f->n++;
    }
    else {
        printf("a lista esta cheia");
    }
}

void imprime(Fila *f, int v){
    aux = 
    for(f->)
    
}
    
    
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}
