#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    for(int i = 0; i <=10; i++){
        int conta = numero * i;
        printf("%dX%d=%d\n", numero, i, conta);
    }
}