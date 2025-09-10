#include<stdio.h>
#include<string.h>
int main()
{
	char a[38]="yamin ";
	char b[38]="eushan";
	int j;
	int len_a=strlen(a);
	int len_b=strlen(b);
	int length=len_a+len_b;
	for(int i=len_a,j=0;i<length;i++,j++){
		a[i]=b[j];
	}
printf("%s",a);
a[length]='\0';
} 