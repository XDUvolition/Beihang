#include<stdio.h>
#define SIZE 512

void sort(int a[],int n){
	int tmp;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

bool set_same(int a[],int len1,int b[],int len2){
	if(len1!=len2){
		return 0;
	}else{
		for(int i=0;i<len1;i++){
			if(a[i]!=b[i]){
				return 0;
			}
		}
		return 1;
	}
}

int main(){
	int a[SIZE];
	int b[SIZE];
	int len1,len2;
	scanf("%d %d",&len1,&len2);
	for(int i=0;i<len1;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<len2;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<len1-1;i++){
		for(int j=i+1;j<len1;j++){
			if(a[i]==a[j]){
				for(int m=j;m<len1-1;m++){
					a[m]=a[m+1];
				}
				j--;
				len1--;
		}
		}
	}
	
	for(int i=0;i<len2-1;i++){
		for(int j=i+1;j<len2;j++){
			if(b[i]==b[j]){
				for(int m=j;m<len2-1;m++){
					b[m]=b[m+1];
				}
				j--;
				len2--;
			}
		}
	}
	
	sort(a,len1);
	sort(b,len2);
	
	int result=set_same(a,len1,b,len2);
	
	if(result){
		printf("相等\n");
	}else{
		printf("不相等\n");
	}
//	for(int i=0;i<len1;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	for(int i=0;i<len2;i++){
//		printf("%d ",b[i]);
//	}
	
	
	return 0;
}
