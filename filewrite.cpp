#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int num;
char msg[50];
FILE *fptr1;
FILE *fptr2;
fptr1 = fopen("summers.txt","w");
fptr2 = fopen("winters.txt","w");//creating a file

/*if(fptr == NULL)
{
printf("Error opening file!");
exit(1);
}*/

printf("Enter num: "); //terminal
scanf("%d",&num);

printf("Enter greetings: ");
scanf("%s",msg);

fprintf(fptr2,"%d\n",num);
fprintf(fptr1,"%d\n",num);
fprintf(fptr1,"%s",msg);
fclose(fptr1);
fclose(fptr2);

return 0;
}
