#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void addition();
void subtraction();
void multiplication();
void division();
int main()
{
	int i;
	int choice;
	printf("\t\t\tMENTAL_MATHS\n\n\n");
	printf("\t\t\tWELCOME !!\n\n");
	printf("Firstly,Enter Your Choice for given options:\n\n");
	printf("1.Addition\n\n2.Subtraction\n\n3.Multiplication\n\n4.Division\n\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("You Chose Addition\n");
			addition();
			break;
		case 2:
			printf("You Chose Subtraction\n");
			subtraction();
			break;
		case 3:
			printf("You Chose Multiplication\n");
			multiplication();
			break;
		case 4:
			printf("You Chose Division\n");
			division();
			break;
		default:
			printf("Enter Correct Choice\n");
			exit(0);
	}
	return 0;
}
void addition()
{
	int i,correct=0;
	int incorrect=0;
	int response;
	printf("Please Enter Number of Problems You Would Wish to Try:");
	scanf("%d",&response);
	if(response==0)
	{
		printf("\n Thanks for Playing....");
		exit(0);
	}
	for(i=0;i<response;i++)
	{
		float k=0;
		srand(time(0));
		int a=rand() % 12;
		int b=rand() % 12;
		printf("\n %d + %d = ?\n",a,b);
		scanf("%f",&k);
		if((a+b)==k){
			printf("\n Congratulations You are Correct !\n");
			correct++;
		}
		else{
			printf("Sorry You Were Incorrect!\n");
			printf("The Correct answer is %d\n",a+b);
			incorrect++;
		}
	}
	printf("Your Results :\n\n");
	printf("No. of Incorrect Answers :%d\n",incorrect);
	printf("No. of Correct Answers : %d\n",correct);
	if(correct>incorrect){
		printf("You Passed the Test!\nGood Work!\n\n");
	}
	else{
		printf("You didn't pass!\n You need more work!\n\n");
	}
}
void subtraction()
{
	int i,correct=0;
	int incorrect=0;
	int response;
	printf("Please Enter Number of Problems You Would Wish to Try:");
	scanf("%d",&response);
	if(response==0)
	{
		printf("\n Thanks for Playing....");
		exit(0);
	}
	for(i=0;i<response;i++)
	{
		float k=0;
		srand(time(0));
		int a=rand() % 12;
		int b=rand() % 12;
		printf("\n %d - %d = ?\n",a,b);
		scanf("%f",&k);
		if((a-b)==k){
			printf("\n Congratulations You are Correct !\n");
			correct++;
		}
		else{
			printf("Sorry You Were Incorrect!\nThe Correct answer is %d",a-b);
			incorrect++;
		}
	}
	printf("Your Results :\n\n");
	printf("No. of Incorrect Answers :%d\n",incorrect);
	printf("No. of Correct Answers : %d\n",correct);
	if(correct>incorrect){
		printf("You Passed the Test!\nGood Work!\n\n");
	}
	else{
		printf("You didn't pass!\n You need more work!\n\n");
	}
}
void multiplication()
{
	int i,correct=0;
	int incorrect=0;
	int response;
	printf("Please Enter Number of Problems You Would Wish to Try:");
	scanf("%d",&response);
	if(response==0)
	{
		printf("\n Thanks for Playing....");
		exit(0);
	}
	for(i=0;i<response;i++)
	{
		float k=0;
		srand(time(0));
		int a=rand() % 12;
		int b=rand() % 12;
		printf("\n %d + %d = ?\n",a,b);
		scanf("%f",&k);
		if((a*b)==k){
			printf("\n Congratulations You are Correct !\n");
			correct++;
		}
		else{
			printf("Sorry You Were Incorrect!\nThe Correct answer is %d",a*b);
			incorrect++;
		}
	}
	printf("Your Results :\n\n");
	printf("No. of Incorrect Answers :%d\n",incorrect);
	printf("No. of Correct Answers : %d\n",correct);
	if(correct>incorrect){
		printf("You Passed the Test!\nGood Work!\n\n");
	}
	else{
		printf("You didn't pass!\n You need more work!\n\n");
	}
}
void division()
{
	int i,correct=0;
	int incorrect=0;
	int response;
	printf("Please Enter Number of Problems You Would Wish to Try:");
	scanf("%d",&response);
	if(response==0)
	{
		printf("\n Thanks for Playing....");
		exit(0);
	}
	for(i=0;i<response;i++)
	{
		int k=0;
		int upper=12;
		int lower=1;
		srand(time(0));
		int a=rand() % 12;
		int b;
		b=rand()%(upper-lower+1)+lower;
		printf("\n %d / %d = ?\n",a,b);
		scanf("%d",&k);
		if((a/b)==k){
			printf("\n Congratulations You are Correct !\n");
			printf("And its Remainder is %d",a%b);
			correct++;
		}
		else{
			printf("Sorry You Were Incorrect!\nThe Correct answer is %d with remainder %d",a/b,a%b);
			incorrect++;
		}
	}
	printf("Your Results :\n\n");
	printf("No. of Incorrect Answers :%d\n",incorrect);
	printf("No. of Correct Answers : %d\n",correct);
	if(correct>incorrect){
		printf("You Passed the Test!\nGood Work!\n\n");
	}
	else{
		printf("You didn't pass!\n You need more work!\n\n");
	}
}
