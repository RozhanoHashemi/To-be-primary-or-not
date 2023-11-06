#include <stdio.h>
#include <stdlib.h>

void A(int a)
{

    for (int i = 2; i <=a; i++)
    {
        while (a%i == 0)
        {
            printf("%d ", i);
            a/=i;
        }
    }


}

void B(int b)
{

 int i=2;
 for(i;i<b;i++)
 {
     int f=1;

     int j;
     for(j=2;j<i;j++)
     {
       if(i%j==0)
      {
       f=0;
          break;
   }

  }
 if(f==1)
  printf("%d ",i);

 }


}

int main() {


int k;
scanf("%d",&k);

int f=1;
for(int j=2;j<k;j++)
  {
       if(k%j==0)
      {
       f=0;
          break;
   }

  }
if(f==1)
{
 B(k);
}
else
{
A(k);
}




return 0;
}
