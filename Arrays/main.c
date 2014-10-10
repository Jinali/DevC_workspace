#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int *array;
int array_size,i=0;

printf("Enter the number of elements\n");
scanf("%d",&array_size);
array=(int*)malloc(sizeof(int)*array_size);
printf("Enter %d elements\n", array_size);
for(i=0;i<array_size;i++)
{
	scanf("%d",(array+i));
}

for(i=0;i<array_size;i++)
{
	printf("At %d element is %d\n",i,*(array+i));
}
///**************************END OF USER INPUT***************************************

int num, count=0;
printf("Enter the number to find the number of occurences\n");
scanf("%d",&num);
for(i=0;i<array_size;i++)
{
	if(array[i]==num)
	count++;
}
if(count%2==0)
printf("The number occurs even number of times\n");
else
printf("The number occurs odd number of times\n");









	return 0;
}
