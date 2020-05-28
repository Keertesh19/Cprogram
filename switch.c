#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
while(1)
{
	int mint, a, b, c, d, nam;
	char name[256];
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Please choose b/w 1, 2 & 3: ", name);
	scanf("%s", &mint);
	switch(mint)
	{
		case '1':
		    	       printf("Welcome %s, You choose %c. \nThis program is about printing the same digit you will enter. \n", name, mint);
		    	       printf("Enter a digit: ");
		    	       scanf("%d", &a);
		    	       printf("You entered %d. \nThank You! \n", a);
		break;
		case '2':
				printf("Welcome %s, You choose %c. \nThis program will tell you whether the number you entered is odd or even. \n", name, mint);
				printf("Enter a number: ");
				scanf("%d", &b);
				if(b%2==0)
				{
				printf("The entered number %d, is even.", b);
				}
				else
				{
				printf("The entered number %d, is odd.", b);
				}
				printf("\nThank You! \n");
		break;
		case '3':
				printf("Welcome %s, You choose %c. \nThis program will simply print K 10 times.\n", name, mint);
				for(c=1;c<=10;c++)
		    	        {
				printf("K \n");
				}
				printf("\nThank You! \n");
		break;
		default:
			        printf("Welcome %s, Value you enetered is out of range given.\n", name);
	}
			        printf("If you want to terminate then press 0 and if you want to continue press 1.");
			        printf("\nPlease choose b/w 1 & 0: ", nam);
			        scanf("%s", &nam);
		switch(nam)
	{
		case '1':
			printf("Enter to continue....");
			getch();
			system("cls");
			printf("Enter your name: ");
			scanf("%s", &name);
			printf("Please choose b/w 1, 2 & 3: ", name);
			scanf("%s", &mint);
					switch(mint)
					{
					case '1':
		        		       printf("Welcome %s, You choose %c. \nThis program is about printing the same digit you will enter. \n", name, mint);
		    			       printf("Enter a digit: ");
		    			       scanf("%d", &a);
		    			       printf("You entered %d. \nThank You! \n", a);
					break;
					case '2':
						printf("Welcome %s, You choose %c. \nThis program will tell you whether the number you entered is odd or even. \n", name, mint);
						printf("Enter a number: ");
						scanf("%d", &b);
						if(b%2==0)
						{
						printf("The entered number %d, is even.", b);
						}
						else
						{
						printf("The entered number %d, is odd.", b);
						}
						printf("\nThank You! \n");
					break;
					case '3':
						printf("Welcome %s, You choose %c. \nThis program will simply print K 10 times.\n", name, mint);
						for(c=1;c<=10;c++)
		    			        {
						printf("K \n");
						}
						printf("\nThank You! \n");
					break;
					default:
					        printf("Welcome %s, Value you enetered is out of range given.\n", name);
					}	
		break;
		case '0':
					printf("Your program is terminated.");
					return 0;
		break;
		}
}
getch();
return 0;
}
