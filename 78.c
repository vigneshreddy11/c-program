#include<stdio.h>
int main(){
	int x,n;
	int op;
	printf("1 addition\n 2 subtraction\n 3 multiplication\n 4 division\n");
	printf("enter the values of x, n:");
	scanf("%d%d",&x, &n);
	printf("enter your choice");
	scanf("%d",&op);
	switch (op)
	{ case 1:
		printf("sum of %d and %d is :%d",x,n,x+n);
		break;
		case 2:
			printf("difference of %d and %d is:%d",x,n,x-n);
			break;
			case 3:
				printf("multiplication of %d and%d is;%d",x,n,x*n);
				break;
				case 4:
					printf("division of %d and%d is;%d",x,n,x/n);
					break;
					
	}
}
