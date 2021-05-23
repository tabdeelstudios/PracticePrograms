#include<stdio.h>
int main()
{	
	int choice = 0;
	int count = 0;
	int i, sum=0;
	int ordered_items[10];
	int ordered_items_prices[10];
	//1. Greet the user and ask them for their name
	char username[10];
	printf("Welcome to EatStop!\nWhat do we call you? : ");
	scanf("%s", &username);
	printf("\nHello, %s!", username);
	//2. Show a menu which displays food options that can be ordered
	printf("\n----------------------------------\nWhat would you like to have?\n");
	do{
		printf("1. Chole Bhature (Rs. 120)\n");	
		printf("2. Pasta (Rs. 210)\n");	
		printf("3. Pizza (Rs. 350)\n");	
		printf("4. Maggi (Rs. 50)\n");
		printf("5. Show the bill\n");
		printf("6. Exit\n");
		printf("Please select : ");
		scanf("%d", &choice);
		printf("\nYou chose : %d", choice);
		//3. Server the food and add to bill
		switch(choice)
		{
			case 1 : printf("\nChole Bhature coming up!\n");
					 ordered_items[count] = choice;
					 ordered_items_prices[count] = 120;
					 break;
			case 2 : printf("\nPasta coming up!\n");
					 ordered_items[count] = choice;
					 ordered_items_prices[count] = 210;
					 break;
			case 3 : printf("\nPizza coming up!\n");
					 ordered_items[count] = choice;
					 ordered_items_prices[count] = 350;
					 break;
			case 4 : printf("\nMaggi coming up!\n");
					 ordered_items[count] = choice;
					 ordered_items_prices[count] = 50;
					 break;
					 //4. Display the bill
			case 5 : printf("\nYour bill : \n------------\n");
					 printf("Choice\t|\tPrice\n-------------\n");
					 for(i=0;i<count;i++)
					 {
					 	printf("%d\t|\t%d\n", ordered_items[i],ordered_items_prices[i]);
					 	sum+=ordered_items_prices[i];
					 }
					 printf("\n\tTOTAL BILL : %d\n\n\n\n", sum);
					 break;
			case 6 : exit(1);
			default: printf("\nSomething went wrong!\n");
		}
		count++;
	}while(choice>0 && choice<6);
	
}

//5. Exit

