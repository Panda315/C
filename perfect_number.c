#include <stdio.h>

//Solvig to find whether the given number is a Perfect number or not.
int main()
{
    printf("\e[1;1H\e[2J");  
    int num,sum=0,i;
    
    printf("Enter any number : ");
    scanf("%d",&num);

   for(i=1;i<num;i++)
   {
           if(num%i==0){                //checking for the factors of the given number
                sum=sum+i;
           }
   }
    
   if(num==sum){
           printf("The given number %d is a perfect number.",num);
   }
   else
           printf("The given number %d is not a perfect number.",num);
}