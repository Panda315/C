#include <stdio.h>

typedef struct{
    char n[10];
    int r;
    int s;
    char m[20];
}info;


info* search(int x,info a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(((a+i)->s)==x)
            return a+i;
    }
}

int main()
{
    printf("\e[1;1H\e[2J");
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    
    info a[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\nfor student %d : ",i+1);
        printf("\nName : ");
        scanf("%s",a[i].n);
        printf("Roll No : ");
        scanf("%d",&a[i].r);
        printf("Symbol No : ");
        scanf("%d",&a[i].s);
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
    printf("\nName : %s",p->n);
    printf("\nRoll No : %d",p->r);
    printf("\nSymbol NO : %d",p->s);
    printf("\nMajor Subject : %s\n",p->m);   
        
}