#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char *argv[]) {

int *user_input;
int num_inputs=0;
printf("enter number of elements you want to scan\n");
scanf("%d",&num_inputs);

printf("Ready to read %d inputs\n",num_inputs);

user_input=(int*)malloc(sizeof(int)*num_inputs);

int i;
for(i=0;i<num_inputs;i++)
{
	printf("enter %d element\n",i);
	scanf("%d",(user_input+i));
}

printf("\n****************USER INPUT****************\n");
for(i=0;i<num_inputs;i++)
{
	printf(" %d element=%d\n",i,*(user_input+i));
}
int current_high=0;

for(i=0;i<num_inputs;i++)
{
	if(*(user_input+i)  >current_high)
	{
		current_high=*(user_input+i);
	}
}

int second_high=0;
for(i=0;i<num_inputs;i++)
{
	if(*(user_input+i)  >second_high)
	{
		if(*(user_input+i)!=current_high)
		second_high=*(user_input+i);
	}
}



printf("highest value=%d\n",current_high);
printf("second highest value=%d\n",second_high
);
	return 0;
}
