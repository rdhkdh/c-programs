#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//Uncomment the below global variables as per requirement according to the slides

char acc_num[20];               //variable to create database file name using the account number
char acc_holder_name[50];
float net_blnc=0.0;
char acc_no[20];                //variable to store the account number

char choice;					//variable to store the opted choice of bank service
float amt;						//Variable to deposit the amount
float cred,deb,trans_bal;
int accnt_exists=0;					//variable to check for the availability of user fed account in the already stored data
int proceed=0;					//dummy variable to capture the user input for clear screen confirmation
FILE * file ;


void create_account();
//int get_accnt_indx();
//void account_info();
//void deposit();
//void withdraw();
//void passbook();

void main(){

	while(1)
		{
			system ("CLS");
			printf("****************************************************\n");
			printf("\n\n				||Bank of Cs||	\n\n");
			printf("****************************************************\n");
			printf("Please choose the desired service number:\n");
			printf("1.Account creation\n");
			printf("2.Account information\n");
			printf("3.Deposit amount\n");
			printf("4.Withdraw amount\n");
			printf("5.Access Passbook\n\n");
			printf("Enter any number to return to the main menu from elsewhere\n");
			scanf(" %c",&choice);

			switch(choice){
				case '1':	system ("CLS");
//							create_account();
							break;

				case '2': 	system ("CLS");
//							accnt_exists=get_accnt_indx();
							if(accnt_exists)
//								account_info();
							break;

				case '3':	system ("CLS");
//							accnt_exists=get_accnt_indx();
							if(accnt_exists)
//								deposit();
							break;
				case '4':	system ("CLS");
//							accnt_exists=get_accnt_indx();
							if(accnt_exists)
//								withdraw();
							break;


				case '5':	system ("CLS");
//							accnt_exists=get_accnt_indx();
							if(accnt_exists)
								{
									system ("CLS");
//									passbook();
								}
							break;

				default:	printf("Invalid choice\n");
							printf("Enter any number to continue\n");
							scanf("%d",&proceed);
							break;

			} //end of switch case
		}//end of while loop

}//end of main


//Modules to be pasted below

//Paste the "create_account" module here
void create_account()
{

    printf("Please enter the following details:\n");
    printf("Account number:\n");
    scanf("%s", acc_num);
    strcat(acc_num, ".dat");
    printf("Account holder's name:\n");
    scanf("%s",acc_holder_name);
    file = fopen(acc_num, "a");
    if (file)
    {

		fprintf(file,"%s\n",acc_holder_name);
	   	fprintf(file,"0.0 \t \t 0.0 \t \t 0.0\n",amt,net_blnc);
		printf("Account created successfuly!\n");
		fclose(file);
    }
    else
    {
           printf("Sorry, could not create account.");
    }
    printf("Enter any number to continue\n");
    scanf("%d",&proceed);
}


//Paste the "get_accnt_indx" module here


//Paste the "account_info" module here


//Paste the "deposit" module here


//Paste the "withdraw" module here


//Paste the "passbook" module here
