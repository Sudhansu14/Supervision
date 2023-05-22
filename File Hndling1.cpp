#include<stdio.h>

main()
{
	FILE *p;
	
	char data [1000];
	
	p = fopen("File Handling.txt","r");
	
	if(p==NULL)
	{
      	printf("could not open file");
	}
	else
	{
		printf("file open successful");
		
		printf("\n----------------\n");
		
		while(fgets(data,50,p)!=NULL)
		{
		 printf("%s",data);
		}
		fclose(p);
	}
	
}
