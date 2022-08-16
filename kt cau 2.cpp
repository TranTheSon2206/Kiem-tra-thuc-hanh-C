#include<stdio.h>// Cau 2: chuyen doi chu thuong thanh chu in hoa
#include<string.h>
#define max 100
void upperCase(char s[])
{
	int i,n;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf("%s",s);
}
int main()
{
	char s[max];
	printf("Nhap chuoi ki tu can chuyen thanh in hoa: ");
	gets(s);
	upperCase(s);	
}
