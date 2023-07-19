#include<stdio.h>
#include<string.h>

int main()
{
  char inputArray[100],reverseArray[100];

  printf("Enter the string for palindrome check \n");

  scanf("%s", inputArray);
  strcpy(reverseArray, inputArray);
  strrev(reverseArray);
  
  if(strcmp(inputArray,reverseArray)==0)
  printf("%s is a palindrome \n", inputArray);
  else
     printf("%s is not a palindrome \n", inputArray);
     getch();
  
    return 0;
}