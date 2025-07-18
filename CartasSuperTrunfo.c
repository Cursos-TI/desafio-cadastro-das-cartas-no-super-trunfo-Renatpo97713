#include <stdio.h>

int main(){
    //Variaveis
    char estado[2];
    int codigo_carta;
    char nome_cidade[20];
    float populacao;
    float area;
    float pib;
    int ponto_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    //Imput de dados da carta 1
    printf("\n\nDADOS DA CARTA 2\n");
    //Estado
    printf("\nDigite uma letra para representa o estado da carta: ");
    scanf("%s", estado);
    //Codigo da carta
    printf("\nDigite o Codigo da carta com um numero de ate 2 digitos: ");
    scanf("%i", &codigo_carta);
    //Nome da cidade
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome_cidade);
    //População
    printf("\nDigite a população de sua cidade aproximadamente: ");
    scanf("%f", &populacao);
    //área da cidade
    printf("\nDigite a área da sua cidade em Km²: ");
    scanf("%f", &area);
    //PIB da cidade
    printf("\nDigite a o PIB da sua cidade em Milhoes: ");
    scanf("%f", &pib);
    //Pontos turisticos
    printf("\nDigite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%i", &ponto_turisticos);

    //Calculo da dansidade populacional e PIB per capita:
        densidade_populacional = populacao / area;
        pib_per_capita = pib / populacao;

        //Retorno de dados da carta 1 

        printf("\n\nCARTA 1\n\n");
        printf("Estado: %s\n", estado);
        printf("código: %s%i\n", estado,codigo_carta);
        printf("Nome da cidade: %s\n",nome_cidade);
        printf("População: %2.f\n", populacao);
        printf("Área da cidade: %.2fKM²\n", area);
        printf("PIB: %3.f\n", pib);
        printf("Pontos turisticos: %i\n", ponto_turisticos);
        printf("Densidade populacional: %.2f hab/Km²\n",densidade_populacional);
        printf("PIB per capita: R$%2.f\n",pib_per_capita);

    //Imput de dados da carta 2
    printf("\n\nDADOS DA CARTA 2\n");
    //Estado
    printf("\nDigite uma letra para representa o estado da carta: ");
    scanf("%s", estado);
    //Codigo da carta
    printf("\nDigite o Codigo da carta com um numero de ate 2 digitos: ");
    scanf("%i", &codigo_carta);
    //Nome da cidade
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome_cidade);
    //População
    printf("\nDigite a população de sua cidade aproximadamente: ");
    scanf("%f", &populacao);
    //área da cidade
    printf("\nDigite a área da sua cidade em Km²: ");
    scanf("%f", &area);
    //PIB da cidade
    printf("\nDigite a o PIB da sua cidade em Milhoes: ");
    scanf("%f", &pib);
    //Pontos turisticos
    printf("\nDigite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%i", &ponto_turisticos);
    
    //Calculo da dansidade populacional e PIB per capita:
        densidade_populacional = populacao / area;
        pib_per_capita = pib / populacao;


        //Retorno de dados da carta 2
        printf("\n\nCARTA 2\n\n");
        printf("Estado: %s\n", estado);
        printf("código: %s%i\n", estado,codigo_carta);
        printf("Nome da cidade: %s\n",nome_cidade);
        printf("População: %2.f\n", populacao);
        printf("Área da cidade: %.2fKM²\n", area);
        printf("PIB: %3.f\n", pib);
        printf("Pontos turisticos: %i\n", ponto_turisticos);
        printf("Densidade populacional: %.2f hab/Km²\n",densidade_populacional);
        printf("PIB per capita: R$%2.f\n",pib_per_capita);



    return 0;

}
