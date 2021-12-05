#include <stdio.h>

typedef struct{
    char name[20];
    int roll;
    int symbol;
    char m[20];  //course name 
}info;


info* search(int x,info a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(((a+i)->symbol)==x)
            return a+i;
    }
}

int main()
{
    printf("\e[1;1H\e[2J");       //clear screen
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);

    info a[n];
    
    for(int i=0;i<n;i++)            //storing information
    {
        getchar();
        printf("\nfor student %d : ",i+1);
        printf("\nName : ");
        gets(a[i].name);
        printf("Roll No : ");
        scanf("%d",&a[i].roll);
        printf("Symbol No : ");
        scanf("%d",&a[i].symbol);
        printf("Major Subject : ");
        scanf("%s",a[i].m);   
    }
    
    int x;
    printf("\nEnter Symbol No to see details : ");
    scanf("%d",&x);
    
   if(x<0)
        printf("\n\n\t\t\tInvalid Symbol No.");
     
    info *p;    
    p=search(x,a,n);
    printf("\nName : %s",p->name);
    printf("\nRoll No : %d",p->roll);
    printf("\nSymbol NO : %d",p->symbol);
    printf("\nMajor Subject : %s\n",p->m);  
    printf("\n"); 
        
}