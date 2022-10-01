//"create_account" module
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

//"get_accnt_indx" module
int get_accnt_indx()
{
	printf("Enter your account number.\n");
	scanf("%s",&acc_no);
	strncpy(acc_num, acc_no,sizeof(acc_num));
	strcat(acc_num, ".dat");
	file = fopen(acc_num, "r");
	if(file)
	{
		fclose(file);
		return 1;
	}
	else
	{
		printf("Sorry, this account doesn't exist.\n");
		printf("Enter any number to continue\n");
		scanf("%d",&proceed);
		return 0;
	}

}

//"account_info" module
void account_info()
{
	file = fopen(acc_num, "r");
	if (file)
	{
    	printf("Account number: %s\n",acc_no);
		fscanf(file, "%s", acc_holder_name);
	    printf("Account holder's name: %s\n",acc_holder_name);
		while(fscanf(file, "%f", &net_blnc)==1)
			{

			}
		printf("Account balance: %.2f\n",net_blnc);
		fclose(file);

    }
    else
    {
    	printf("error accessing account");
	}

    printf("Enter any number to continue\n");
	scanf("%d",&proceed);

}

//"deposit" module
void deposit()
{

	printf("Enter the amount to be deposited\n");
	scanf("%f",&amt);
	if(amt<0)
	{
		printf("INCORRECT ENTRY : Entered deposit amount is negative\n");
		printf("Balance not updated\n");
		printf("********************\n");
	}
	else
	{
		file = fopen(acc_num,"r");
		if(file)
		{
			fscanf(file, "%s", acc_holder_name);
			while(fscanf(file, "%f", &net_blnc)==1)			//fetching balance
			{


			}
			fclose(file);

			file = fopen(acc_num,"a");
			if(file)
			{
				net_blnc+=amt;																//balance update
				fprintf(file,"0.0 \t \t %0.2f \t \t %0.2f\n",amt,net_blnc);
			   	fclose(file);
				printf("Amount deposited %.2f\nUpdated balance: %.2f\n",amt,net_blnc);
				printf("********************\n");
			}
			else
				printf("Could not update the record!!");
		}
		else
			printf("Could not retrieve the data!!");


	}
	printf("Enter any number to continue\n");
	scanf("%d",&proceed);

}

//"withdraw" module
void withdraw()
{
	file = fopen(acc_num,"r");
	if(file)
	{
		fscanf(file, "%s", acc_holder_name);
		while(fscanf(file, "%f", &net_blnc)==1)			//fetching balance
		{


		}
		fclose(file);

		if(net_blnc<=0)
		{
			printf("Low balance. Can not withdraw\n");

		}
		else
		{
			printf("Enter the amount to be withdrawn\n");
			scanf("%f",&amt);
			if(amt<0)
			{
				printf("The amount can't be withdrawn in negative\n");
				printf("********************\n");
			}//end of if condition
			else if(amt>net_blnc)
			{
				printf("Insufficient balance\n");
				printf("********************\n");

			}//end of else if condition
			else
			{
				net_blnc-=amt;
				file = fopen(acc_num,"a");
				if(file)
				{
					fprintf(file,"%0.2f \t \t 0.0 \t \t %0.2f\n",amt,net_blnc);
				   	fclose(file);
					printf("Amount withdrawn: %0.2f\nUpdated balance: %0.2f\n",amt,net_blnc);
					printf("********************\n");
				}
				else
					printf("Could not update the record!!");
			}
		}
	}
	else
	{
		printf("Could not retrieve the data!!");
	}

	printf("Enter any number to continue\n");
	scanf("%d",&proceed);

}

//"passbook" module
void passbook()
{
	file = fopen(acc_num, "r");
	fscanf(file, "%s", acc_holder_name);
	printf("================================================\n");
	printf("\n\n \t\t||Bank of Cs||	\n");
	printf("A/c:%s \t\t\t Name:%s\n\n",acc_no,acc_holder_name);
	printf("________________________________________________\n");
	printf("DEBIT \t\t CREDIT \t BALANCE	\n");
	printf("________________________________________________\n");
	while(fscanf(file, "%f %f %f", &deb, &cred, &trans_bal)==3)			//fetching balance
			{
				printf("%0.2f \t\t %0.2f \t %0.2f\n", deb, cred, trans_bal);
				printf("------------------------------------------------\n");


			}
	printf("\n\n");
	printf("Enter any number to continue\n");
	scanf("%d",&proceed);

}

