#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int DAT,i=15;
	do{
	i++;
	printf("Digite o seu ano de nascimento: ");
	scanf("%d",&DAT);
	if (DAT<=2001){
	printf("Voc� atingiu a maioridade \n");
	}
	else{
	printf ("Voc� n�o atingiu a maioridade \n");
}
	puts("1 � para Sim ou 2 � para N�o");
	             scanf("%d",&i);
	 
} while(i<=1);
return 0;
}
