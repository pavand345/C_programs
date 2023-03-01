/*wacp to reverse last four elements in a string */


#include <stdio.h>
#include<string.h>
char fun(char *);
int main()
{
    char str[100];
    printf("Enter the string :");
    scanf("%[^\n]s",str);
    char (*fp)(char *)=fun;
    fp(str);
}
char fun(char *str)
{
    int l=strlen(str),i,n=4,j;
	char temp;
    for(i=0;i<3;i++)
    {
        temp=str[l-2-i];
        memmove(str+l-2-i,str+l-2-i+1,strlen(str+l-2-i+1)+1);
        str[l-1]=temp;
	//str[l]=NULL;
    }
    printf("%s\n",str);
}
