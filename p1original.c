#include<stdio.h>
#include<math.h>


void input(float *x1,float *y1,float *x2,float *y2){
  printf("enter the value for x\n");
  scanf("%f",x1);
  printf("enter the value for y\n");
  scanf("%f",y1);
  printf("enter the value for x\n");
  scanf("%f",x2);
  printf("enter the value for y\n");
  scanf("%f",y2);
}

void find_distance(float x1,float y1,float x2,float y2,float *total){
  *total = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
}

void output(float x1,float y1,float x2,float y2,float total){
  printf("the distance between point1(%f,%f) and point2(%f,%f) is %f",x1,y1,x2,y2,total);
}

int main(){
  float x1,y1,x2,y2,total;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&total);
  output(x1,y1,x2,y2,total);
  return 0;
}