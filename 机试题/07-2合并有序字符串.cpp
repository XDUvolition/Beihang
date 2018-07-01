#include<stdio.h>
#include<string.h> 
#define SIZE 512
int main(){
	char buff1[SIZE];
	char buff2[SIZE];
	scanf("%s",buff1);
	scanf("%s",buff2);
	int len1=strlen(buff1);
	int len2=strlen(buff2);
	for(int i=0;i<len1;i++){
		for(int j=0;j<len2;j++){
			if(buff1[i]==buff2[j]){
				for(int k=j;k<len2-1;k++){
					buff2[k]=buff2[k+1];
				}
				len2--;
			}
		}
	}
	char buff[SIZE];
	buff1[len1]='{';
	buff2[len2]='{';
	int t=0,m=0,n=0;
	for(t=0;t<len1+len2;t++){
		if(buff1[m]<buff2[n]){
			buff[t]=buff1[m];
			m++;
		}else{
			buff[t]=buff2[n];
			n++;
		}
	}	
	
	printf("%s\n",buff);
//	for(int i=0;i<len2;i++){
//		printf("%c",buff2[i]);
//	} 
	return 0;
} 
