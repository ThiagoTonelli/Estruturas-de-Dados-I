

#include <stdio.h>
#include <stdlib.h>
#define tam 50


typedef struct pilha{
    
    int n;
    float info[tam];
}Pilha;

Pilha* criarPilha(){
    
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}    

int estaVazia(Pilha *p){
    return (p->n == 0);
}

int estaCheia(Pilha *p){
    return (p->n == tam);
}
   
void push(Pilha *p, int v){
    if(estaCheia){
        p->info[p->n] = v;
        p->n++;
    }else {    
        printf("Sua pilha esta cheia");
    }
}    

void imprime(Pilha *p){
    
    if(!estaVazia(p)){
        for(int i = p->n--; i >= 0; i--){
        printf("\n%2.f", p->info[i]);
        }
    }
}

float* pop(Pilha *p){
    int aux;
    if(!estaVazia(p)){
        aux = p->info[p->n-1];
        p->n--;
    }else {
        printf("A lista esta vazia");
    }    
    return aux;
}

void liberaPilha(Pilha *p){
 
    free(p);
}
    
int main() {

    Pilha* pilha = criarPilha();
    estaVazia(pilha);
    estaCheia(pilha);
    push(pilha, 5);
    push(pilha, 3);
    push(pilha, 6);
    pop(pilha);
    imprime(pilha);
    liberaPilha(pilha);
   
}

