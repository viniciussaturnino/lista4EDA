#include <stdio.h>
#include <stdlib.h>

int soma(int *ptr,int tam,int max){
  int i,soma=0,cont=0;
  for(i=0;i<tam;i++){
    if(soma<max){
      soma+=ptr[i];
      cont++;
    }
  }
  return ptr[cont-1];
}

int main(){
  int numero,*numeros,i=0,max,xesque;
  scanf("%d",&numero);
  numeros = (int*)malloc(sizeof(int)*1);
  numeros[0] = numero;
  do {
    numeros = (int*)realloc(numeros,sizeof(int)*(i+1));
    numeros[i]=numero;
    i++;
    scanf("%d",&numero);
  } while(numero!=0);
  scanf("%d",&max);
  xesque = soma(numeros,i,max);
  printf("%d\n",xesque);
  return 0;
}
