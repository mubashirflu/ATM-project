#include<stdio.h>
#include<conio.h>

int main()
{
	int Welcome_to_Bank_Al_habib_ATM;
	printf("Welcome_to_Bank_Al_habib_ATM\n");
	int enter_the_pin,choose_option,enter_your_with_draw_amount,enter_mini_statment,transfer_payment,check_balance;
	int balance=10000000;
	printf("enter_the_pin \n");
	scanf("%d",&enter_the_pin);
	if(enter_the_pin==6969)
	{
		printf(" choose_option\npress_1_for_check_balance\n");
		printf("press_2_enter_your_with_draw_amount\npress_3_transfer_Payment\npress_4_enter_mini_statment\n");
		scanf("%d",&choose_option);
		switch(choose_option){
		case 1:
			printf("you_current_balance_is(10000000)\n");
			break;
			case 2:
				printf("enter_your_with_draw_amount\n");
				scanf("%d",&enter_your_with_draw_amount);
				balance-=enter_your_with_draw_amount;
				printf("you_have_successfuly_with_amount is\n your_balance_is %d\n",enter_your_with_draw_amount);
				break ;
				case 3:
					printf("transfer_payment\n");
					scanf("%d",&transfer_payment);
					balance-=transfer_payment;
					printf("you_have_successfully_transfer_payment\n your_balance_is%d\n",transfer_payment,balance);
					break;
					case 4:
						printf("enter_mini_statment\n");
						scanf("%d",enter_mini_statment);
						break;
						default:
						printf("Error! Wrong_input\n");
						}
}
	
	else{
		printf("wrong_pin");
	}
	getch();
}