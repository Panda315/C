#include <stdio.h>
#include <stdlib.h>

void multiplication();
void input(int c,int x[][c],int r,char a)
{                  
    printf("\nEnter elements for matrix %c : ",a);
    printf("\n");
    for(int i=0;i<r;i++)            
    {
        for(int j=0;j<c;j++)
        {
        printf("Enter %d%d-element : ",i+1,j+1);
        scanf("%d",&x[i][j]);
        }
    }
    
}

int main()
{
    int r1,c1,r2,c2;
    printf("Enter the number of rows for Matrix A : ");
    scanf("%d",&r1);
    printf("Enter the number of columns for Matrix A : ");
    scanf("%d",&c1);
    printf("\n");
    
    printf("Enter the number of rows for Matrix B : ");
    scanf("%d",&r2);
    printf("Enter the number of columns for Matrix B : ");
    scanf("%d",&c2);
    printf("\n");
    
    if(r1*r2<=0||c1*c2<=0){
        printf("\nINVALID INPUT !!!");
        printf("\nGIVEN DIMENSION OF MATRIX IS INVALID.");
    }
       
    
    else if(c1!=r2)
    {
        printf("\nGIVEN MATRICES CAN NOT BE MULTIPLIED.");
    }
        
    else
    {
    int a[r1][c1];
    int b[r2][c2];
    char f='A';
    char s='B';

    
    input(c1,a,r1,f);
    input(c2,b,r2,s);
    
    multiplication(c1,c2,a,b,r1,r2);
    }
}

void multiplication(int c1,int c2,int a[][c1],int b[][c2],int r1,int r2)    
{
    
    int sum;
    int temp[r1][c2];


    for (int row = 0; row < r1; row++)
    {
        for (int col = 0; col < c2; col++)
        {
            sum = 0;
            for (int i = 0; i < r2; i++)
            {
                sum += (*(*(a + row) + i)) * (*(*(b + i) + col));
            }

            *(*(temp + row) + col)=sum;
        }
    }
    
    printf("\n\nMatrix formed from multiplication of given two matrices is: \n");
    for(int i=0;i<r1;i++)            
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d\t",*(*(temp+i)+j));
        }
        printf("\n");
    }
}
