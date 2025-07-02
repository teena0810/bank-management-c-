#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int accno,accbal,ch,ch1,ch2,ch3,acctype,d,w;
char name[20],email[20],phno[10],username[20],password[10],u[20],p[10];
clrscr();
while(1)
{
printf("enter 1 for resister\nenter 2 for login\nenter 3 for exit\nenter your choice=");
scanf("%d",&ch);
switch(ch)
{
   case 1:                                  //creating a account
	  printf("enter your name=");
	  scanf("%s",&name);
	  printf("enter your account number=");
	  scanf("%d",&accno);
	  printf("enter your email=");
	  scanf("%s",&email);
	  printf("enter your mobile number=");
	  scanf("%s",&phno);
	  printf("enter your username=");
	  scanf("%s",&username);
	  printf("enter a password=");
	  scanf("%s",&password);
	  printf("enter account type press 1 for saving and 2 for current=");
	  scanf("%d",&acctype);
	  if(acctype==1)               //saving acc
	  {
	       accbal=1000;
	       printf("your account balance is 1000\n");
	  }
	  else                         //current acc
	  {
	       accbal=5000;
	       printf("your account balance is 5000\n");
	  }
	  printf("congratulations... account created successfully..!!!\n");
	  break;
   case 2:                                       //login account
	  printf("enter username to login=");
	  scanf("%s",&u);
	  printf("enter password to login=");
	  scanf("%s",&p);
	  ch1=strcmp(username,u);
	  ch2=strcmp(password,p);
	  if(ch1==0 && ch2==0)
	  {
	       printf("login successfully...\n");
	  while(1)
	  {
	  printf("enter 1 to check balance\nenter 2 for deposite\nenter 3 for withdraw\nenter 4 for exit\nenter your choice=");
	  scanf("%d",&ch3);
	  switch(ch3)
	  {
	  case 1:
		 printf("your account balance=%d\n",accbal);
		 break;                      //balance check!!
	  case 2:
		 printf("enter deposite amount=");
		 scanf("%d",&d);
		 accbal=accbal+d;
		 printf("your updated balance=%d\n",accbal);
		 break;                      //amount deposite!!
	  case 3:
		 printf("enter withdraw amount=");
		 scanf("%d",&w);
		 if(w>accbal)
		 {
		   printf("error\n");
		 }
		 else
		 {
		   accbal=accbal-w;
		   printf("your updated balance=%d\n",accbal);
		 }
		 break;                       //amount withdraw!!
	  case 4:
		 exit(0);
	}
	}
	}
	else
	{
	   printf("INVALID LOGIN.. pls try again\n");
	}
	break;
   case 3:
	  exit(0);
}
}
getch();
}