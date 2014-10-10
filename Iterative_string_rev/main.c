#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

char string[32];
printf("Enter the string\n");
scanf("%s",string);
printf("User Input=%s\n",string);
char rev[32];
int i=0,j=0,length=0;
while(string[length]!=0)
{
	length++;
}
printf("Length of the string is %d\n",length);
for(i=length-1;i>=0;i--)
{
	rev[j]=string[i];
	j++;
}
rev[j]=0;
printf("Reverse of the string is %s\n",rev);
	return 5;
}
