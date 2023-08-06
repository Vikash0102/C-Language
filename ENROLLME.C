#include<stdio.h>
#include<conio.h>
void main()
{
 int num,a;
 int rem,i,j;
 int count;
 clrscr();
 printf("Enter your last 5 digit Enrollment number -> ");
 scanf("%d",&num);
 rem = num % 10;
 printf("Remainder is %d\n",rem);

switch(rem)
{
 case 1: a=3;
	 printf("Assigned number of 1 is %d \n",a);
	 break;
 case 2: a=5;
	 printf("Assigned number of 2 is %d \n",a);
	 break;
 case 3: a=7;
	 printf("Assigned number of 3 is %d \n",a);
	 break;
 case 4: a=11;
	 printf("Assigned number of 4 is %d \n",a);
	 break;
 case 5: a=13;
	 printf("Assigned number of 5 is %d \n",a);
	 break;
 case 6: a=17;
	 printf("Assigned number of 6 is %d \n",a);
	 break;
 case 7: a=19;
	 printf("Assigned number of 7 is %d \n",a);
	 break;
 case 8: a=23;
	 printf("Assigned number of 8 is %d \n",a);
	 break;
 case 9: a=29;
	 printf("Assigned number of 9 is %d \n",a);
	 break;
 case 0: a=31;
	 printf("Assigned number of 0 is %d \n",a);
	 break;
 default: printf("You are required to enter last 5 digit in your Enrollment without taking any space.");
	  break;
}
 printf("\nAll the numbers between 1 to 1000 which are either Prime number and it is also  Divisible by above assigned number ( %d ) are :\n\n",a);

 for (j=1;j<=1000;j++)
 {
  count=0;
  for(i=2;i<=j/2;i++)
  {
   if(j%i==0)
   {
    count++;
    break;
   }
  }
 if((count==0) || (j%a==0))
 {
    printf(" %d",j);
 }
}

getch();

}