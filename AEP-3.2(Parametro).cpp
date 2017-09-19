#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int adicionar (int op3, int qtd2) {
	
	static float dog_simples = 8.00;
	static float dog_duplo = 9.00;
	static float dog_bacon = 12.00;
	static float dog_ovo = 11.00;
	static float dog_frango = 12.50;
	static float dog_monstro = 14.50;
	static float refri_300 = 5.00;
	static float refri_600 = 7.50;
}

int main () {
	int sai = 0;
	int simples = 0;
	int duplo = 0;
	int bacon = 0;
	int ovo = 0;
	int frango = 0;
	int monstro = 0;
	int refri300 = 0;
	int refri600 = 0;
	int volt = 0;
	float total = 0;
	while (sai == 0) {
		volt = 0;
		int op1 = 0;
		setlocale(LC_ALL, "Portuguese");
		system("cls");
		printf("                                |============== POI POI TEY TEY===================|\n");
		printf("                                |                                                 |\n");
		printf("                                | 10 %% DE DESCONTO NOS PEDIDOS ACIMA DE R$40,00   |\n");
		printf("                                | 15 %% DE DESCONTO NOS PEDIDOS ACIMA DE R$100,00  |\n");
		printf("                                |                                                 |\n");
		printf("                                | 1- Adicionar Pedidos                            |\n");
		printf("                                | 2- Cancelar Pedidos                             |\n");
		printf("                                | 3- Fechar atendimento                           |\n");
		printf("                                | 4- Sair                                         |\n");
		printf("                                |                                                 |\n");
		printf("                                |=================================================|\n");
		scanf("%d", &op1);
		switch (op1) {
			case 1: 
			while (volt == 0) {
				int op2 = 0;
				int qtd = 0;
				system("cls");
				printf("                                |==================================|\n");
				printf("                                |1- Cachorrão Simples - R$8,00     |\n");
				printf("                                |2- Cachorrão Duplo - R$9,00       |\n");
				printf("                                |3- Cachorrão Bacon - R$12,00      |\n");
				printf("                                |4- Cachorrão Ovo - R$11,00        |\n");
				printf("                                |5- Cachorrão Frango - R$12,50     |\n");
				printf("                                |6- Cachorrão Monstro - R$14,50    |\n");
				printf("                                |7- Refrigerante 300ml - R$5,00    |\n");
				printf("                                |8- Refrigerante 600ml - R$7,50    |\n");
				printf("                                |9- Voltar                         |\n");
				printf("                                |==================================|\n");
				scanf("%d", &op2);
				system("cls");
				switch (op2) {
					case 1: 
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + ( dog_simples * qtd);
						printf(" %f / %d / %f ", total, qtd, dog_simples);
						simples += qtd;
						continue;
					case 2:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (dog_duplo* qtd);
						duplo+= qtd;
						continue;
					case 3:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (dog_bacon* qtd);
						bacon+= qtd;
						continue;
					case 4:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (dog_ovo * qtd);
						ovo+= qtd;
						continue;
					case 5:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (dog_frango* qtd);
						frango+= qtd;
						continue;
					case 6:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (dog_monstro* qtd);
						monstro+= qtd;
						continue;
					case 7:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (refri_300* qtd);
						refri300 += qtd;
						continue;
					case 8: 
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total + (refri_600 * qtd);
						refri600+= qtd;
						continue;
					case 9:
						volt = 1;
						continue;						
				}
				break;
			}
			
			case 2:
				while (volt == 0) {
				int op2 = 0;
				int qtd = 0;
				system("cls");
				printf("CÓDIGO=====PRODUTO=========QUANTIDADE\n");
				printf("   1    Cachorrão Simples     %d\n", simples);
				printf("   2    Cachorrão Duplo       %d\n", duplo);
				printf("   3    Cachorrão Bacon       %d\n", bacon);
				printf("   4    Cachorrão Ovo         %d\n", ovo);
				printf("   5    Cachorrão Frango      %d\n", frango);
				printf("   6    Cachorrão Monstro     %d\n", monstro);
				printf("   7    Refrigerante 300ml    %d\n", refri300);
				printf("   8    Refrigerante 600ml    %d\n", refri600);
				printf("=====================================\n");
				printf("   9 - Voltar\n");
				scanf("%d", &op2);
				system("cls");
				switch (op2) {
					case 1: 
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - ( dog_simples * qtd);
						printf(" %f / %d / %f ", total, qtd, dog_simples);
						simples -= qtd;
						continue;
					case 2:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (dog_duplo* qtd);
						duplo-= qtd;
						continue;
					case 3:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (dog_bacon* qtd);
						bacon-= qtd;
						continue;
					case 4:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (dog_ovo * qtd);
						ovo-= qtd;
						continue;
					case 5:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (dog_frango* qtd);
						frango-= qtd;
						continue;
					case 6:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (dog_monstro* qtd);
						monstro-= qtd;
						continue;
					case 7:
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (refri_300* qtd);
						refri300 -= qtd;
						continue;
					case 8: 
						printf("Digite a quantidade: \n");
						scanf("%d", &qtd);
						total = total - (refri_600* qtd);
						refri600-= qtd;
						continue;
					case 9:
						volt = 1;
						continue;						
				}
				break;
			}
				break;
			
			case 3:
				system("cls");
				printf("|QUANTIDADE==========PRODUTO==================PREÇO|\n");
				if (simples != 0) {
					printf("|     %d        Cachorrão Simples            R$%.2f|\n", simples, (dog_simples* simples));
				}
				if (duplo != 0 ){
					printf("|     %d        Cachorrão Duplo              R$%.2f|\n", duplo,(dog_duplo * duplo));
				}
				if (bacon != 0 ) {	
					printf("|     %d        Cachorrão Bacon              R$%.2f|\n", bacon, (dog_bacon * bacon));
				}
				if (ovo != 0 ) {
					printf("|     %d        Cachorrão Ovo                R$%.2f|\n", ovo, (dog_ovo * ovo));	
				}
				if (frango != 0) {
					printf("|     %d        Cachorrão Frango             R$%.2f|\n", frango, (dog_frango * frango));
				}
				if (monstro != 0) {
					printf("|     %d        Cachorrão Monstro            R$%.2f|\n", monstro, (dog_monstro * monstro));
				}
				if (refri300 != 0) {
					printf("|     %d        Refrigerante 300ml           R$%.2f|\n", refri300, (refri_300 * refri300));
				}
				if (refri600 != 0 ) {
					printf("|     %d        Refrigerante 600ml           R$%.2f|\n", refri600, (refri_600 * refri600));
				}
				printf("\n");
				if (total >= 40 && total < 100) {
					printf("Desconto = R$%.2f\n", total*0.10);
				}
				if (total >=100 ) {
					printf("Desconto = R$%.2f\n", total*0.15);
				}
				if (total >= 40.0 && total < 100.0) {
					total = total * 0.9;
				}
				if (total >= 100.0 ) {
					total = total * 0.85;
				}
				printf("\n");
				printf("total: R$ %.2f\n", total);
				system("pause");
				break;	 	
			case 4: 
				sai = 1;
				break;	
		}
	}
}
