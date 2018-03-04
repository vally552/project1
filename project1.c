#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void new_acc(void);
void transact(void);
void modify(void);
void see(void);
void erase(void);
void edit(void);
void view_list(void);
void menu(void);
void delete(void);
void displayoptions(void);
int main_exit;
int i,j;
struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;
 main()
{
	welcome();
	login();
	menu();
}
int welcome()
{
	printf("         ====================================================================");
   printf("                         *********************************                      ");
   printf("                         =================================                      ");
   printf("                         *********************************                      ");
   printf("                         ^       WELCOME TO              *                      ");
   printf("                         ^                               *                      ");
   printf("                         ^                               *                      ");
   printf("                         ^      CUSTOMER ACCOUNT         *                      ");
   printf("                         ^                               *                      ");
   printf("                         ^                               *                      ");
   printf("                         ^      BANK LIMITED             *                      ");
   printf("                         >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                      ");
   printf("           ==================================================================");
   printf("\n\n\n\n\t\tEnter any key to continue.....");
}
void menu(void)
{   int choice;
    system("cls");
    system("color 70");
    printf("\n\t\t\t=====================================================");
    printf("\n\n\t\t\t\twelcome to sbi");
    printf("\n\t\t\t=====================================================");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t1.Add new account.\n");
    printf("\t\t\t2.Modify account\n");
    printf("\t\t\t3.Transactions.\n");
    printf("\t\t\t4.Check the details of existing account.\n");
    printf("\t\t\t5.Deleting account.\n");
    printf("\t\t\t6.View.\n");
    printf("\t\t\t7.Exit.\n");
    printf("\n\n\n\n\n\t\t Enter your choice[1-7]:");
    scanf("%d",&choice);

    system("cls");
    switch(choice)
    {
        case 1:new_acc();
        break;
        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:close();
        break;

    }

}
int login()
{
    system("cls");
	char pass[10],password[10]="tom";
	printf("\n\n\t\tEnter the password to login:");
    scanf("%s",pass);
    if (strcmp(pass,password)==0)
        {
		printf("\n\n\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2Password Match! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\t\nLOADING");
    
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
           if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
             else
                    {
					printf("\nInvalid!");
                    system("cls");
                    goto login_try;
					}
        }
        return 0;
}
 float interest(float t,float amount,int rate)
 {
    float SI;
    SI=(rate*t*amount)/100.0;
    return (SI);

}

void new_acc()

{
    int choice;
       account_no:
    system("cls");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\nEnter the account number:");
    scanf("%d",&check.acc_no);
           if (check.acc_no==add.acc_no)
            {
			 printf("Account no. already in use!");
                goto account_no;

            }
   
    add.acc_no=check.acc_no;
        printf("\nEnter the name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the address:");
    scanf("%s",add.address);
    printf("\nEnter the citizenship number:");
    scanf("%s",add.citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the amount to deposit:$");
    scanf("%d",&add.amt);
    printf("\nType of account:\n\t1.Saving\n\t2.Current\n\t3.Fixed1(for 1 year)\n\t4.Fixed2(for 2 years)\n\t5.Fixed3(for 3 years)\n\n\tEnter your choice[1-5]:");
    scanf("%s",add.acc_type);

        printf("%d %s %d/%d/%d %d %s %s %f %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);


    
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
void view_list()
{
        int test=0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

              printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
           test++;
       

    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            close();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }
}
void edit(void)
{
    int choice,test=0;
    printf("\nEnter the account no. of the customer whose info you want to change:");
    scanf("%d",&upd.acc_no);
        if (add.acc_no==upd.acc_no)
        {   test=1;
            printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n\nEnter your choice(1 for address and 2 for phone):");
            scanf("%d",&choice);
            system("cls");
            if(choice==1)
                {printf("Enter the new address:");
                scanf("%s",upd.address);
                system("cls");
                printf("Changes saved!");
                }
            else if(choice==2)
                {
                    printf("Enter the new phone number:");
                scanf("%lf",&upd.phone);
                system("cls");
                printf("Changes saved!");
                }

        }
       else
         {
         	printf("hai");
		 }
if(test!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            edit_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)

                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    edit();
                else
                    {printf("\nInvalid!\a");
                    goto edit_invalid;}
        }
    else
        {
		 printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
         scanf("%d",&main_exit);
         system("cls");
         if (main_exit==1)
            menu();
         else
            close();
        }
}

void transact(void)
{  
     int choice,test=0;
        printf("Enter the account no. of the customer:");
    scanf("%d",&transaction.acc_no);
            if(add.acc_no==transaction.acc_no)
            {   test=1;
                if(strcmpi(add.acc_type,"fixed1")==0||strcmpi(add.acc_type,"fixed2")==0||strcmpi(add.acc_type,"fixed3")==0)
                {
                    printf("\a\a\a\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                    
                    system("cls");
                    menu();

                }
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d",&choice);
                if (choice==1)
                {
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt+=transaction.amt;
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt-=transaction.amt;
                    printf("\n\nWithdrawn successfully!");
                }

            }
            else
            {
            printf("once check ur details");
            }
   if(test!=1)
   {
       printf("\n\nRecord not found!!");
       transact_invalid:
      printf("\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
      scanf("%d",&main_exit);
      system("cls");
      if (main_exit==0)
        transact();
    else if (main_exit==1)
        menu();
    else if (main_exit==2)
        close();
    else
    {
        printf("\nInvalid!");
        goto transact_invalid;
    }

   }
   else
   {
       printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
   }

}
void erase(void)
{
    int test=0;
    printf("Enter the account no. of the customer you want to delete:");
    scanf("%d",&rem.acc_no);
        if(add.acc_no!=rem.acc_no)
        {
        	printf("we cant find record");
		}
        else
            {
			test++;
            printf("\nRecord deleted successfully!\n");
            }
   if(test==0)
        {
            printf("\nRecord not found!!\a\a\a");
            erase_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);

                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    erase();
                else
                    {printf("\nInvalid!\a");
                    goto erase_invalid;}
        }
    else
        {
		 printf("\nEnter 1 to go to the main menu and 0 to exit:");
         scanf("%d",&main_exit);
         system("cls");
         if (main_exit==1)
            menu();
         else
            close();
        }

}
void see(void)
{
    int test=0,rate;
    int choice;
    float time;
    float intrst;
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {   printf("Enter the account number:");
        scanf("%d",&check.acc_no);
            if(add.acc_no==check.acc_no)
            {   system("cls");
                test=1;
                printf("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$ %.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
             if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {
                        printf("\n\nYou will get no interest\a\a");
                     }
            }
    }
    else if (choice==2)
    {   printf("Enter the name:");
        scanf("%s",&check.name);
            if(strcmpi(add.name,check.name)==0)
            {   system("cls");
                test=1;
                printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$%.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {
                        printf("\n\nYou will get no interest\a\a");
                     }
            }
    }
     if(test!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    see();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {
             system("cls");
            close();
            }
}


