/* inoutint.c
*  exemplo de entrada e saída
*  de variáveis do tipo int.
*  Analogamente para tipos
*  float e double, basta substituir
*  %d por %f e %lf, respectivamente.
*/

#include <stdio.h>

int main( ) {
    
    int entrada, saida;
    
    scanf("%d",&entrada); /* o & é necessário no scanf, aprenderemos futuramente o porque */    
    saida = 2*entrada;    
    printf("%d\n", saida);
    
}
