/*###############################################################################################


                          This code is written by Yugal Sharma
                    		          @yugal.sharmaa





##################################################################################################*/
// Unbeatable Stone Paper Scissor

#include<stdio.h>
#include<conio.h>

main(){
	printf("\n\tThe Unbeatable Stone,Paper,Scissor");
	int choice_1,choice_2;
	printf("\n\n\t1: Play the game");
	printf("\n\t2 :EXIT");
	printf("\n\n\tEnter your choice:\t");
	scanf("%d",&choice_1);
	while(1){
		switch(choice_1){
			case 1:
				system("cls");
				printf("\n\t1: STONE");
				printf("\n\t2: PAPER");
				printf("\n\t3: SCISSOR");
				printf("\n\n\t4: EXIT");
				printf("\n\n\tYour choice:\t");
				scanf("%d",&choice_2);
			switch(choice_2){
				case 1:
					system("cls");
					printf("\n\t##################################");
					printf("\n\t\tI choose PAPER");
					printf("\n\t##################################");
					getch();
					system("cls");
					break;
				case 2:
					system("cls");
					printf("\n\t##################################");
					printf("\n\t\tI choose SCISSOR");
					printf("\n\t##################################");
					getch();
					system("cls");
					break;
				case 3:
					system("cls");
					printf("\n\t##################################");
					printf("\n\t\tI choose STONE");
					printf("\n\t##################################");
					getch();
					system("cls");
					break;
				case 4:
					return 0;
				default:
					system("cls");
					printf("\n\t#########################################################");
					printf("\n\t\tDon't be a smart ASS, choose a desire option");
					printf("\n\t##########################################################");
					getch();
					system("cls");
					break;	
			}//Nested switch ends her	
			break;
			case 2:
				return 0;
				break;
			default:
				system("cls");
				printf("\n\t##############################################################");
				printf("\n\t\tDon't be a smart ASS, choose a desire option");
				printf("\n\t###############################################################");
				getch();
				system("cls");
				break;		
		}//switch ends here
	}//while ends here
}//main ends here
/*###############################################################################################


                          This code is written by Yugal Sharma
                    		          @yugal.sharmaa





##################################################################################################*/
