#include <stdio.h>

int main(){
    
    char estado [2], estado2 [2]; //uma letra de A até H
    char codigo [4], codigo2 [4]; //um número de 01 a 04
    char cidade [15], cidade2 [15];
    int populacao, populacao2;
    float area, area2; //área do estado em km²
    float pib, pib2; 
    int pt, pt2; //pontos turísticos
    
    ////////////////////// CARTA A /////////////////////////////////////////

    printf("Escolha uma letra de A até H para representar o 1ª Carta: \n"); 
    scanf("%s", estado); //em strings não é necessário o uso de &
    printf("Informe um número de 01 a 04: \n"); 
    scanf("%s", codigo); //em strings não é necessário o uso de &
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade); //em strings não é necessário o uso de &
    printf("Informe a população da cidade escolhida: \n");
    scanf("%d", &populacao);
    printf("Informe a área da população em km²: \n");
    scanf("%f", &area);
    printf("Informe o PIB do Estado: \n");
    scanf("%f", &pib);
    printf("Informe a quantidade de pontos turísticos do Estado: \n");
    scanf("%d", &pt);
    
    ////////////////////// CARTA B /////////////////////////////////////////
    
    printf("Escolha uma letra de A até H para representar a 2ª Carta: \n"); 
    scanf("%s", estado2); //em strings não é necessário o uso de &
    printf("Informe um número de 01 a 04: \n"); 
    scanf("%s", codigo2); //em strings não é necessário o uso de &
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade2); //em strings não é necessário o uso de &
    printf("Informe a população da cidade escolhida: \n");
    scanf("%d", &populacao2);
    printf("Informe a área da população em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB do Estado: \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos do Estado: \n");
    scanf("%d", &pt2);

    //parte em que as informações descritas serão exibidas
    ////////////////////// CARTA A /////////////////////////////////////////

    printf("Carta A\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo); //os identificadores tem que ficar juntas pois os valores são juntos
    printf("Cidade: %s\n", cidade);
    printf("População: %.2d\n", populacao);
    printf("Área: %2.fkm²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pt);
    
    ////////////////////// CARTA B /////////////////////////////////////////

    printf("\nCarta B\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2); //os identificadores tem que ficar juntas pois os valores são juntos
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2d\n", populacao2);
    printf("Área: %2.fkm²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pt2);
    
    return 0;
}
