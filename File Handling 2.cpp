#include<stdio.h>

main()
{
	FILE *p;
	
	char data [1000];
	
	p = fopen("File Handling.txt","w");
	
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
}
