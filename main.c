#include <stdio.h>
#include<string.h>
#include<math.h>

int main (void){
    int i, resultado, num;
    printf("Ingrese un numero entero positivo\n");
    scanf("%d", &num);

    for (i= 0 ; i <= num; i++) 
    {
        resultado= ((pow(-1, i))/((2*i) + 1));
        resultado+= resultado;
    }
    printf("%d", resultado);
}