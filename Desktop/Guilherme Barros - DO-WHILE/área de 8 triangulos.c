#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){

	setlocale(LC_ALL, "Portuguese"); 
	int i=8;	
	float h,b,res;
	do{
		i++;
	printf("�rea do tri�ngulo \n\n");
	printf("digite a base\n\n");
	scanf("%f",&b);
	printf("Digite a altura \n\n");
	scanf("%f",&h);
	res=(b*h)/2;	
	printf("A �rea do tri�ngulo: %.1f\n\n",res); 
	puts("Deseja calcular  novamente? ");
	       puts("1 � para Sim ou 2 � para N�o");
             scanf("%d",&i);
} while(i<=1);
	return 0;
}
