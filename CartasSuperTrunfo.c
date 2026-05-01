#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
// CARTA 1
   int populacao1, ponto_turistico1;
  float area1, PIB1;    
   char Estado1[50], codigo1[50], nome1[50];

   // CARTA 2
   int populacao2, ponto_turistico2;
   float area2, PIB2;
   char Estado2[50], codigo2[50], nome2[50];

  // Área para entrada de dados
//-----------CARTA 1-------------//

   printf("Digite a populacao:\n");
   scanf("%d", &populacao1);

   printf("Digite o ponto turistico:\n");
   scanf("%d", &ponto_turistico1);

   printf("Digite a area em km^2:\n");
   scanf("%f", &area1);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB1);

   printf("Digite o nome do Estado:\n");
   scanf("%s", Estado1);

   printf("Digite o codigo:\n");
   scanf("%s", codigo1);

   printf("Digite o nome da cidade:\n");
   scanf("%s", nome1);

   //---------CARTA 2----------//

   printf("Digite a populacao:\n");
   scanf("%d", &populacao2);

   printf("Digite o ponto turistico:\n");
   scanf("%d", &ponto_turistico2);

   printf("Digite a area em km^2:\n");
   scanf("%f", &area2);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB2);

   printf("Digite o nome do Estado:\n");
   scanf("%s", Estado2);

   printf("Digite o codigo:\n");
   scanf("%s", codigo2);

   printf("Digite o nome da cidade:\n");
   scanf("%s", nome2);

  // Área para exibição dos dados da cidade
  //-----------CARTA 1------------//
   printf("Estado: %s\n", Estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Nome da cidade: %s\n", nome1);
   printf("Populacao: %d\n", populacao1);
   printf("Area: %.2f km^2\n", area1);
   printf("PIB: %.2f\n", PIB1);
   printf("Numero de pontos turisticos: %d\n", ponto_turistico1);

   //-------------CARTA 2-------------//

   printf("Estado: %s\n", Estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("Populacao: %d\n", populacao2);
   printf("Area: %.2f km^2\n", area2);
   printf("PIB: %.2f\n", PIB2);
   printf("Numero de pontos turisticos: %d\n", ponto_turistico2);

return 0;
} 
