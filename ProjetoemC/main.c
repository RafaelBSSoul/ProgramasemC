#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b){
return a+b;
}

int main() {
    int numero1 = 2;
    int numero2 = 1;
    int somat = numero1 + numero2;
    printf("A soma é: %d\n", somat);
    if(numero2<numero1){
        printf("è maior que o numero \n");
    } else{
                printf("è maior ");

    }

soma(2,5);
printf("%d\n", soma);
int arrayrray[7]={12, 15,4,10,8,5,2};
int tamanho = 7;
int aux;
 for(int i = 0; i<tamanho;i++){
printf("%d\n", arrayrray[i]);
 }
if(arrayrray[0]<arrayrray[1]){
        aux = arrayrray[0];
        arrayrray[0]=arrayrray[1];
        arrayrray[1]=aux;
    printf("ok\n");
printf("%d\n",arrayrray[0]);
printf("%d\n",arrayrray[1]);


}
for(int i =0;i<tamanho;i++){
    if(arrayrray[i]<arrayrray[i+1]){
        aux = arrayrray[i];
        arrayrray[i]=arrayrray[i+1];
        arrayrray[i+1]=aux;
    }
    printf(" %d ",arrayrray[i]);

}


    return 0;
}

