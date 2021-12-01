#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number of elements : ");
    scanf("%d",&x); 
    printf("\n");

    
    int *p=(int *) calloc(x,sizeof(int)); 
   
    for(int i=0;i<x;i++)
    {
        printf("Enter the %d-element : ",(i+1));
        scanf("%d",p+i);
    }
    
    printf("\nBefore Bubble Sorting : \n");             //printing elements before sorting
    for(int k=0;k<x;k++)
    {
        printf("%d",*(p+k));
        printf(" ");
    }
    
    for(int pass=0;pass<x-1;pass++)                  //bubble sorting
    {
        for(int n=0;n<(x-1)-pass;n++)
        {
            int b=0;
            if(*(p+n)<=*(p+n+1))
            {
                continue;
            }
            else
            {
                b=*(p+n);
                *(p+n)=*(p+n+1);
                *(p+n+1)=b;
            }
        }
    }
        printf("\n\nAter Bubble sorting: \n");          //printing elements after sorting
        for(int j=0;j<x;j++)
        {
        printf("%d",*(p+j));
        printf(" ");
        }
        
    free(p);
}