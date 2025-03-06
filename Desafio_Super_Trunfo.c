#include <stdio.h>

int main() {
  /*Declaração das variáveis primeira carta*/
   char Estado1;
   char Cod_carta1[4];
   char cidade1[50];
   int população1;
   float Area1;
   float PIB1;
   int Pontos_turisticos1;

   /*Declaração de variáveis ssegunda carta*/

   char Estado2;
   char Cod_carta2[4];
   char cidade2[50];
   int população2;
   float Area2;
   float PIB2;
   int Pontos_turisticos2;
   
   /*Entrada de dados da Primeira Carta*/
  
   printf("\n-*-*-*Dados da primeira carta-*-*-*\n");
  
   /*Pede a letra que representará um dos Estados*/
   printf("Letra (A - H): ");
   scanf("%c", &Estado1);

   /*Pede o código da carta*/
   printf("Código da Carta: ");
   scanf("%s", &Cod_carta1);

   /*Pede o nome da cidade*/
   printf("Nome da Cidade: ");
   getchar(); 
   fgets(cidade1, sizeof(cidade1), stdin);

   /*Pede a população*/
   printf("População: ");
   scanf("%d", &população1);

   /*Pede a Área*/
   printf("Área: ");
   scanf("%f", &Area1);

   /*Pede o PIB*/
   printf("PIB: ");
   scanf("%f", &PIB1);

   /*Pede o número de pontos turísticos*/
   printf("Número de pontos turísticos: ");
   scanf("%d", &Pontos_turisticos1);

  /*Entrada de Dados da Segunda Carta*/

  printf("\n-*-*-*Dados da segunda carta-*-*-*\n");

  /*Pede a letra que representará um dos Estados*/
  printf("Letra (A - H): ");
  scanf(" %c", &Estado2);

  /*Pede o código da carta*/
  printf("Código da Carta: ");
  scanf("%s", &Cod_carta2);

  /*Pede o nome da cidade*/
  printf("Nome da Cidade: ");
  getchar(); 
  fgets(cidade2, sizeof(cidade2), stdin);

  /*Pede a população*/
  printf("População: ");
  scanf("%d", &população2);

  /*Pede a Área*/
  printf("Área: ");
  scanf("%f", &Area2);

  /*Pede o PIB*/
  printf("PIB: ");
  scanf("%f", &PIB2);

  /*Pede o número de pontos turísticos*/
  printf("Número de pontos turísticos: ");
  scanf("%d", &Pontos_turisticos2);

  /*Exibindo as informações na tela*/

  /*Dados da primeira carta*/

  printf("\n*-*-* Carta 1 *-*-*\n");

  printf("\n Letra: %c \n", Estado1);
  printf("Código da Carta: %s \n", Cod_carta1);
  printf("Cidade: %s \n" , cidade1);
  printf("População: %d habitantes \n", população1);
  printf("Área: %.2f km² \n", Area1);
  printf("PIB: %.2f bilhões de reais \n", PIB1);
  
  printf("Pontos turísticos: %d \n", Pontos_turisticos1);
  
  printf("\n-*-*-*-*-*-*-*-*-*-*-*-*\n");

   /*Dados da segunda carta*/

   printf("\n*-*-* Carta 2 *-*-*\n");

   printf("\n Letra: %c \n", Estado2);
   printf("\nCódigo da Carta: %s \n", Cod_carta2);
   printf("Cidade: %s \n", cidade2);
   printf("População: %d habitantes \n", população2);
   printf("Área: %.2f km² \n", Area2);
   printf("\nPIB: %.2f bilhões de reais \n", PIB2);
   printf("Pontos turísticos: %d \n", Pontos_turisticos2);
   
   printf("\n-*-*-*-*-*-*-*-*-*-*-*-*\n");
   
    return 0;
}
