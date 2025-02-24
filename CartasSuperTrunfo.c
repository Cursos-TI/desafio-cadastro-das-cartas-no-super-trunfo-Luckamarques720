#include <stdio.h>

int main() {
  /*Declaração das variáveis*/
   char Estado;
   char Cod_carta;
   char cidade;
   int população;
   float Area;
   float PIB;
   int Pontos_turisticos;

   /*Pede a letra que representará um dos Estados*/
   pintf("Letra: ");
   scanf("%s", &Estado);

   /*Pede o código da carta*/
   printf("Código da Carta: ");
   scanf("%s", &Cod_carta);

   /*Pede a população*/
   printf("Nome da Cidade: ");
   scanf("%s", &cidade);

   /*Pede a população*/
   printf("População: ");
   scanf("%d", &população);

   /*Pede a Área*/
   printf("Área: ");
   sacanf("%f", &Area);

   /*Pede o PIB*/
   printf("PIB: ");
   scanf("%f", &PIB);

   /*Pede o número de pontos turísticos*/
   printf("Número de pontos turísticos: ");
   scanf("%d", &Pontos_turisticos);


    return 0;
}
