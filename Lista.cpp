#include<stdio.h>
#include<stdlib.h>


struct cartao{

int dia;
float entrada;
float saida;

 struct cartao *prox;

};

typedef struct cartao Cartao;

Cartao *item;

void add (int d, float e, float s){

  Cartao *p = (Cartao*) malloc(sizeof(Cartao));

  p -> dia = d;
  p -> entrada = e;
  p -> saida = s;

  p-> prox = item;
  item = p;
  
  
  
}


 void imprimir( Cartao *p){

   if (p != NULL){

     printf("\n\n dia: %d, entrada: %.2f,  saida: %.2f", p -> dia, p -> entrada, p -> saida);
     imprimir(p -> prox);
     
   }
 }

int main (){

    int a = 0;
    
  
     add(24, 12.20, 20.40);
     add(25, 12.20, 20.40);
     add(7,  07.20, 17.40);
     add(8,  08.20, 18.40);
     add(9,  08.20, 19.40);
  
    Cartao *aux = item;
  
     imprimir(aux);
      
       
  
}
 