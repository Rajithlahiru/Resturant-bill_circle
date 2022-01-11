#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    //Make Menu
    printf("\t\t\t\t\t ~Menu~\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("\t\tMeal\t\tMeal ID\t\tPrice\n\t\t_____________________________________________________________\n\n");
    printf("\t\tPizza\t\t 01\t\tRs: 2000.00(Chicken)\n");
    printf("\t\t\t\t\t\tRs: 1800.00(vegetable)\n\n");
    printf("\t\tBurger\t\t 02\t\tRs: 450.00(Chicken)\n");
    printf("\t\t\t\t\t\tRs: 400.00(vegetable)\n\n");
    printf("\t\tRice\t\t 03\t\tRs: 300.00(Chicken)\n");
    printf("\t\t\t\t\t\tRs: 270.00(vegetable)\n\n");
    printf("\t\tKottu\t\t 04\t\tRs: 300.00(Chicken)\n");
    printf("\t\t\t\t\t\tRs: 250.00(vegetable)\n");
    printf("\t\t_____________________________________________________________\n\n");
    // Get orders
    int oid1,oid2,qt1,qt2;
    char opt,type1,type2;
    char fname[20],lname[20];

    printf("Enter your first name: ");
    scanf("%s",&fname);
    printf("Enter your last name : ");
    scanf("%s",&lname);
    printf("\n\n");


    printf("\t\t\t\t\t ~Orders~\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("Hi %s %s ,\n\n",fname,lname);
    printf("\tEnter the order Id: ");
    scanf("%d",&oid1);
    printf("\n");
    printf("\tVegetable or Chicken? v/c :");
    scanf(" %c",&type1);
    printf("\n");
    printf("\tEnter the quantity: ");
    scanf("%d",&qt1);
    printf("\n");

    printf("\tAre there other orders? y/n: ");
    scanf(" %c",&opt);
    printf("\n");

    if(opt=='y')
    {
        printf("\tEnter the order Id: ");
        scanf("%d",&oid2);
        printf("\n");
        printf("\tVegetable or Chicken? v/c :");
        scanf(" %c",&type2);
        printf("\n");
        printf("\tEnter the quantity: ");
        scanf("%d",&qt2);
        printf("\n");
    }
    else
    {
        printf(" \n");
    }
    printf("\t\t\t\t ~Keth Sisila Hotel~\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    int price1,price2;
    if(oid1==01)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",2000*qt1);
            price1=2000*qt1;
        }
        else
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",1800*qt1);
            price1=1800*qt1;
        }

    }
    if(oid1==02)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",450*qt1);
            price1=450*qt1;
        }
        else
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",400*qt1);
            price1=400*qt1;
        }

    }
    if(oid1==03)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",300*qt1);
            price1=300*qt1;
        }
        else
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",270*qt1);
            price1=270*qt1;
        }

    }
    if(oid1==04)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",300*qt1);
            price1=300*qt1;
        }
        else
        {
            printf("\n\t\tOrder 01\n");
            printf("\n\tYour price is RS: %d\n",250*qt1);
            price1=250*qt1;
        }

    }
    if(oid2==01)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",2000*qt2);
            price2=2000*qt2;
        }
        else
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",1800*qt2);
            price2=1800*qt2;
        }

    }
    if(oid2==02)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",450*qt2);
            price2=450*qt2;
        }
        else
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",400*qt2);
            price2=400*qt2;
        }

    }
    if(oid2==03)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",300*qt2);
            price2=300*qt2;
        }
        else
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",270*qt2);
            price2=270*qt2;
        }

    }
    if(oid2==04)
    {
        if(type1=='c')
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",300*qt2);
            price2=300*qt2;
        }
        else
        {
            printf("\n\t\tOrder 02\n");
            printf("\n\tYour price is RS: %d",250*qt2);
            price2=250*qt2;
        }

    }
    printf("\n__________________________________________________\n\n\n");

    printf("\t\t\t\t ~Keth Sisila Hotel~\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("\tCustomer: %s %s\n\n",fname,lname);
    printf("\tOrder 01 Rs: %d.00\n",price1);
    if(opt=='y')
    printf("\tOrder 02 Rs: %d.00\n",price2);
    if(opt=='n')
    {
    price2=0000;
    printf("\tOrder 02 Rs: %d.00\n",price2);
    }
    printf("\t        ____________\n");
    printf("\tTotal    Rs: %d.00\n",price1+price2);
    printf("\t        ============\n\n\n");

    printf("Special star points offer for any 100 rupees deal\n\n");
    printf("Your star points balance is %d stars\n\n\n",(price1+price2)/100);



    printf("\t\t Thank you Stay with us \n \t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");


}
