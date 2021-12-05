#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int roll;
    int symbol;
    char subject[20];  //course name 
    int contact;
}info;

void write_to_csv(FILE* file,info a[],int n)        //function to write in csv file
{
    for(int i=0;i<n;i++)
    {
        fprintf("%s,%d,%d,%s,%d",a[i].name,a[i].roll,a[i].symbol,a[i].subject,a[i].contact);
    }
    printf("\nNew Information are Sucessfully stored.");
    
}

info* search(int x,info a[],int n)              //search function
{
    for(int i=0;i<n;i++)
    {
        if(((a+i)->symbol)==x)
            return a+i;
    }
    printf("\nThe given symbol number does not match with any symbol number stored in the database.");
}

int main()
{
    printf("\e[1;1H\e[2J");       //clear screen
    int command,x,nos;             //nos = number of students
    start:
    printf("Please input the command of your wish : ");
    printf("\n1) Store Information \n2)Search Information \n3)Delete Information \n4)Exit");
    scanf("%d",&command);

    if(command == 1)        //command for storing information
    {
        printf("Enter the number of students : ");
        scanf("%d",&nos);

    info a[nos];
    
    for(int i=0;i<nos;i++)            //storing information
    {
        getchar();
        printf("\nfor student %d : ",i+1);
        printf("\nName : ");
        gets(a[i].name);
        printf("Roll No : ");
        scanf("%d",&a[i].roll);
        printf("Symbol No : ");
        scanf("%d",&a[i].symbol);
        getchar();
        printf("Major Subject : ");
        gets(a[i].subject); 
        printf("Contact Number : ");
        scanf("%d",&a[i].contact);
    }
    goto start;
    }
  
    if(command == 2)        //command for searching iformation
    {
        printf("\nEnter Symbol No to see details : ");
        scanf("%d",&x);
        if(x<0)
        printf("\n\n\t\t\tInvalid Symbol No.");

        info a[nos],*p;    
        p=search(x,a,nos);
        printf("\nName : %s",p->name);
        printf("\nRoll No : %d",p->roll);
        printf("\nSymbol NO : %d",p->symbol);
        printf("\nMajor Subject : %s",p->subject); 
        printf("\nContact Number : %d",p->contact); 
        printf("\n\n\n"); 
    }

    if(command == 3)        //command for deleting information
    {

    }

    if(command == 4)            //command for exit
    {
        printf("\e[1;1H\e[2J");
        goto start;
    }
    
    
        
}