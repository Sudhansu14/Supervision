#include<stdio.h>

main()
{
	FILE *p;
	
	char data [1000];
	
	p = fopen("File Handling.txt","a");
	
	if(p==NULL)
	{
      	printf("could not open file");
	}
	else
	{
		printf("Enter Any Value:-");
		
		gets(data);
		
		fputs(data,p);
		
		printf("Data Enter Successfully");
		
		fclose(p);
	}
	printf("\n-------------------------------------------------------\n");
	
	p = fopen("File Handling.txt","r");
	
	if(p==NULL)
	{
		printf("could not open file");
	}
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
		}
		
	}
}
