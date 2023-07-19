#include<stdio.h>
int main()
{
  int s1,s2,s3;
  printf("Enter side1 of a triangle : \n");
  scanf("%d",&s1);
  printf("Enter side2 of the triangle : \n");
  scanf("%d",&s2);
  printf("Enter side3 of the triangle : \n"); 
  scanf("%d",&s3);

  if((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1))
  {
    printf("This sides are of valid triangle and that is :");
    if(s1==s2==s3)
    { printf("Eqilateral triangle"); }
    else if(s1==s2||s2==s3||s3==s1)
    { printf("Isosceles triangle"); }
    else if((s1*s1)+(s2*s2)==(s3*s3)||(s2*s2)+(s3*s3)==(s1*s1)||(s3*s3)+(s1*s1)==(s2*s2))
    { printf("Right angled triangle"); }
    else { printf("Scalene triangle"); }
  }
  
  else 
  {
    printf("Entered value of sides do not form any valid triangle");
  }

    return 0;
}