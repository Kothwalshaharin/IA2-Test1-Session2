#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the side of the triangle\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  int count=0;
  if(a!=b&&b!=c&&c!=a)
  {
    count++;
  }
  return count;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("The triangle with the sides %d,%d and %d is Scalene",a,b,c);
  }
  else
  {
    printf("The triangle with the sides %d,%d and %d is not scalene",a,b,c);
  }  
}
int main()
{
  int a1,b1,c1,count1;
  a1=input_side();
  b1=input_side();
  c1=input_side();
  count1=check_scalene(a1,b1,c1);
  output(a1,b1,c1,count1);
  return 0;
}