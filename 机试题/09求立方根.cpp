#include<stdio.h>


int main(){
	int n;
	double x;
	
	scanf("%lf%d",&x,&n);
	double y=x;
	for(int i=0;i<n;i++){
		y=y*2/3+x/(3*y*y);
	} 
	printf("%.6f",y);
	return 0;
} 

