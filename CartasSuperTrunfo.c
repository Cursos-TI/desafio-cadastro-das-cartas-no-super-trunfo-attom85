#include <stdio.h>

    int main()
{    
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
	
	//Dados carta 1
    
    printf("Digite os dados da carta 1: \n" );
	printf("Estado (letra de A a H): " );
	scanf("%c", &estado1);
	printf("Codigo da carta : ");
	scanf("%s", codigoCarta1);
	printf("Nome da Cidade: ");
	scanf("%s", nomeCidade1);
	printf("População: ");
	scanf("%d",&populacao1);
	printf("Área(Km²): ");
	scanf("%f", &area1);
	printf("PIB: ");
	scanf("%f", &pib1);
	printf("Pontos Turísticos: ");
	scanf("%d", &pontosTuristicos1);
	
	// Dados da carta 2
    
    printf("Digite os dados da carta 2: \n" );
	printf("Estado (letra de A a H): " );
	scanf("%c", &estado2);
	printf("Codigo da carta: ");
	scanf("%s", codigoCarta2);
	printf("Nome da Cidade: ");
	scanf("%s", nomeCidade2);
	printf("População: ");
	scanf("%d",&populacao2);
	printf("Área(Km²): ");
	scanf("%f", &area2);
	printf("PIB: ");
	scanf("%f", &pib2);
	printf("Pontos Turísticos: ");
	scanf("%d", &pontosTuristicos2);
	
	// Impressão dados da carta 1
	
	printf(" Dados da carta 1: \n");
	printf("Estado: %c \n", estado1);
	printf("Código da Carta: %s \n", codigoCarta1);
	printf("Nome da Cidade: %s \n", nomeCidade1);
	printf("População: %d \n", populacao1);
	printf("Área: %f km² \n", area1);
	printf("PIB: %f \n", pib1);
	printf("Pontos Turísticos: %d \n", pontosTuristicos1);
	
	// Impressão dados da carta 2
	
	printf(" Dados da carta 2: \n");
	printf("Estado: %c \n", estado2);
	printf("Código da Carta: %s \n", codigoCarta2);
	printf("Nome da Cidade: %s \n", nomeCidade2);
	printf("População: %d \n", populacao2);
	printf("Área: %f km² \n", area2);
	printf("PIB: %f \n", pib2);
	printf("Pontos Turísticos: %d \n", pontosTuristicos2);
	
	return 0;
   
    
}    