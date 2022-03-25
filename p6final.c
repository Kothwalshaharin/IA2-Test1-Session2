#include<stdio.h>
void input_string(char *a)
{
  printf("Enter th string: \n");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int i,m=0;
  for(i=0;a[i]!='\0';i++)
    m++;
  return m;
}
void output(char *a,char reversea)
{
  printf("The reverse of the string is: \n");
  for(int i=reversea-1;i >= 0;i--)
  printf("%c" ,a[i]);
}
int main()
{
  char a[100];
  input_string(a);
  char reversea;
  reversea =str_reverse(a);
  output(a,reversea);
  return 0;
  }
