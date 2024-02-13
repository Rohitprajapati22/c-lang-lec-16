#include<stdio.h>

main()
{
	int i,sum=0;
	char name[20];
	
	printf("Enter your name :");
	scanf("%s",&name);
	
	for(i=0;name[i] != '\0';i++){
		printf("Ascii Value of %d is %c \n",name[i],name[i]);
		sum += name[i];
	}
	printf("sum is Ascii : %d",sum);
}
