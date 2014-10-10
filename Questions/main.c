#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define NUMBER_OF_QUESTIONS 2
int get_random(int max_val)
{
srand(rand());
int i,j;
i=rand()+rand();
j=i%max_val;
if(j==0)
j=1;
return(j);
}

void main() {
int r;
int user_answer[NUMBER_OF_QUESTIONS];
int correct_answers[NUMBER_OF_QUESTIONS];
int i[NUMBER_OF_QUESTIONS];
int k[NUMBER_OF_QUESTIONS];
for(r=0;r<NUMBER_OF_QUESTIONS;r++)
{
i[r] = get_random(10);
k[r] = get_random(9);
printf("%d+%d=\n",i[r],k[r]);
printf("enter your answer\t");

scanf("%d",&user_answer[r]);
fflush(stdin);
correct_answers[r]=i[r]+k[r]; 
}


for(r=0;r<NUMBER_OF_QUESTIONS;r++)
{
	printf("\n%d. %d+%d=%d",r,i[r],k[r],user_answer[r]);
	if(user_answer[r]==correct_answers[r])
	printf(" your answer is correct \n");
	else
	printf("******correct answer is %d********\n",correct_answers[r]);
	
}


}
