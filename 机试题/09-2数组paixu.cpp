#include<stdio.h>
int main(){
	int len;
	while(scanf("%d",&len)==1){
		int a[len];
		int b[len];
		for(int i=0;i<len;i++){
			scanf("%d",&a[i]);
		}
		int tmp;
		int len1=len;
		for(int i=0;i<len;i++){
			b[i]=a[i];
		}
		for(int i=0;i<len-1;i++){
			for(int j=i+1;j<len;j++){
				if(a[i]>a[j]){
					tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}				
			}
		}
		
		//去重处理
		for(int i=0;i<len-1;i++){
			for(int j=i+1;j<len;j++){
				if(a[i]==a[j]){
					for(int k=j;k<len-1;k++){
						a[k]=a[k+1];
					}
					len--;
				}
			}
		} 
		
		
		for(int i=0;i<len1;i++){
			for(int j=0;j<len;j++){
				if(b[i]==a[j]) {
					printf("%d ",j+1);
					break;
				}
			}
		}	
		printf("\n");s
		
		
	}
	return 0;
}
