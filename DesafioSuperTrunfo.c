#include <stdio.h>

int main() {
  /*Declaração das variáveis primeira carta*/
   char Estado1;
   char Cod_carta1[4];
   char cidade1[50];
   int populacao1;
   float Area1;
   float PIB1;
   int Pontos_turisticos1;
   float Densidade_populacional;
   float Pib_Per_Capita;

   /*Declaração de variáveis segunda carta*/

   char Estado2;
   char Cod_carta2[4];
   char cidade2[50];
   int populacao2;
   float Area2;
   float PIB2;
   int Pontos_turisticos2;
   float Densidade_populacional2;
   float Pib_Per_Capita2;

  
   /*Entrada de dados da Primeira Carta*/
  
   printf("\n-*-*-*Dados da primeira carta-*-*-*\n");
  
   /*Pede a letra que representará um dos Estados*/
   printf("Letra (A - H): ");
   scanf("%c", &Estado1);

   /*Pede o código da carta*/
   printf("Código da Carta: ");
   scanf("%s", &Cod_carta1);

   getchar();

   /*Pede o nome da cidade*/
   printf("Nome da Cidade: ");
   fgets(cidade1, sizeof(cidade1), stdin);

   /*Pede a população*/
   printf("População: ");
   scanf("%d", &populacao1);

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

  getchar();

  /*Pede o nome da cidade*/
  printf("Nome da Cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);

  /*Pede a população*/
    printf("População: ");
    scanf("%d", &populacao2);

  /*Pede a Área*/
    printf("Área: ");
    scanf("%f", &Area2);

  /*Pede o PIB*/
    printf("PIB: ");
    scanf("%f", &PIB2);

  /*Pede o número de pontos turísticos*/
    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_turisticos2);

  //Atribuindo valores as variáveis Densidade populacional e Pib per capita

  Densidade_populacional = (float) (populacao1 / Area1);

  Densidade_populacional2 = (float) (populacao2 / Area2);

  Pib_Per_Capita = (float) (PIB1 / populacao1);

  Pib_Per_Capita2 = (float) (PIB2 / populacao2);


  /*Exibindo as informações na tela*/

  /*Dados da primeira carta*/

  printf("\n*-*-* Carta 1 *-*-*\n");

  printf("\n Letra: %c \n", Estado1);
 
  printf("\n Código da Carta: %s \n", Cod_carta1);
 
  printf("\n Cidade: %s " , cidade1);
 
  printf("\n População: %d habitantes \n", populacao1);
 
  printf("\n Área: %.2f km² \n", Area1);
 
  printf("\n PIB: %.2f bilhões de reais \n", PIB1);
 
  printf("\n Pontos turísticos: %d \n", Pontos_turisticos1);

  printf("\n Densidade populacional da cidade: %.2f \n hab/km² n", Densidade_populacional);

  printf("\n PIB per Capita da cidade: R$ %.2f \n",Pib_Per_Capita);

 
  printf("\n-*-*-*-*-*-*-*-*-*-*-*-*\n");

   /*Dados da segunda carta*/

   printf("\n*-*-* Carta 2 *-*-*\n");

   printf("\n Letra: %c \n", Estado2);

   printf("\n Código da Carta: %s \n", Cod_carta2);

   printf("\n Cidade: %s ", cidade2);

   printf("\n População: %d habitantes \n", populacao2);

   printf("\n Área: %.2f km² \n", Area2);

   printf("\n PIB: %.2f bilhões de reais \n", PIB2);

   printf("\n Pontos turísticos: %d \n", Pontos_turisticos2);

   
  printf("\n Densidade populacional da cidade: %.2f hab/km² \n", Densidade_populacional2);

  printf("\n PIB per Capita da cidade: R$ %.2f\n",Pib_Per_Capita2);

   printf("\n -*-*-*-*-*-*-*-*-*-*-*-*\n");
   
    return 0;
}
