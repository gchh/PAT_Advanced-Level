#include<stdio.h>
#include<string.h>

int main()
{
    char src[25];
    int dst[25];
    int cnt1[25]={0},cnt2[25]={0};
    scanf("%s",&src);
    int i,j,w,k=0,flag=1,t=0,tmp;
    //printf("%d\n",strlen(src));
    for (i=strlen(src)-1;i>=0;i--)
    {
        tmp=src[i]-'0';
        cnt1[tmp]++; //����1��
        j=2*tmp+k;   //�ӱ�
        w=j%10;      //����
        k=j/10;      //��λ��
        dst[i]=w;    //��¼����
        cnt2[w]++;  //����2��
    }
    if (k!=0){
        t=strlen(src);
        dst[t]=k;cnt2[k]++;flag=0;}
    //else t=i-1;

    if (flag)
    {
        for (i=0;i<10;i++)
        {
            if (cnt1[i]!=cnt2[i])
            {
                flag=0;
                break;
            }
        }
    }
    if (flag==0)printf("No\n");
    else printf("Yes\n");

    if (t==strlen(src))printf("%d",dst[t]);
    for (t=0;t<strlen(src);t++)printf("%d",dst[t]);
    return 0;
}