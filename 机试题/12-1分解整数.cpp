//(m+n)(n-m+1)/2
#include<stdio.h>
int main(){
	int N;
	int flag=0;
	while(scanf("%d",&N)==1){
		for(int m=1;m<N-1;m++){
			for(int n=m+1;n<N;n++){
				int tmp=(m+n)*(n-m+1)/2;
				if(N==tmp){
					flag++;
					for(int i=m;i<=n;i++){
						printf("%d ",i);
					}
					printf("\n");
				}
			}
		}
		if(flag==0){
			printf("None\n");
		}
	}
	return 0;
}
