#include <stdio.h>
#include<string.h>
#include<math.h>

int main (void){
    float i, resultado1, num, resultado2= 0; 
    printf("Ingrese un numero entero positivo\n");
    scanf("%f", &num);

    for (i= 0; i <=num ; i++)
    {
        resultado1= 0;
        resultado1= ((pow(-1, i))/((2*i) + 1));
        resultado2+= resultado1;
        
    }
    printf("%f", resultado2);
}