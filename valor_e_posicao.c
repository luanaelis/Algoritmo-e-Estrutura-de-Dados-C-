/******************************************************************************

Luana Elis Teixeira Gallo - Valor e Posição

*******************************************************************************/
int main(){
   int i, m, v[10], p=0;
   
   for (i=0;i<10;i++){
     scanf("%d", &v[i]);
  
     if (i==0){
        m=v[i];
     }
     else 
       if (v[i]>m) {
          p = i;
          m=v[i];
       }
   }
    printf("\n o maior valor é %d e sua posição é %d", m, p);

}

