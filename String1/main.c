// Find the middle element of the string by interating the string only once from front to end

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char buffer[32];
	printf("enter the sting\n");
	scanf("%s",&buffer[0]);
	printf("User Input=%s\n",buffer);
	int i=0;
	int middle_index=0;
	while(buffer[i]!=0)
	{
		if(i%2==1)
		middle_index++;
		
		i++;
	}
	int string_length;
	string_length=i;
	printf("string lenght=%d",string_length);
	printf("middle element=%c\n",buffer[middle_index]);
	return 0;
}
