#include<stdio.h>
int main()
{
	int a[10];
	FILE *ptr;
	ptr = fopen("numbers.txt","w");
	printf("Enter 10 numbers: ");
	for(int i=0;i<10;i++)
	{
		scanf("%d ",&a[i]);
		fprintf(ptr," %d ",a[i]);
	}
	fclose(ptr);
	
	ptr = fopen("numbers.txt", "r");
	if(ptr == NULL)
	{
		printf("File not found");
	}
	for(int i;i<=10;i++)
	{
		fscanf(ptr,"%d",&a[i]);
		printf("%d\n", a[i] );
	}
	fclose(ptr);
	return 0;
}
