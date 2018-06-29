#include<stdio.h>
int main(){
	int n;
	int a[9][9],b[9][9],tmp[9][9];
	while(scanf("%d",&n)==1){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&b[i][j]);
			}
		}
		//先判断是否是0度旋转
		int flag=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]!=b[i][j]){
					flag++;
					break;
				}
			}
		}
		if(flag!=0){
			flag=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					tmp[j][n-i-1]=b[i][j];
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(a[i][j]!=tmp[i][j]){
						flag++;
						break;
					}
				}
			}
			if(flag!=0){
				flag=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						tmp[n-1-i][n-1-j] =b[i][j];
					}
				}
				for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						if(a[i][j]!=tmp[i][j]){
							flag++;
							break;
						}
					}
				}
				if(flag!=0){
					flag=0;
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							tmp[n-1-j][i] =b[i][j];
						}
					}
					for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
							if(a[i][j]!=tmp[i][j]){
								flag++;
								break;
							}
						}
					}
					if(flag!=0){
						printf("-1\n");
					}else{
						printf("270\n");
					}
				}else{
					printf("180\n");
				}	
				
			}else{
				printf("90\n");
			}
			
		}else{
			printf("0\n");
		}
		 
	}
	return 0;
}
