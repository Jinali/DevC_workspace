#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[5][5];
	int i=0,j=0;
	char path[9]={'0'};
	char element='a';
	char source,destination;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		
		array[i][j]=element;
		element++;
	}
	printf("\n************Map********************\n");
	
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		printf("%c ",array[i][j]);
	}
	printf("\n");
	}

		printf("\n************Map End *************\n");
	printf("Enter source\n");
	scanf("%c",&source);
	printf("Source=%c\n",source);
	fflush(stdin);
	printf("Enter destination\n");
	scanf("%c",&destination);
	printf("destination=%c\n",destination);
	
	
	
	int distance=0;
	int sc,sr; //sc = source column, sr = source row
	int dc,dr; ////dc = destination column, dr = destination row
	sr=(source-'a')/5;
	sc=(source-'a')%5;
	
	dr=(destination-'a')/5;
	dc=(destination-'a')%5 ;
	
	printf("\n (sr,sc) (%d,%d)  map element=%c \n",sr,sc,array[sr][sc]);
	
	printf("\n (dr,dc) (%d,%d)   map element=%c \n",dr,dc,array[dr][dc]);
	
	if((sr-dr)<0)
	distance+=-1*(sr-dr);
	else
	distance+=(sr-dr);
	
	if((sc-dc)<0)
	distance+=-1*(sc-dc);
	else
	distance+=(sc-dc);
	j=0;
	printf("\nDistance %d\n",distance);
	if(dc>sc)
	{
		for(i=sc;i<=dc;i++)
		{
		path[j]=array[sr][i];
		j++;	
		}

	}
	else
	{
		for(i=sc;i>=dc;i--)
		{
		path[j]=array[sr][i];
		j++;
		}
	
	}
	
	
		if(dr>sr)
	{
		for(i=sr+1;i<=dr;i++)
		{
		path[j]=array[i][dc];
		j++;	
		}

	}
	else
	{
		for(i=sr+1;i>=dr;i--)
		{
		path[j]=array[i][dr];
		j++;
		}
	
	}
	printf("\n*********************Path************************\n");
	for(i=0;i<8;i++)
	{
		printf("%c ",path[i]);
	}
	return 0;
}
