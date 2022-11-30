#include<stdio.h>
#include<math.h>

float function(float x){
	float snc;
	snc=(x*x*x)+(-7*x*x)+(14*x)-6;
	return snc;
}
int main(){	
	int sayac=0;
	float dene,dene2,bir,iki,ar1,ar2;
	printf("Birinci araligi giriniz: "); scanf("%f",&ar1);
	printf("Ikinci araligi giriniz: "); scanf("%f",&ar2);
	bir=function(ar1); // 0
	iki=function(ar2); // 1
	dene=(ar1+ar2)/2; //0.5
	
	while(sayac!=30){
		
		if((bir<0 and iki>0) or (bir>0 and iki<0)){
			printf("\nKoklerin araligi : %f %f ",ar1,ar2);
			if(function(dene)<0){
				ar1=dene;
				dene=(dene+ar2)/2;
			}
			else{
				ar2=dene;
				dene=(dene+ar1)/2;
			}
		}

		else{
		printf("\nKok kesinligi yoktur.");
		break;
		}
		sayac++;
	}
	
}

