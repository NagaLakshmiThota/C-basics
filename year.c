#include<stdio.h>
main()
{
	int days,years,months;
	scanf("%d",&days);
	years=days/365;
	months=days%365;
	printf("%d year\n",years);
	printf("%d day",months);
}
