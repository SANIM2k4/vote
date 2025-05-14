#include<stdio.h>
int main()
{
 int n,t,a,b;
 scanf("%d%d%d",&n,&t,&a);
 b=n-(t+a);
 if(a+b<t || t+b<a)
 {
 printf("yes\n");

 }
 else
 { printf("no\n");}
 return 0;

}
