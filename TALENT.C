#include<stdio.h>
#include<time.h>
#include<conio.h>
void wait (int sec)
{

		clock_t end_wait;
		end_wait = clock () + sec * CLK_TCK ;

		while (clock() < end_wait) {}
}
void design1();
void design1()
{
   printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
   printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
}
void design2();
void design2()
{

   printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
 printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
}
void design3();
void design3()
{
   printf("********************************************************************************");
 printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("\n********************************************************************************");
}
void res1();
void res1()
{
   clrscr();
   printf("################################################################################");
 printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("\n################################################################################");
   printf("\n\n\t\t\t");
   printf("\n\n\t\t\tSorry, Your Answer Is Wrong!!!\n\n\t\t\tYOU ARE OUT OF THE GAME");
   printf("\n\n\t\t\t YOU WON NO PRIZES");
   printf("\n\n\t\t\tBetter Luck Next Time!!!");
}
void res2();
void res2()
{
   clrscr();
   printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
 printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
   printf("\n\n\n\n\t\t\t");
   printf("\n\n\t\t\tSorry, Your Answer Is Wrong!!!\n\n\t\t\tYOU ARE OUT OF THE GAME");
   printf("\n\n\t\t\t YOU WON THE SMALL PRIZE");
   printf("\n\n\t\t\t\t  ENJOY!!!");
}
void res3();
void res3()
{
   clrscr();
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
 printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   printf("\n\n\t\t\tSorry, Your Answer Is Wrong!!!\n\n\t\t\tYOU ARE OUT OF THE GAME");
   printf("\n\n\t\t\t YOU WON SUPER PRIZE");
   printf("\n\n\t\t\t\t  ENJOY!!!");
}
void res4();
void res4()
{
  clrscr();
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
 printf("\n\t\t\t         TALENT\n");
   printf("\t\t\t        EXPLORER");
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   printf("\n\n\t\t\tAll the Answer Are Wright!!!\n\n\t\t\tYOU ARE WINNER OF THE GAME");
   printf("\n\n\t\t\t YOU WON EXCELLENT PRIZE");
   printf("\n\n\t\t\t\t  ENJOY!!!");
}
struct ques
{
   char question[100];
   char optiona[30];
   char optionb[30];
   char optionc[30];
   char optiond[30];
   int correct;
   char half1[30];
   char half2[30];
   int halfans;
   char clue[75];
   int audience1[5];
   int audience2[5];
   int audience3[5];
   int audience4[5];
};
  void main()
  {
  struct ques q[16];
  int clock_t,end_wait;
  char name[26],status[40],district[20];
  int a,b,clue,audience,half,i;
  FILE *fp,*fpout;
  clrscr();
  design1();
  clue=a=b=audience=half=i=0;
  printf("\n\t    ENTER YOUR NAME: ");
  gets(name);
  printf("\n ENTER YOUR SCHOOL/COLLEGE NAME: ");
  gets(status);
  printf("\n\t ENTER YOUR DISTRICT NAME: ");
  gets(district);
  printf("\n\n\t\tHearty Welcome To: TALENT EXPLORER GAME SHOW!\n\n\t\t\tWait For Few Seconds!!\n\n\t\t\tTo Know About This Game!!!");
  getch();
  clrscr();
  design2();
  printf("\n\t\t\t    ABOUT THIS GAME:");
  printf("\n\n\t 1.)TOTALLY THIS GAME HAVING 15 QUESTIONS......");
  printf("\n\t 2.)EACH QUESTIONS HAVE 4 OPTIONS......");
  printf("\n\t 3.)PRESS '5' TO USE 50-50 OPTION......");
  printf("\n\t 4.)PRESS '6' TO KNOW CLUE FOR THAT QUESTION......");
  printf("\n\t 5.)PRESS '7' TO RECEIVE AUDIENCE REPORT......");
  printf("\n\t\t\t\t  RULES:");
  printf("\n\n\t 1.)ALL THE LIFE LINES ARE USE ONLY ONE TIME......");
  printf("\n\t 2.)IF YOU ANSWERED WRONG,YOU WILL BE OUT OF THE GAME......");
  printf("\n\t\t\t\t GET READY!!!");
  getch();
  clrscr();
  fp=fopen("STAFF1.txt","r");
  for(i=0;i<=14;i++)
  {
      fscanf(fp,"%s",&q[i].question);
      fscanf(fp,"%s",&q[i].optiona);
      fscanf(fp,"%s",&q[i].optionb);
      fscanf(fp,"%s",&q[i].optionc);
      fscanf(fp,"%s",&q[i].optiond);
      fscanf(fp,"%d",&q[i].correct);
      fscanf(fp,"%s",&q[i].half1);
      fscanf(fp,"%s",&q[i].half2);
      fscanf(fp,"%d",&q[i].halfans);
      fscanf(fp,"%s",&q[i].clue);
      fscanf(fp,"%s",&q[i].audience1);
      fscanf(fp,"%s",&q[i].audience2);
      fscanf(fp,"%s",&q[i].audience3);
      fscanf(fp,"%s",&q[i].audience4);
  }
  for(i=0;i<=14;i++)
  {
      clrscr();
      if(i==0)
      {
	design3();
      }
      else if(i==1)
      {
       design1();
      }
      else if(i==2)
      {
       design2();
      }
      else if(i==3)
      {
       design3();
      }
      else if(i==4)
      {
       design1();
      }
      else if(i==5)
      {
       design2();
      }
      else if(i==6)
      {
       design2();
      }
      else if(i==7)
      {
       design3();
      }
      else if(i==8)
      {
       design1();
      }
      else if(i==9)
      {
       design2();
      }
      else if(i==10)
      {
       design3();
      }
      else if(i==11)
      {
       design1();
      }
      else if(i==12)
      {
       design2();
      }
      else if(i==13)
      {
       design3();
      }
      else
      {
       design1();
      }
    printf("\n\n\t\t\t       QUESTIONS No.%d :\n\n%s",i+1,q[i].question);
    printf("\nOPTIONS:1.)%s",q[i].optiona);
    printf(" 2.)%s",q[i].optionb);
    printf(" 3.)%s",q[i].optionc);
    printf(" 4.)%s",q[i].optiond);
    printf("\n\t ANSWER:");
    scanf("%d",&a);
    if(q[i].correct==a)
    {
    }
   else if(a==5)
   {
      if(half==0)
      {
      printf("\n\t50-50 OPTIONS:");
      printf("\n\nOPTIONS:1.)%s\t 2.)%s",q[i].half1,q[i].half2);
      printf("\n\n\t ANSWER: ");
      scanf("%d",&b);
      if(b==q[i].halfans)
      {
	half=1;
      }
      else
      {
       if(i<=4)
       {
	  res1();
	  goto aa;
      }
      else if(i<=9)
      {
	  res2();
	  goto aa;
      }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
   }
  }
     else
     {
	 printf("\n\t\tSorry,You Already Used This Option ");
	 printf("\nOPTIONS:1.)%s\t2.)%s  3.)%s  4.)%s",q[i].optiona,q[i].optionb,q[i].optionc,q[i].optiond);
	 printf("\n\n\t ANSWER: ");
	 scanf("%d",&b);
	 if(b==q[i].correct)
	 {
	 }
     else
     {
       if(i<=4)
       {
	  res1();
	  goto aa;
      }
      else if(i<=9)
      {
	  res2();
	  goto aa;
      }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
     }
    }
  }
   else if(a==6)
   {
     if(clue==0)
     {
      printf("\n\tCLUE: %s",q[i].clue);
      printf("\nOPTIONS:1.)%s\t2.)%s  3.)%s  4.)%s",q[i].optiona,q[i].optionb,q[i].optionc,q[i].optiond);
      printf("\n\n\t ANSWER: ");
      scanf("%d",&b);
      if(b==q[i].correct)
      {
	clue=1;
   }
   else
   {
       if(i<=4)
       {
	  res1();
	  goto aa;
       }
      else if(i<=9)
      {
	  res2();
	  goto aa;
      }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
    }
   }
       else
       {
	 printf("\n\t\tSorry,You Already Used This Option ");
	 printf("\nOPTIONS:1.)%s\t2.)%s  3.)%s  4.)%s",q[i].optiona,q[i].optionb,q[i].optionc,q[i].optiond);
	 printf("\n\n\t ANSWER: ");
	 scanf("%d",&b);
	 if(b==q[i].correct)
	 {
	 }
	 else
	 {
	 if(i<=4)
	 {
	   res1();
	   goto aa;
	 }
	 else if(i<=9)
	 {
	   res2();
	   goto aa;
	 }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
    }
   }
  }
  else if(a==7)
  {
	if(audience==0)
	{
	printf("\n\tAUDIENCE REPORT:");
	printf("\n\nOPTIONS:1.)%s%s\t 2.)%s%s\t3.)%s%s\t 4.)%s%s",q[i].optiona,q[i].audience1,q[i].optionb,q[i].audience2,q[i].optionc,q[i].audience3,q[i].optiond,q[i].audience4);
	printf("\n\n\t ANSWER: ");
	scanf("%d",&b);
	if(b==q[i].correct)
	{
	  audience=1;
	}
   else
   {
       if(i<=4)
       {
	  res1();
	  goto aa;
      }
      else if(i<=9)
      {
	  res2();
	  goto aa;
      }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
   }
      }
	  else
	  {
	    printf("\n\t\tSorry,You Already Used This Option ");
	    printf("\nOPTIONS:1.)%s\t2.)%s  3.)%s  4.)%s",q[i].optiona,q[i].optionb,q[i].optionc,q[i].optiond);
	    printf("\n\n\t ANSWER: ");
	    scanf("%d",&b);
	    if(b==4)
	    {
	    }
    else
    {
     if(i<=4)
       {
	  res1();
	  goto aa;
      }
      else if(i<=9)
      {
	  res2();
	  goto aa;
      }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
     }
   }
  }
   else
   {
     if(i<=4)
       {
	  res1();
	  goto aa;
      }
      else if(i<=9)
      {
	  res2();
	  goto aa;
      }
      else if(i<=13)
      {
	 res3();
	 goto aa;
      }
  }
   }
   if(i=14)
   {
      res4();
      goto aa;
   }
  aa:
  fpout=fopen("data.txt","a+");
  fprintf(fpout,"\nNAME: %s",name);
  fprintf(fpout,"\nSCHOOL/COLLEGE NAME: %s",status);
  fprintf(fpout,"\nDISTRICT NAME: %s",district);
  fprintf(fpout,"\nANSWERED QUESTIONS: %d",i+1);
  fclose(fpout);
  fclose(fp);
  getch();
}