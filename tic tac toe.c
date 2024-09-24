#include <stdio.h>

void view(int matrix[4][4]){
	
	for(int i = 0; i <= 3; i++){
		
		if(i == 0){
			
			printf("\n");
			
		}else{
				
			printf("Row %d|", i);
			
		}
		
		for(int j = 0; j <= 3; j++){
			
			if(i == 0 && j == 0){
				
				printf("%5s|%2s", "", "");
				
			}
			
			if(i == 0 && j != 0){
				
				if(j >= 2){
					
					printf("%2s Col %d|"," ", j);
					
				}else{
					
					printf("Col %2d|", j);
				}
				
				continue;
			}
			
			if(i != 0 && j != 0){
				
				printf("%8d|", matrix[i][j]);
		
			}
			
		}
	
		printf("\n");
	}
}

int check(int matrix[4][4], int r, int c){
	
	int c1,c2,c3,c4,c5,c6,c7,c8;
	
	if(r == 1 && c == 1){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = r; i < 4; i++){
			
			for(int j = c; j < 4; j++){
				
				if(i == j){
					
					if(matrix[i][j] == 1){
				
						c1++;
				
						if(c1 == 3){
					
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
				
					}else if(matrix[i][j] == 2){
				
						c2++;
				
						if(c2 == 3){
					
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = r; i < 4; i++){
			
			for(int j = c; j < 4; j++){ 
			
				if(i == 1){
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}	
			}
		}
		
		for(int i = r; i < 4; i++){
			
			for(int j = c; j < 4; j++){
				
				if(j == 1){
					
					if(matrix[i][j] == 1){
						
						c5++;
						
						if(c5 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
			
						}
						
					}else if(matrix[i][j] == 2){
						
						c6++;
						
						if(c5 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
	}else if(r == 1 && c == 3){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = r; i < 4; i++){
			
			for(int j = c; j >= 1; j--){
				
				if(i == 1 && j == 3 || i == 2 && j == 2 || i == 3 && j == 1){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
				
			}
		}
		
		for(int i = r; i < 4; i++){
			
			for(int j = c; j >= 1; j--){
				
				if(j == 3){
				
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
							
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
							
						}
					}
				}
			}
		}
		
		for(int i = r; i < 4; i++){
			
			for(int j = c; j >= 1; j--){
				
				if(i == 1){
					
					if(matrix[i][j] == 1){
						
						c5++;
						
						if(c5 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c6++;
						
						if(c6 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}	
				}
			}
		}
		
	}else if(r == 3 && c == 1){
		
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		
		for(int i = r; i >= 1; i--){
			
			for(int j = c; j < 4; j++){
				
				if(i == 3 && j == 1 || i == 2 && j == 2 || i == 1 && j == 3){
					
					if(matrix[i][j] == 1){
						
						c1++;
					
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for (int i = r; i >= 1; i--){
			
			for(int j = c; j < 4; j++){
				
				if(j == 1){
					
					if(matrix[i][j] == 1){
						
						c3++;
					
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
							
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 3; i >= 1; i--){
			
			for(int j = 1; j < 4; j++){
				
				if(i == 3){
					
					if(matrix[i][j] == 1){
						
						c5++;
						
						if(c5 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c6++;
						
						if(c6 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
					
				}
			}
		}
		
	}else if(r == 3 && c == 3){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = 3; i >= 1; i--){
			
			for(int j = 3; j >= 1; j--){
				
				if(i == j){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 3; i >= 1; i--){
			
			for(int j = 3; j >= 1; j--){
				
				if(i == 3){
					
					if(matrix[i][j] == 1){
						
						c3++;

						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(j == 3){
					
					if(matrix[i][j] == 1){
						
						c5++;
						
						if(c5 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c6++;
						
						if(c6 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					} 
				}
			}
		}
		
	}else if(r == 2 && c == 1){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(i == 2){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(j == 1){
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
							
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		
	}else if(r == 2 && c == 3){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 3; j >= 1; j--){
				
				if(i == 2){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 3; j >= 1; j--){
				
				if(j == 3){
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
							
						}
						
					}else if(matrix[i][j] == 1){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
	}else if(r == 1 && c == 2){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(i == 1){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(j == 2){
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		
	}else if(r == 3 && c == 2){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		for(int i = 3; i >= 1; i--){
			
			for(int j = 3; j >= 1; j--){
				
				if(i == 3){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
							
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(j == 2){
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
	}else if(r == 2 && c == 2){
		
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		c5 = 0;
		c6 = 0;
		c7 = 0;
		c8 = 0;
		
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(i == j){
					
					if(matrix[i][j] == 1){
						
						c1++;
						
						if(c1 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c2++;
						
						if(c2 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}	
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(i == 3 && j == 1 || i == 2 && j == 2 || i == 1 && j == 3){
					
					if(matrix[i][j] == 1){
						
						c3++;
						
						if(c3 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c4++;
						
						if(c4 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(i == 2){
					
					if(matrix[i][j] == 1){
						
						c5++;
						
						if(c5 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c6++;
						
						if(c6 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
		
		for(int i = 1; i < 4; i++){
			
			for(int j = 1; j < 4; j++){
				
				if(j == 2){
					
					if(matrix[i][j] == 1){
						
						c7++;
						
						if(c7 == 3){
							
							printf("strike\n");
							printf("player 1 won\n");
							return 1;
							break;
						}
						
					}else if(matrix[i][j] == 2){
						
						c8++;
						
						if(c8 == 3){
							
							printf("strike\n");
							printf("player 2 won\n");
							return 1;
							break;
						}
					}
				}
			}
		}
	}
			
}


int main(){
	
	int r, c;
	int matrix[4][4] = {{}, {}};
	int t = 1;
	int cek;
	
	printf("--- Tic Tac Toe----");
	printf("\n");
	printf("How to play : \n");
	printf("1. Enter the row number (1/2/3)\n");
	printf("2. Enter the column number (1/2/3)\n");
	printf("3. Player's 1 square will be marked by number 1\n");
	printf("4. Player's 2 square will be marked by number 2\n");
	printf("Enjoy the game~");
	printf("\n");
	
	do{
		
		view(matrix);
		
		do{
				
				if(t % 2 == 1){
					
					printf("player's 1 turn\n");
					
				}else{
					
					printf("player's 2 turn\n");
				}
				
				printf("enter row and column position: ");
				scanf("%d %d", &r, &c);
					
				if(matrix[r][c] == 0 && t % 2 == 1){
						
					matrix[r][c] = 1;
					printf("next player's turn\n");
					t++;
					break;
						
				}else if(matrix[r][c] == 0 && t % 2 == 0){
						
					matrix[r][c] = 2;
					printf("next player's turn\n");
					t++;
					break;
						
				}else if(matrix[r][c] != 0){
						
					printf("you can't park there sir\n");
					
				}
					
			}while(matrix[r][c] != 0);
			
			cek = check(matrix, r, c);
			
			if(t == 10){
				
				printf("Draw\n");
				break;
				
			}else if(cek == 1){
				
				break;
			}
			
	}while(cek != 1 || t != 10);
	
	view(matrix);
	
	return 0;
}
