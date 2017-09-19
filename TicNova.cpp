#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int m1 [10][10];
	char m2 [10][10]; 
	int cliente [4];
	int inicio = 5;
	int n = 1;
	int Via_Aerea [7];
	
	//Criação da matriz como máscara
	for (int x = 0; x<=9; x++) {
		for (int y = 0; y<=9; y++) {
			m2 [x][y] = '*';
		}
				m2[0][4] = 'D';
				m1[0][4] = 111;	
	}
	//Local das Vias aereas proibidas
	for (int x = 1; x<=7; x++){
		printf("VIAS");
		scanf("%d", &Via_Aerea [x]);
	}
	
	//Criação da matriz principal(utilizavel)
	for (int x = 0; x<=9; x++){
		for (int y = 0; y<=9; y++){
			m1 [x][y] = n;
			n++;
			
		}
	} 
	//Local dos clientes
	for (int x = 0; x<=3; x++){
		printf("Cliente");
		scanf("%d", &cliente [x]);
	}
	
	// Clientes escolhidos aleatoriamente
	for (int z = 0; z <= 9; z++){
		for (int y = 0; y<=9; y++){ 
			for (int x = 0; x<=3; x++){
				if(cliente[x] == m1[z][y] ){
				   m2[z][y] = 'C';
				}
			}
		}
	}
	// Vias aereas proibidas
	for (int z = 0; z <= 9; z++){
		for (int y = 0; y<=9; y++){ 
			for (int x = 1; x<=7; x++){
				if(Via_Aerea[x] == m1[z][y] ){
				   m2[z][y] = 'X';
				}
			}
		}
	}
	
	//Melhor trajeto
	int Maior [100];
	int DroneX = 0;
	int DroneY = 4;
	int L_Drone = 0;
	int lin_B = L_Drone + 1;
	int lin_A = L_Drone - 1;
	int L_Acima = lin_A;
	int L_Abaixo = lin_B;
	int R_ClienteX[100];
	int R_ClienteY [100];
	int Atendidos = 0;
	int tmp1 = 0;
	int tmp2 = 0;
	while (Atendidos < 7) {
		for (int x = DroneX; x <= DroneX; x++) {
			for (int y = 0; y <= 9; y++) {
				if (m2[x][y] == 'C') {
					R_ClienteX[x] = x;
					R_ClienteY[tmp1] = y;
					tmp1++;
				}
			}
			for (int z = 0; z <= tmp1 ; z++) {
					if (R_ClienteY[z] > DroneY) {
						Maior[tmp2] = 1;
					} else {
						Maior[tmp2] = 0;
					}
					tmp2++;
				}
			for (int z = 0; z<= tmp1; z++) {
				if (Maior[z] == 1) {
					for (int x = DroneX; x <= DroneX ; x++) {
						for (int y = DroneY+1; y < R_ClienteY[z]; y++) {
							m2[x][y] = '-';
						}
					}
				}
				if (Maior[z] == 0) {
					for (int x = DroneX; x <= DroneX ; x++) {
						for (int y = DroneY - 1 ; y > R_ClienteY[z] +1; y = y - 1) {
							m2[x][y] = '-';
						}	
					}
				}
			}
		}
		Atendidos = 7;
	}
	
	
	for (int x = 0; x<=9; x++){
		for (int y = 0; y<=9; y++){
			printf(" %c ", m2[x][y]);
		}
		printf("\n");
	}
	for(int x = 1; x<=4;x++){
		printf(" %d  ", cliente[x]);
	}
	printf("\n");
	system("pause");
	return 0;
}
