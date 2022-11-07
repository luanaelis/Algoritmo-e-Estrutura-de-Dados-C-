/******************************************************************************

Luana Elis Teixeira Gallo - Bandas

*******************************************************************************/
#include <stdio.h>
#define TAM 3

   typedef struct BANDA{
     char nome[20];
     char estilo[20];
     int quantidade;
     int ranking;
   }BANDA;
 
 void leBanda(BANDA *temp){
     
     for(int i=0;i<TAM;i++ ){
         printf("\nNome da banda:") ;scanf("%s",temp[i].nome); 
         printf("\nEstilo da banda:") ; scanf("%s",temp[i].estilo);
        printf("\nquantidade de membros da banda:"); scanf("%d",&temp[i].quantidade);
        printf("\nColocação de favoritos") ; scanf("%d",&temp[i].ranking);

     }
 }
 void exibeBanda (BANDA *temp) {
    for( int i=0;i <TAM ; i++) {
        printf("\n\nBanda: %s",temp[i].nome);
        printf("\nEstilo: %s",temp[i].estilo);
        printf("\nIntegrantes: %d",temp[i].quantidade);
        printf("\nPosicao: %d",temp[i].ranking);
    }
}
    
int main(){
    
   BANDA temp[TAM];
   leBanda(temp);
    printf ("\n\nLISTAGEM DE TODAS AS BANDAS");
    exibeBanda (temp);
    return 0;
} 

