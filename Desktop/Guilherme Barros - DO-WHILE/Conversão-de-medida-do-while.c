#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float cm,m,dc,mm;	
	int i=10;
	do{
	i++;
	printf("\n\t Conversao de medida \n\n");
	printf("Digite a quantidade de cent�metros: \n");
	scanf("%f",&cm);
	mm=cm*10;
	printf("Esse e o seu valor em Mil�metro: %f \n",mm);
	dc=cm/10;
	printf("Esse e o seu valor em Dec�metro: %f \n",dc);
	m=dc/10;
	printf("\n \t esse � o seu valor em Metros : %f\n\n",m,"cm�");
	puts("1 � para Sim ou 2 � para N�o");
	             scanf("%d",&i);
	 
} while(i<=1);	
	system("PAUSE");	
 	 return 0;
 }
