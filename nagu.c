#include<stdio.h>
main()
{
	int l,b,area,perimeter;
	printf("enter l and b");
	scanf("%d %d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area=%d,perimeter=%d",area,perimeter);
}
