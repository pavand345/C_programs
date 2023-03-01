#include<stdio.h>
int main()
{
	int data,bit;
	scanf("%d",&data);
	for(bit=3;bit>=0;bit--)
	{
		if(bit%2==0)
		{
			data=data|(0x1<<bit);
		}
	}
	printf("%d",data);
}
