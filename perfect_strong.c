#include <stdio.h>

void perfect_number(int num);
void strong_number(int num);


int main()
{
    printf("\e[1;1H\e[2J");  
    int num;
    
    printf("Enter any number : ");
    scanf("%d",&num);

    perfect_number(num);
    strong_number(num);
}

void perfect_number(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
           if(num%i==0){                //checking for the factors of the given number
                sum=sum+i;
           }
    }
    
    if(num==sum){
           printf("\nTHE GIVEN NUMBER %d IS A PERFECT NUMBER.\n",num);
    }
    else
           printf("\nTHE GIVEN NUMBER %d IS NOT A PERFECT NUMBER.\n",num);
}

void strong_number(int num)
{
    int dup,rem,i,totalsum=0,sum;
    dup=num;
    do{
        sum=1;
        rem=dup%10;
        dup=dup/10;
        for(int i=1;i<=rem;i++)
        {
                sum=sum*i;              //calculating the factorial of each digits
        }
        totalsum=totalsum+sum;          //adding the factorial of each digits
    }while(dup>0);

    
    if(num==totalsum){
        printf("\nTHE GIVEN NUMBER %d IS A STRONG NUMBER.\n\n",num);
    }
    else
        printf("\nTHE GIVEN NUMBER %d IS NOT A STRONG NUMBER.\n\n",num);       

}
