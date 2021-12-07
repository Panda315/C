#include <stdio.h>
#include <string.h>

typedef struct{
        char name[20];
        int sn;
    }student;
    

int main()
{
    printf("\e[1;1H\e[2J");
    student s[5];
    printf("All small letters.\n\n");
    for(int i=0;i<5;i++){
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Symbol No: ");
        scanf("%d",&s[i].sn);
        printf("\n");
    }
    printf("\n");

    printf("\n%s %s %s %s %s",s[0].name,s[1].name,s[2].name,s[3].name,s[4].name);
    for(int m=0;m<4;m++)
    {
        for(int n=0;n<4;n++)
        {
            int r=0;
            r=strcmp(s[n].name,s[n+1].name);                  //comparing string
            printf("\n%d",r);
            if(r==0)                                        //if both the names are same
            {
                if(s[n].sn<s[n+1].sn)                       //arranging in order of symbol  no if names are same
                    continue;
                    
                else
                {
                    student temp=s[n];
                    s[n]=s[n+1];
                    s[n+1]=temp;
                }
            }
            
            else if(r>0)                                    //if alphabetically first name is greater than second
            {
                    student temp=s[n];
                    s[n]=s[n+1];
                    s[n+1]=temp;
            }
            
            else                                            //if alphabetically first name is smaller than second
                continue;
        }
        printf("\n%s %s %s %s %s\n",s[0].name,s[1].name,s[2].name,s[3].name,s[4].name);
    }
    
    printf("ROLL NO\t SYMBOL NO\t NAME\n");
    
    for(int x=0;x<5;x++)
    {
        printf("%d\t",x+1);
        printf("   %d\t",s[x].sn);
        printf("\t%s\n",s[x].name);
    }  
}