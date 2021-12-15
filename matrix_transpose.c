#include <stdio.h>

void transpose(int c,int matrix[][c],int r)
{
    int temp[r][c];
    for(int i=0;i<r;i++)            //transposing
    {
        for(int j=0;j<c;j++)
        {
            temp[i][j]=matrix[j][i];
        }
    }
    
    printf("\nTranposed matrix : \n");
    for(int m=0;m<r;m++)            //for printing
    {
        for(int n=0;n<c;n++)
        {
           printf("%d\t",temp[m][n]); 
        }
        printf("\n");
    }
}


int main()
{
    printf("\e[1;1H\e[2J");
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    printf("\n");
    
    if(r<=0||c<=0)
        printf("\nINVALID INPUT !!!");
        
    else
    {
    int matrix[r][c];
    
    
    for(int i=0;i<r;i++)            //taking input
    {
        for(int j=0;j<c;j++)
        {
        printf("Enter %d%d-element : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("\n\nGiven matrix : \n");
    for(int m=0;m<r;m++)            //for printing
    {
        for(int n=0;n<c;n++)
        {
           printf("%d\t",matrix[m][n]); 
        }
        printf("\n");
    }
    
    transpose(c,matrix,r);
    }
}
