#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include <string.h>
int f=0;
int main()
{
	char s[100],ss[100];
	void randtp(void);
	int start,end,shijian;
goop:
	srand(time(NULL));
	system("cls");
	printf("��ӭ����Сѧ������ϵͳ��\n");

	do
	{
		printf("Are you ready?\n(����yes��ʼ����,no�˳�����):");
		scanf("%s",s);	
		
		if(!strcmp(s,"yes") || !strcmp(s,"YES"))
			break;
		else if(!strcmp(s,"no") || !strcmp(s,"NO"))
			exit(0);
	}
	while(1);
	start=time(NULL);
	randtp();
	end=time(NULL);
	shijian=end-start;
	printf("������յ÷�Ϊ%d,��ʱ%d��\n",f,shijian);
	if(f>90)
		printf("-----SMART-----\n");
	else if(f>80 && f<=90)
		printf("-----GOOD-----\n");
	else if(f>70 && f<=80)
		printf("-----OK-----\n");
	else if(f>60 && f<=70)	
		printf("-----PASS-----\n");
	else
		printf("-----TRY AGAIN-----\n");
	f=0;
poop:
	printf("�Ƿ������yes or no:");
	scanf("%s",ss);	
		if(!strcmp(ss,"yes") || !strcmp(ss,"YES"))
			goto goop;
		else if(!strcmp(ss,"no") || !strcmp(ss,"NO"));
		else
			goto poop;
			return 0;
			
}
void randtp(void)
{
	int a,b,c,d,e,i=1,ii;
loop:
	ii=2;
	e=-1;
	c=rand()%2;
	a=rand()%51;
	b=rand()%51;

	if(c=0)
		d=a+b;
	else
		d=a-b;
	if(d>50 || d<0)
		goto loop;
	else
	{
		if(i==1)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
	 	else if(i==2)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==3)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==4)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==5)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==6)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==7)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==8)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==9)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}
		else if(i==10)
		{
			if(c=0)
				printf("��%d+%d=",a,b);
			else 
				printf("��%d-%d=",a,b);
		}

	}
koop:
	scanf("%d",&e);
	if(e==d)
	{
		if(ii==2)
			f=f+10;
		else if(ii==1)
			f=f+7;
		else
			f=f+4;

		printf("��ȷ\n");
		i=i+1;
		if(i!=11)
			goto loop;

	}
	else
	{
		if(ii!=0)
		{
			printf("����,�㻹��%d�λ��ᣬ���������룺",ii);
			ii=ii-1;
			goto koop;
		}
		else
			printf("�������꣬������ȷ���ǣ�%d\n",d);	
			i=i+1;
			ii=2;
			if(i!=11)
				goto loop;

	}
}




