#include <stdio.h>
#include <string.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int sum;
	sum=a+b;
	char s[10];
	sprintf(s,"%d",sum);
	int i,cnt=0,cnt1=0;
	char ss[20]={0};
	for(i=strlen(s)-1;i>=0;i--)
	{
		cnt1++;
		if(cnt1==4)
		{
			ss[cnt]=',';
			i++;
			cnt1=0;
		}
		else ss[cnt]=s[i];
		cnt++;
	}
	for(i=strlen(ss)-1;i>=0;i--)
	{
		if(ss[strlen(ss)-1]==',')continue;
		if(ss[strlen(ss)-1]=='-'&&ss[strlen(ss)-2]==','&&i==strlen(ss)-2)continue;
		printf("%c",ss[i]);
	}
	return 0;
}
