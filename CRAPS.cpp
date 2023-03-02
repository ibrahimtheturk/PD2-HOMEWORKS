#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i,sum,sum2;
	printf("Craps oyununa hosgeldiniz.\nKurallar:\niki zar atilir. zarlarin toplami hesaplanir.\n ilk atista:\n7 veya 11 gelirse oyuncu kazanir.\n2,3 veya 12 gelirse oyuncu kaybeder.\n4,5,6,8,9,10 gelirse bu oyuncunun puani olur.\noyuncu 7 atmadan kendi skorunu tutturmaya calisir.\noyuna baslamak icin 1'e basiniz.");
	srand(time(NULL));
	scanf("%d",&i);
	if (i-1==0){
		printf("\e[1;1H\e[2J");
		int a=rand()%6+1;
		int b=rand()%6+1;
		sum=a+b;
		printf("Birinci zar atiliyor: %d",a);
		printf("\nikinci zar atiliyor: %d",b);
		printf("\nZarlarin toplami: %d\n",sum);
		if(sum==7 || sum==11){
			printf("KAZANDINIZ!");
		}
		else if(sum==2 || sum==3 || sum==12){
			printf("Kaybettiniz.");
		}
		else {  
			while (sum2!=sum){
				printf("Puaniniz: %d\n\nskoru tutturmak icin tekrar zar atiliyor...\n",sum);
				a++;
			 a=rand()%6+1;
			int b=rand()%6+1;
			sum2=a+b;
			printf("Birinci zar: %d\nikinci zar: %d\nZarlarin toplami: %d\n",a,b,sum2);
			if(sum2==7){
				printf("7 attiniz ve oyunu kaybettiniz.");
				return 0;}
			else if(sum2==sum){
				printf("TEBRIKLER! Sayinizi tutturdunuz.");
				return 0;
			}
			}
			
		}
	}
	
}
