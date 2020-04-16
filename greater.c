#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter four number");
	scanf("%d""%d""%d""%d",&a,&b,&c,&d);
	printf("Greater number is %d",(a>b&&a>c&&a>d)?a:(b>c&&b>d)?b:(c>d?c:d));
	getch();
}
