# include<stdio.h>

int main()
{
   int m,km,rem;
   printf("Enter the quantity in m :");
   scanf("%d", &m);
   rem = (m%1000);
  km = (m/1000);
printf("Converting given metres into km : %d km and %d m", km,rem);

    return 0;
}