#include <stdio.h>
#include <math.h>

//Solving to find whether a number is Armstrong number or not
int main()
{
        printf("\e[1;1H\e[2J"); 
        int num,dup,alter,rem,sum=0,length=0;
        printf("Enter a number to check whether it is a Armstrong number or not: ");
        scanf("%d",&num);
        alter=num;
        dup=num;
        
        do{
                length++;
                alter=alter/10;                  //counting the number of digits entered by user
        }while(alter>0);
        printf("%d",length);
        while(dup>0){
                rem=dup%10;
                int a=round(pow(rem,length));  
                printf("\n%d",a) ;                  //isolating the last digit of the number
                sum=sum+round(pow(rem,length));        
                dup=dup/10;
        }                                       /*calculates the sum of digits of the number raised to the power equal
                                                to the numbers of digits in the number*/
            int b=pow(5,3);
            printf("\n%d",b);
        if(num==sum){
                printf("\nThe number %d is a Armstrong number.",num);
        }
        else
                printf("The number  %d is not a Armstrong number.", num);
}