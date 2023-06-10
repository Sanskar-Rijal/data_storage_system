#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<String.h>
typedef struct employee
{
    char name[30];
    char address[30];
    float salary;
    long no;

}op;
int data;
void add(op her[])
{
    printf("welcome now you are about to add data \n");
    printf("press any key to continue\n");
    getch();
    printf("enter first name of person\n");
    scanf("%s",her[data].name);
    printf("enter address of person\n");
    scanf("%s",her[data].address);
    printf("enter salary that you want\n");
    scanf("%f",&her[data].salary);
    printf("enter 4 digit pin no that you want while taking out your salary\n");
    scanf("%ld",&her[data].no);
    data++;
}
void edit(op her[])
{
    char ch[30],new[30],add[30];
    int i,num;
    long no=0;
    if(data==0)
    {
        printf("please enter some data first there is no data/n");
    }
    else
    {
        printf("enter the person's name whose something is supposed to be changed\n");
        scanf("  %s",ch);
        for(i=0;i<data;i++)
        {
        if(strcmp(ch,her[i].name)==0)
        {
        printf("What do you want to change\n");
        printf("press any key to continue\n");
        getch();
        printf("enter 1 to change name, 2 to change address 3 to change pin number \n ");
        scanf("%d",&num);
        switch (num)
        {
            case 1:
            printf("enter new name\n");
            scanf("%s",new);
            strcpy(her[i].name,new);
            break;
            case 2:
            printf("enter new address\n");
            scanf(" %s",add);
            strcpy(her[i].address,add);
            break;
            case 3:
            printf("enter new pin number\n");
            scanf("%ld",&no);
            her[i].no=no;
            break;
            default:printf("invalid number please enter a right no");
        }
        }
        }
          if(strcmp(ch,her[i].name)==0)
        printf("invalid name please enter name in small letters like 'sanskar'\n");
        printf("records are updated thank you \n");
        getch();
    }
}
void  disp(op her[])
{
    int i;
       if(data==0)
    {
        printf("please enter some data first there is no data/n");
    }
    else
    {
        for (i=0;i<data;i++)
        {
            printf("the name is %s\n",her[i].name);
            printf("address is %s\n",her[i].address);
            printf("salary is %f\n",her[i].salary);
            printf("number is %ld\n\n",her[i].no);
        }
    }

}

int main()
{
    system("cls");
    op rec[100];
    int num;
    printf("\t \t\t\t\t\t\t\twelcome to the system\n");
    printf("\t \t\t\t\t\t\t\tpress any key to continue\n");
    getch();
    while(1)
    {
        system("cls");
        printf("\t \t\t\t\t\t\t\tenter 1 to add records okay\n\n");
        printf("\t \t\t\t\t\t\t\tenter 2 to display existing records\n\n");
        printf("\t \t\t\t\t\t\t\tenter 3 if you want to edit something\n\n");
        printf("\t \t\t\t\t\t\t\tenter 4 to exit");
        scanf("%d",&num);
        switch (num)
        {
            case 1:add(rec);
            getch();
            break;
            case 2:disp(rec);
            getch();
            break;
            case 3: edit(rec);
            break;
            case 4:printf("Thanks for using me bye have a good day\n");
                 exit(0);
            default:("please enter correct number\n");
        }

    }
   return 0;
}