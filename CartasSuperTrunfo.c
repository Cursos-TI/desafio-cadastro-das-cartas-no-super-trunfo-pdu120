#include <stdio.h>

int main() {
  // variaveis da carta 01
  char estado01;
  char codigo01[40];
  char nomedacidade01[50];
  int populacao01;
  float area01;
  float pib01;
  int pontosturisticos01;
  
  // variaveis da carta 02

   char estado02;
   char codigo02[40];
   char nomedacidade02[50];
   int populacao02;
   float area02;
   float pib02;
   int pontosturisticos02;

   // entrada dos dados da carta 01

    printf("cadastro da carta 01\n\n");

    printf("digite o estado de (A-H): ");
    scanf("%c", &estado01);
    printf("digite o codigo da carta( exe: A01): ");
    scanf("%s", codigo01);
    printf("digite o nome da cidade ( sem espaço): ");
    scanf("%s", nomedacidade01);
    printf("DIGITE A POPULAÇÃO: ");
    scanf("%d", &populacao01);
    printf("digite a area em (km): ");
    scanf("%f", &area01);
    printf("digite o pib em bilhoes de reais: ");
    scanf("%f", &pib01);
    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos01);

    // entrada dos dados da carta 02

    printf("\n\ncasdastro da carta 02\n\n");

    printf("digite o estado de (A-H): ");
    scanf(" %c", &estado02);
    printf("digite o codigo da carta( exe: A02) ");
    scanf("%s", codigo02);
    printf("digite o nome da cidade( sem espaço:) ");
    scanf("%s", nomedacidade02);
    printf("digite a população: ");
    scanf("%d", &populacao02);
    printf("digite a area(em km) ");
    scanf("%f", &area02);
    printf("digite o pib em bilhões de reais: ");
    scanf("%f", &pib02);
    printf("digite o numeros de pontos turisticos: ");
    scanf("%d", &pontosturisticos02);

    //exibição da infomação da carta 01

    printf("\n\ncarta01:\n\n ");

    printf("estado: %c\n", estado01);
    printf("codigo: %c%s\n",estado01, codigo01);
    printf("nome da cidade: %s\n", nomedacidade01);
    printf("população: %d\n", populacao01);
    printf("area em km: %f.2f\n", area01);
    printf("pib em bilhões de reais: %f.2f\n", pib01);
    printf("numeros de pontos turisticos: %d\n", pontosturisticos01);

    //exibição da infomação da carta 02

    printf("\n\ncarta 02\n\n");

    printf("estado: %c\n", estado02);
    printf("codigo: %c%s\n",estado02, codigo02);
    printf("nome da cidade: %s\n", nomedacidade02);
    printf("população: %d", populacao02);
    printf("area em km: %f.2f\n", area02);
    printf("pib em bilhões de reais: %f.2f\n", pib02);
    printf("numeros de pontos turisticos: %d\n", pontosturisticos02);

    return 0;
}
