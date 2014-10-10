#include <stdio.h>
#include <stdlib.h>

void main() {
	int n,temp,rev=0,rem;
	printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
   { 
	rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
   }
   if(rev==n)
   printf("Number is palindrome\n");
   else
   printf("Number is not palindrome\n");
}

