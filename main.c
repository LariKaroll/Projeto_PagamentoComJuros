#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	float valorDaCompra;
	int formaPagamento,valorDasParcelas;
	
	printf("Informe o total da sua compra: R$");
	scanf("%f",&valorDaCompra);
	printf("A forma de pagamento: \n1x a 10x \nLembrando que 1x e a vista\n");
	scanf("%d",&valorDasParcelas);
	
	if(valorDasParcelas == 1){
		valorDaCompra = valorDaCompra - (valorDaCompra*0.05);
		printf("Valor total da compra: R$%.2f", valorDaCompra);
	}
	if(valorDasParcelas >= 2){
		if(valorDasParcelas <= 3){
			valorDaCompra = valorDaCompra - (valorDaCompra*0.03);
			printf("Total da compra com %dX: R$%.2f",valorDasParcelas ,valorDaCompra);
		} else{
			valorDaCompra = valorDaCompra - (valorDaCompra*0.1);
			printf("Total da compra com %dX: R$%.2f",valorDasParcelas ,valorDaCompra);
		}
	}
}
