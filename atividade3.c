#include<stdio.h>
#include<math.h>

int main()
{

/*
Dadas as medidas de uma sala, informe sua área.
*/

int largura, comprimento, area;

printf ("Digite a largura e o comprimento do ambiente: ");
scanf ("%d %d", &largura, &comprimento);

area = largura * comprimento;


printf("\nA area da sala é: %d", area);

}