#include <stdio.h>

int main(){
    // CARTA 1
   int populacao1, ponto_turistico1;
   float area1, PIB1;
   float densidade_populacional1,PIB_per_capita1;
   char Estado1[50], codigo1[50], nome1[50];

   // CARTA 2
   int populacao2, ponto_turistico2;
   float area2, PIB2;
   float densidade_populacional2,PIB_per_capita2;
   char Estado2[50], codigo2[50], nome2[50];

   printf("*** CARTA1 ***\n");

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

   densidade_populacional1 = populacao1 / area1;
   PIB_per_capita1 = PIB1 / populacao1;

   printf("*** CARTA2 ***\n");

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

   densidade_populacional2 = populacao2 / area2;
   PIB_per_capita2 = PIB2 / populacao2;

   printf("*** CARTA1 ***\n");

   printf("Estado: %s\n", Estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Nome da cidade: %s\n", nome1);
   printf("Populacao: %d\n", populacao1);
   printf("Area: %.3f km^2\n", area1);
   printf("PIB: %.4f\n", PIB1);
   printf("Numero de pontos turisticos: %d\n", ponto_turistico1);
   printf("PIB per capita: %.4f\n", PIB_per_capita1);
   printf("Densidade populacional: %.3f\n", densidade_populacional1);

   printf("*** CARTA2 ***\n");

   printf("Estado: %s\n", Estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("Populacao: %d\n", populacao2);
   printf("Area: %.2f km^2\n", area2);
   printf("PIB: %.2f\n", PIB2);
   printf("Numero de pontos turisticos: %d\n", ponto_turistico2);
   printf("PIB per capita: %.2f\n", PIB_per_capita2);
   printf("Densidade populacional: %.2f\n", densidade_populacional2);

   return 0;
}