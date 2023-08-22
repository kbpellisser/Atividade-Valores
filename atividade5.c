#include<stdio.h>
#include<math.h>

int main()
{

/*
Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, 
adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). 
Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
*/

float mercadoria, frete, custos, valorbruto, lucro, dobro;

printf ("\nQual o valor da mercadoria");
scanf ("%f", &mercadoria);

printf ("\nQual o valor do frete");
scanf ("%f", &frete);

printf ("\nQual o valor de eventuais custos");
scanf ("%f", &custos);

valorbruto = mercadoria + frete + custos;

printf("\nO valor bruto do produto e: %f", valorbruto);

printf("\n Por quanto voce deseja vender?", lucro);
scanf ("%f", lucro);

lucro = valorbruto * dobro;

printf("\nO seu lucro final sera: %f", lucro);
}