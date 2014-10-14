#include <stdio.h>
#include <stdlib.h>
char* removeDuplicate(char str[])//remove duplicate characters from a string,so that each character in a string is not repeating
{
    int i = 0,j;
    char ch;
    while((ch = str[i++] )!= '\0')
    {
        j = i;
        while(str[j] != '\0')
        {
            if(ch == str[j])
            {
                while(str[j]!='\0')
                str[j] = str[++j];
                 i--;
                break;
            }
            j++;
        }
    }
   return str;
}
int main(int argc, char *argv[]) {
char array[32];
strcpy(array,"ragssshuuu\n");
printf("%s",array);
char* result;
result=removeDuplicate(array);
printf("Result=%s\n",result);
	return 0;
}
