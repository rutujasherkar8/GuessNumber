//Write a C program for guessing the number Gain..
//Date:- 06 , September 2022

#include<stdio.h>
#include<stdio.h>
#include<time.h>
int main()
{
   //	int computer_num = 12;
    int computer_num;
	int user_num;
	
	//Generate A computer Random Number
	 
	srand(time(NULL));  //No Random Number Repeat
	computer_num = rand() % 10;
	
	printf("\n**************************************\n");
	printf("Enter a Number Between 0 to 10...\n\n");
	
    while(1)
    {
	    printf("Enter Your Guess Number: ");
	    scanf("%d",&user_num);
	
	    if(computer_num == user_num)
	    {
			printf("Congratulations!, You Guess Correct Number...!!\n\n");
			break;
	    }
	
		else if(computer_num > user_num)
		{
			printf("Please Enter Greater number...!\n\n");
		}
	
		else
		{
			printf("Please Enter Lower number...!\n\n");
		}
	}
}
