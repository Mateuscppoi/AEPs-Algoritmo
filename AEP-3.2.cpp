#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float total = 0;
int Dogs_qtd [8]; 
float Dogs_Preco [8];
static float Dogs[8] = {8.00,9.00,12.00,11.00,12.50,14.50,5.00,7.50};

void Menu () {
    system("cls");
	printf("                                C�DIGO=====PRODUTO============VALOR=======QUANTIDADE\n");
	printf("                                   1    Cachorr�o Simples     R$8,00          %d\n", Dogs_qtd[0]);
	printf("                                   2    Cachorr�o Duplo       R$9,00          %d\n", Dogs_qtd[1]);
	printf("                                   3    Cachorr�o Bacon       R$12.00         %d\n", Dogs_qtd[2]);
	printf("                                   4    Cachorr�o Ovo         R$11,00         %d\n", Dogs_qtd[3]);
	printf("                                   5    Cachorr�o Frango      R$12,50         %d\n", Dogs_qtd[4]);
	printf("                                   6    Cachorr�o Monstro     R$14,50         %d\n", Dogs_qtd[5]);
	printf("                                   7    Refrigerante 300ml    R$5,00          %d\n", Dogs_qtd[6]);
	printf("                                   8    Refrigerante 600ml    R$7,00          %d\n", Dogs_qtd[7]);
	printf("                                   9    Voltar\n");
	printf("                                ====================================================\n");
	printf("                                 TOTAL: R$ %.2f\n", total);
	printf("                                ====================================================\n");
	printf("                                 Opc�o: ");
}

int Edita_Pedido (int  escolha, int pedido, int qtd2) {
	int tot;
	if (escolha == 1) {
		tot = Dogs[pedido-1] * qtd2;
		Dogs_Preco[pedido-1] = Dogs_Preco[pedido-1] + tot;	
		Dogs_qtd[pedido-1] = Dogs_qtd[pedido-1] + qtd2;
	}
	if (escolha == 2) {
		if ((Dogs_qtd[pedido-1] - qtd2) > 0  ) {
		tot =  - Dogs[pedido-1] * qtd2;
		Dogs_Preco[pedido-1] = Dogs_Preco[pedido-1] - tot;
		Dogs_qtd[pedido-1] = Dogs_qtd[pedido-1] - qtd2;
		} else {
			system("cls");
			printf("                               =====================");
			printf("\n                               =Quantidade Inv�lida=");
			printf("\n                               =====================\n");
			printf("\n");
			system("pause");
		}
	}
	return tot;
}

int main () {
	int n_atendimento = 1;
	int novo = 0;
	int sai = 0;
	int volt = 0;
	while (sai != 1 ) {
		if (novo == 1) {
		for (int x = 0; x>=8; x++) {
			Dogs_qtd[x] = 0;
		}
			novo = 0;
			total = 0;
		}
		volt = 0;
		int desconto;
		int op1 = 0;
		int tmp = 0;
		float total2 = 0;
		setlocale(LC_ALL, "Portuguese");
		system("cls");
		printf("                                ============== POI POI TEY TEY===================\n");
		printf("                                 ATENDIMENTO : %d                                 \n", n_atendimento);
		printf("                                                                                 \n");
		printf("                                 10 %% DE DESCONTO NOS PEDIDOS ACIMA DE R$40,00   \n");
		printf("                                 15 %% DE DESCONTO NOS PEDIDOS ACIMA DE R$100,00  \n");
		printf("                                                                                 \n");
		printf("                                 1- Adicionar Pedidos                            \n");
		printf("                                 2- Cancelar Pedidos                             \n");
		printf("                                 3- Fechar atendimento                           \n");
		printf("                                 4- Sair                                         \n");
		printf("                                                                                 \n");
		printf("                                 TOTAL: R$ %.2f                                  \n", total);
		printf("                                =================================================\n");
		fflush(stdin);
		printf("                                 Opc�o: ");
		scanf("%d", &op1);
		if (op1 == 1 || op1 == 2){
			while (volt == 0) {
				int op2 = 0;
				int qtd = 0;
				Menu();
				fflush(stdin);
				scanf("%d", &op2);
				printf("                                ====================================================\n");
				if (op2 >= 1 && op2<=8) { 
					printf("                                Digite a quantidade: ");
					fflush(stdin);
					scanf("%d", &qtd);
					total = total + Edita_Pedido(op1, op2, qtd);
				}
				if (op2 == 9){
					volt = 1;						
				}
			}
		}
			
		if (op1 == 3) {
			system("cls");
			desconto = 0;
			total2 = total;
			printf("                                |QUANTIDADE==========PRODUTO==================PRE�O|\n");
			if (Dogs_qtd[0] != 0) {
				printf("                                     %d        Cachorr�o Simples            R$%.2f\n",Dogs_qtd[0], Dogs_Preco[0]);
			}
			if (Dogs_qtd[1] != 0 ){
				printf("                                     %d        Cachorr�o Duplo              R$%.2f\n", Dogs_qtd[1],Dogs_Preco[1]);
			}
			if (Dogs_qtd[2] != 0 ) {	
				printf("                                     %d        Cachorr�o Bacon              R$%.2f\n", Dogs_qtd[2], Dogs_Preco[2]);
			}
			if (Dogs_qtd[3] != 0 ) {
				printf("                                     %d        Cachorr�o Ovo                R$%.2f\n", Dogs_qtd[3], Dogs_Preco[3]);	
			}
			if (Dogs_qtd[4] != 0) {
				printf("                                     %d        Cachorr�o Frango             R$%.2f\n", Dogs_qtd[4], Dogs_Preco[4]);
			}
			if (Dogs_qtd[5] != 0) {
				printf("                                     %d        Cachorr�o Monstro            R$%.2f\n", Dogs_qtd[5], Dogs_Preco[5]);
			}
			if (Dogs_qtd[6] != 0) {
				printf("                                     %d        Refrigerante 300ml           R$%.2f\n", Dogs_qtd[6], Dogs_Preco[6]);
			}
			if (Dogs_qtd[7] != 0 ) {
				printf("                                     %d        Refrigerante 600ml           R$%.2f\n", Dogs_qtd[7], Dogs_Preco[7]);
			}
			printf("                                ============================================================\n");
			if (total2 >= 40 && total2 < 100) {
				printf("                                Desconto = R$%.2f\n", total2*0.10);
				total2 = total2 * 0.9;
				desconto = 1;
			}
			if (total2 >=100 ) {
				printf("                                Desconto = R$%.2f\n", total2*0.15);
				total2 = total2 * 0.85;
				desconto = 1;
			}
			printf("                                ============================================================\n");
			if (desconto != 0){
				printf("                                TOTAL SEM DESCONTO: R$ %.2f\n", total);
				printf("                                TOTAL COM DESCONTO: R$ %.2f\n", total2);
				printf("                                ============================================================\n");
				printf("                                Digite 1 para Voltar\n");
				printf("                                Digite 2 para Encerrar o atendimento\n");
				printf("                                Op��o: ");
				fflush(stdin);
				scanf("%d", &tmp);
			} else {
				printf("                                TOTAL: R$ %.2f\n", total);
				printf("                                ===========================================================\n");
				printf("                                Digite 1 para Voltar\n");
				printf("                                Digite 2 para Encerrar o atendimento\n");
				printf("                                Op��o: ");
				fflush(stdin);
				scanf("%d", &tmp);
			}
			if (tmp != 1) {
				novo = 1;
				tmp = 0;
				n_atendimento++;
			}
		}		
		if (op1 == 4) {
				sai = 1;
				break;	
		}
	}
}
