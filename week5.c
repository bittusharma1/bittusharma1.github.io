#include<stdio.h>
#include<math.h>
int main()
{
   int N,sum_sqr,avg,AVG;
   float std_dev;
   printf("Enter a number : ");
   scanf("%d",&N);

   for(int i=0; i<=N; i++)
   {
      sum_sqr=N*(N+1)*((2*N)+1)/6;
      avg=(N*(N+1))/2/N;
      AVG=avg*avg;
   }
   std_dev=sqrt((sum_sqr)/N)-AVG;

   printf("Standard deviation is : %f \n",std_dev);

   return 0;
}