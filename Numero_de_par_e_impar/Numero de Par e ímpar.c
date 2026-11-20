
#include<stdio.h>
#define TAM 5
int main(){
    int numeros[TAM];
    int Pares = 0, impares = 0;
    //Prencher o ARRSY
    for(int i = 0; i < TAM; i++){
        printf("Digite o numero %d", i+1);
        scanf("%d", &numeros[i]);
    }
//contador de pares e impaares
    for (int i = 0; i < TAM ; i++){
        if(numeros[i] % 2 == 0){
            Pares++;
        }else{
            impares++;
        }
    }
printf("\n Quantidade de pares: %d \n " , Pares);
printf("\n Quantidade de impares: %d \n " , impares);

return 0;
}
