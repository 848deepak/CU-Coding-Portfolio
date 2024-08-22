//Following program illustrates the use of a null pointer:
#include <stdio.h>
int main()
{
	int *p = NULL; 	//null pointer
	printf("The value inside variable p is:\n%x",p);
	return 0;
}
//Following program illustrates the use of a void pointer:
#include <stdio.h>
int main()
{
void *p = NULL; 	//void pointer
printf("The size of pointer is:%d\n",sizeof(p));
return 0;
}

//Following program illustrates the use of wild pointer:
#include <stdio.h>
int main()
{
int *p; 	//wild pointer
printf("\n%d",*p);
return 0;
}


