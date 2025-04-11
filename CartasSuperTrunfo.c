#include <stdio.h>

int main(){
    
    char estado [2], estado2 [2]; //uma letra de A até H
    char codigo [4], codigo2 [4]; //um número de 01 a 04
    char cidade [15], cidade2 [15];
    int populacao, populacao2;
    float area, area2; //área do estado em km²
    float pib, pib2; 
    int pt, pt2; //pontos turísticos
    float densidade, densidade2; //densidade populacional
    float pcapita, pcapita2; //pib per capita 
    
    ////////////////////// CARTA 1 /////////////////////////////////////////
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
    
    ////////////////////// CARTA 2 /////////////////////////////////////////
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

    densidade = populacao/area;
    densidade2 = populacao2/area2;
    pcapita = pib/populacao;
    pcapita2 = pib2/populacao2;

    //parte em que as informações descritas serão exibidas
    /////////////////////////////// CARTA 1 /////////////////////////////////////////
    printf("\nCarta 1 \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo); //os identificadores tem que ficar juntas pois os valores são juntos
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pt);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pcapita);
    
    /////////////////////////////// CARTA 2 /////////////////////////////////////////
    printf("\nCarta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2); //os identificadores tem que ficar juntas pois os valores são juntos
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pcapita2);

    return 0;
}
