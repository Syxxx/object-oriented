#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,sum,number[8]={0},i,flag=0;
	scanf("%d %d",&a,&b);
	sum=a+b;
	/*������*/ 
	if (sum<0)
	{   
		printf("-");   
        sum=abs(sum);
    }
    /*��sum��ÿ�������δ���������*/ 
	for (i=1;i<=7;i++)
	{
		if (sum!=0)
		{
			number[i]=sum%10;   
			sum=sum/10;
		}
		else break;
	}
	/*Ѱ�����λ*/ 
	for (i=7;i>0;i--)
	{
		if (number[i]!=0) 
		{ 
			flag=i;
			break;
    	}
	}
	/*�����������*/ 
	for (i=flag;i>0;i--)
	{
		printf("%d",number[i]);
		if ((i>3)&&((i-1)%3==0)) 
		{
			printf(",");
		}
	}
	if (flag==0) printf("0");  //����Ϊ0����� 
	return 0;
}
