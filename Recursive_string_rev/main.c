#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rev_str(char* s);
 void find_len(char* s);
int main(int argc, char *argv[]) {
	char string[32];
	printf("Enter the string\n");
	scanf("%s",string);
	printf("User input = %s\n",string);
	printf("String length = %d\n",strlen(string));
	find_len(string);
	rev_str(string);
	return 0;
}
void rev_str(char *s)
{
    if(*s != '\0')
	 rev_str(s+1);
         
printf("%c",*s);
}
 void find_len(char* s)
 {
static int length=0;
 while(*s!=0)
 	{
 	length++;
	 s++;	
 	}
 	
 	printf("length=%d\n",length);
 }
