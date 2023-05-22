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
		
		fputs("\n",p);
		
		fputs(data,p);
		
		printf("Data Enter Successfully");
		
		fclose(p);
	}
}
