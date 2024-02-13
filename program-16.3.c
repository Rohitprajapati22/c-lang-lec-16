#include<stdio.h>

main()
{
	int i;
	char name[20]="HelLO WoRd";
	printf("%s\n",name);
	
	for(i=0;name[i] != '\0';i++){
		
		if(name[i]>='A' && name[i]<='Z'){
		name[i]	=name[i] + 32;	
		}
		else if(name[i]>='a' && name[i]<='z'){
			name[i]	=name[i] - 32;
		}
		
	}
	printf("\nToggle case string : %s",name);
	
}
