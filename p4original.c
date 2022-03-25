
#include<stdio.h>

int input(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}


void find_fibo(int n)
{
   int i,c=0;
   int a=0;
   int b=1;
   for(i=0;i<n;i++)
   {
       a=b;
       b=c;
       c=a+b;
   }
}

void output(int n){
  int i,c=0;
  int a=0;
  int b=1;
  printf("Fibonacci series for %d terms:-\n",n);
   for(i=0;i<n;i++)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
}

int main() 
{
   int n;    
   n=input();
   find_fibo(n);
   output(n);
  return 0;
}