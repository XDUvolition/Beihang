#include<stdio.h>

int compute(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		if(num%i == 0){
			sum+=i;
		}
	}
	return sum;
}

int main(){
	int M,N;
	while(scanf("%d %d",&M,&N)==2){
		int flag=0;
		for(int i=M;i<N-1;i++){
			for(int j=i+1;j<N;j++){
				if(compute(i)==j && compute(j)==i){
					flag++;
					printf("%d %d\n",i,j);
				}	
			}
		}
		if(flag==0){
			printf("NONE\n");
		}
	}
	return 0;
}
