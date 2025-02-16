#include<stdio.h>
int main()
{
    int i,num;
    int a=0,b=1,c;
    
    printf("enter a number");
    scanf("%d",&num);
    printf("\n %d %d",a,b);
    for(int i=1;i<=num;i++)
    {
      c=a+b;    
      printf("%d",c);
      a=b;
      b=c;
    }
      return (0);
}