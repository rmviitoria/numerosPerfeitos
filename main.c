/******************************************************************************

Um número perfeito é aquele que é positivo e que a soma dos seus divisores é igual a ele mesmo.
Por exemplo:
6 >> divisores 1, 2 e 3 >> 1+2+3 = 6. Logo, 6 é um número perfeito.
8 >> divisores 1, 2 e 4 >> 1+2+4 = 7. Logo, 8 não é um número perfeito.
28 >> divisores 1, 2, 4, 7 e 14 >> 1+2+4+7+14 = 28. Logo, 28 é um número perfeito.
Existem apenas 49 números perfeitos. Os 10 maiores números perfeitos são os seguintes:
6
28
496
8.128
33.550.336
8.589.869.056
137.438.691.328
2.305.843.008.139.952.128
2.658.455.991.569.831.744.645.692.615.953.842.176
191.561.942.608.236.107.294.793.378.084.303.638.130.997.321.548.169.216
Sabendo disto, crie um programa que recebe vários inteiros pelo teclado e, 
para cada um deles, imprime na tela se ele é ou não um número perfeito. 
Quando o usuário digitar um número negativo, seu programa deve terminar.



*******************************************************************************/
#include <stdio.h>


int main()
{
    while(1){
        int num, soma;
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
        
        if(num <= 0) break;
        
        for(int i=1; i<num; i++)
            if(num % i == 0)
                soma += i;
        
        if(soma == num) printf("%d é um número perfeito.\n", num);
        else printf("%d não é um número perfeito.\n", num);
    }
    
    return 0;
}
