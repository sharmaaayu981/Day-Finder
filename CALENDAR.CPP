#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
int d[3];
int tn[12]={0,3,3,6,1,4,6,2,5,0,3,5};
int tl[2]={6,2};
<<<<<<< HEAD
char *days[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
=======
char *days[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSEDAY","FRIDAY","SATURDAY"};
>>>>>>> b1f9209816c25e7e228398494498621d8c570468
int cent[]={6,4,2,0};

void calcu(int d[]);

<<<<<<< HEAD
void input()                                                         //Function to take input date
{
	cout<<"ENTER THE DATE YOU WANT TO FIND (dd/mm/yyyy)\n\n";                
=======
void input()
{
	cout<<"ENTER THE DATE YOU WANT TO FIND (dd mm yyyy)\n\n";
>>>>>>> b1f9209816c25e7e228398494498621d8c570468
	for(int i=0;i<3;i++)
	{
		cin>>d[i];
		cout<<"\n";
	}
	calcu(d);
}

<<<<<<< HEAD
void main()                                                          //Main function
=======
void main()
>>>>>>> b1f9209816c25e7e228398494498621d8c570468
{
	clrscr();
	char ch='y';
	while(ch=='y')
	{
		input();
<<<<<<< HEAD
		cout<<"\nWANT TO SEE MORE?(y/n)\n";   
=======
		cout<<"\nWANT TO SEE MORE(y/n)\n";
>>>>>>> b1f9209816c25e7e228398494498621d8c570468
		cin>>ch;
	}
	getch();
}
<<<<<<< HEAD
void calcu(int d[])                                                      //Function to calculate
=======
void calcu(int d[])
>>>>>>> b1f9209816c25e7e228398494498621d8c570468
{       int sum;
	int d1=d[0];
	int m=d[1];
	int yr=d[2];
	int yrem=((yr%100)%4);
	int yrq=((yr%100)/4);
	int centrem=((yr/100)%4);
	if(m==01 || m==02)
	{	if((yr%100)==0||yrem==0)
		{
			if((yr%100)==0 && centrem!=0)
			{
				sum=d1+tn[m-1]+yrq+(yr%100)+cent[centrem];
			}
			else
				sum=d1+tl[m-1]+yrq+(yr%100)+cent[centrem];
		}
		else
		{
			sum=d1+tn[m-1]+yrq+(yr%100)+cent[centrem];
		}
	}
	else
	{
		sum=d1+tn[m-1]+yrq+(yr%100)+cent[centrem];
	}
	int j=0;
	j=(sum%7);
	puts(days[j]);
}
