#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
   int temp=num,reverse=0;
    while(temp>0)
    {
        static int y=0;
        y=temp%10;
        temp=temp/10;
        reverse=y+reverse*10;
    }
    
    if(num==reverse)
        printf("\n%d is a palindrome number.",num);
        
    else 
        printf("\n%d is not a palindrome number.",num);
}
