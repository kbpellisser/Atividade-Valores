#include<stdio.h>
#include<math.h>

int main()
{

/*
Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
*/

float reais, cotacao = 4.98, resultado;

printf ("Digite a quantidade em reais que lhe darei o valor da conversao");
scanf ("%f", &reais);

resultado = reais / cotacao;

printf("\nO valor exato da conversao é: %.2f", resultado);

}