#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,sum,number[8]={0},i,flag=0;
	scanf("%d %d",&a,&b);
	sum=a+b;
	/*处理负号*/ 
	if (sum<0)
	{   
		printf("-");   
        sum=abs(sum);
    }
    /*将sum中每个数依次存入数组中*/ 
	for (i=1;i<=7;i++)
	{
		if (sum!=0)
		{
			number[i]=sum%10;   
			sum=sum/10;
		}
		else break;
	}
	/*寻找最高位*/ 
	for (i=7;i>0;i--)
	{
		if (number[i]!=0) 
		{ 
			flag=i;
			break;
    	}
	}
	/*依次输出数字*/ 
	for (i=flag;i>0;i--)
	{
		printf("%d",number[i]);
		if ((i>3)&&((i-1)%3==0)) 
		{
			printf(",");
		}
	}
	if (flag==0) printf("0");  //处理为0的情况 
	return 0;
}
