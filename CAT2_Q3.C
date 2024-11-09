//Program that request user to hours worked
/*
Name: MWENDWA ELOSSY SIMON
Reg no: CT101/G/21429/24
*/
#include<stdio.h>
int main(){
	float hoursworked,hourlywage,grosspay,overtime pay,taxes,netpay;
	
	printf("enter hoursworked:");
	scanf("%f",&hoursworked);
	printf("enter hourlywage:");
	scanf("%f",&hourlywage);
	
	if(hoursworked<=40){
	grosspay=hoursworked*hourlywage;
	}else{
		grosspay=(40*hourlywage)+(hoursworked-40)*(1.5*hourlywage);
	}
	if(grosspay<=600){
	taxes=0.15*grosspay;
		}else{
			taxes=(0.15*600)+(grosspay-600)*0.20;
		}
		
		netpay=grosspay-taxes;
		printf("grosspay:%.2f\n",grosspay);
		printf("taxes:%.2f\n",taxes);
		printf("netpay:%.2f\n",netpay);
		
	return 0;
}
