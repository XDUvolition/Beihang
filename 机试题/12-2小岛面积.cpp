#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int a[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int num=0;
	int m,n;
	int flag=0;
	for(int i=1;i<N-1;i++){
		for(int j=1;j<N-1;j++){
			flag=0; 
			//判断a[i][j]的上下左右是否有1
			if(a[i][j]==0){
				m=i;
				n=j;
				for(int t=m-1;t>=0;t--){
					if(a[t][n]==0){
						continue;
					}else{
						flag++;
						break;
					}
				}
				if(flag==0) continue;
				
				for(int t=m+1;t<N;t++){
					if(a[t][n]==1){
						flag++;
						break;
					}
				}
				
				if(flag==1 ) continue;
				
				for(int t=n-1;t>=0;t--){
					if(a[m][t]==1){
						flag++;
						break;
					}
				}
				
				if(flag==2) continue;
				
				for(int t=n+1;t<N;t++){
					if(a[m][t]==1){
						flag++;
						break;
					}
				}
				
				if(flag==3) continue;
				
				num++;
				
			} 
		}
	}
	printf("%d\n",num);
	
	return 0;
}
