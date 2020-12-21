#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){

	setlocale(LC_ALL, "Portuguese"); 
	int nd,i=10;
	float vh,ht,vb,vl;
	do{
		i++;	
	printf("Calculando salário \n\n");
	printf("Digite o valor das horas: \n");
	scanf("%f",&vh);
	printf("Digite o total de horas trabalhadas: \n");
	scanf("%f",&ht);
	printf("Digite o numero de dependentes: \n");
	scanf("%d",&nd);
	vb=vh*ht;	
	printf("O valor bruto é : %f ",vb);
	vl=vb+nd*300;
	printf("O valor liquido é : %f",vl);
	puts("Deseja calcular  novamente? ");
	       puts("1 – para Sim ou 2 – para Não");
             scanf("%d",&i);
	
}	while(i<=1);
	return 0;
}
