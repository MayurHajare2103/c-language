#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr=NULL;
	int i;

	ptr=(int*)malloc(2*sizeof(int));
	printf("ENTER THE ELEMENTS:");
	for(i=0;i<2;++i){
		scanf("%d", &ptr[i]);
	}
	printf("Array elements are \n");
	for(i=0;i<2;++i)
	{		
		printf("%d,", ptr[i]);
	}
	free(ptr);
	return 0;
}