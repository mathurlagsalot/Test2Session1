#include<stdio.h>

int input_number(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}

int is_prime(int n){
  int i,flag=0;
  if (n == 0 || n == 1)
    flag = 1;
  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
      }
  }
  return flag;
}

void output(int n,int flag){
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
}

int main(){
  int n,flag;
  n=input_number();
  flag=is_prime(n);
  output(n,flag);
  return 0;
}