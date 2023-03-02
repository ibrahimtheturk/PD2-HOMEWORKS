#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int d=1;
	int money=100;
	while (1){
		int bet,d;
	srand(time(NULL));
int a=rand()%4+1;
int b=rand()%4+1;
int c=rand()%4+1;
		printf("\n\nYou have %d$",money);
		printf("\nEnter your bet.\n");
		scanf("%d",&bet);
		if(bet>money){
			printf("You dont have enough money to do this.\n");
			return 0;}
			money=money-bet;
		printf("\033[0;31m");
	if(a==1) printf("\tK ");
	if(a==2) printf("\tJ ");
	if(a==3) printf("\tQ ");
	if(a==4) printf("\tA ");
	if(b==1) printf("\tK ");
	if(b==2) printf("\tJ ");
	if(b==3) printf("\tQ ");
	if(b==4) printf("\tA ");
	if(c==1) printf("\tK ");
	if(c==2) printf("\tJ ");
	if(c==3) printf("\tQ ");
	if(c==4) printf("\tA ");
	printf("\033[0m");
	printf("\033[0;33m");
	if(a==b && b==c){
		printf("\nJACKPOT! You won %d$",3*bet);
		money=money+bet*3;
	}
	if(a==b && b!=c){
		printf("\n2 same, you won %d$",2*bet);
		money=money+bet*2;
		;
	}
	if(a==c && b!=c){
		printf("\n2 same, you won %d$",2*bet);
		money=money+bet*2;
	}
	if(b==c && a!=c){
		printf("\n2 same, you won %d$",2*bet);
		money=money+bet*2;
	}
	if(b!=c && a!=c){
		 printf("\nYou lost %d$.",bet);
	}
	printf("\033[0m");
	}
	
}
