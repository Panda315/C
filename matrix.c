#include <stdio.h>
#include <stdlib.h>

void multiplication();
void add();
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
    printf("\e[1;1H\e[2J"); 
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
        printf("\nGIVEN MATRICES CAN NOT BE USED FOR DESIRED PROCESS.");
    }
        
    else
    {
    int a[r1][c1];
    int b[r2][c2];
    char f='A';
    char s='B';
    int command=0;

    printf("Give the desired command : ");
    printf("\n1)Multiplicaton \n2)Addition");
    printf("\n");
    scanf("%d",&command);
    input(c1,a,r1,f);
    input(c2,b,r2,s);
    
    if(command==1)
    {
        multiplication(c1,c2,a,b,r1,r2);
    }
    else if(command==2)
    {
        add(c1,a,b,r1);
    }
    
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

void add(int c,int a[][c],int b[][c],int r)         //addition of two matrix
{
    int result[r][c];
    printf("\n\nMatrix formed from addition of given two matrices is: \n");
    for(int i=0;i<r;i++)            
    {
        for(int j=0;j<c;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    } 
}