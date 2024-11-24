#include<stdio.h>
int main()
{ int i,j,result;
   for(i=0;i<6;i++)
   {   
      for(j=i;j<=6;j++)
      {  
        printf(" ");
        
      }
      for(j=1;j<=i;j++)
      { int product1=1;
        int product2=1;
        int product3=1;
        for(int a=1;a<=(i-j);a++)
      {  product1*=a;
        
      }
      for(int b=2;b<=j;b++)
      {  product2*=b;
        
      }
      for(int c=2;c<=i;c++)
      {
        product3*=c;
      }
  
     result=product3/(product2*product1);
     printf("%d ",result);
     
     }
      

printf("\n");
   }
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
