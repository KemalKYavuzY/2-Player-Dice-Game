// 2 Player Dice Game by Kemal Yavuz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int sumplayer1 = 0;
	int sumplayer2 = 0;
	int dice1 = 0;
	int dice2 = 0;
	int userInput;
	int LuckyNumber;
	int i;
	
	printf("What is your Lucky Number? ");
	scanf ("%d", &LuckyNumber);
	
	while (userInput != -99){
		dice1 = (rand() % 6) + 1;
	    dice2 = (rand() % 6) + 1;
		sumplayer1 = dice1 + dice2;
		
		for (i = 0; i < 1; i++){
			srand(LuckyNumber);
			dice1 = (rand() % 6) + 1;
			dice2 = (rand() % 6) + 1;
			sumplayer1 = dice1 + dice2;
		}
		
		printf("Player 1 Dice: %d - %d\n", dice1, dice2);
		printf("Player 1 Sum: %d\n", sumplayer1);
		
		srand(time(NULL));
		dice1 = (rand() % 6) + 1;
	    dice2 = (rand() % 6) + 1;
		sumplayer2 = dice1 + dice2;
		
		printf("Player 2 Dice: %d - %d\n", dice1, dice2);
		printf("Player 2 Sum: %d\n", sumplayer2);
		
		if (sumplayer1 > sumplayer2){
			printf("Player 1 wins!!!\n");
		} else if (sumplayer1 < sumplayer2){
			printf("Player 2 wins!!!\n");
		} else if (sumplayer1 == sumplayer2){
			printf("No one is lucky today! It's a tie.\n");
		}
		
		printf("Continue? (1(yes) -99(no))");
		scanf(" %d", &userInput);
		printf("\n");
	}
	
	return 0;
}