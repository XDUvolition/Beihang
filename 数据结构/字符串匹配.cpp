#include<stdio.h>
#include<string.h>
#define SIZE 512


int main(){
	char buffer[SIZE];
	char match[]="oul";
	int k=0,j=0,i=0;
	
	char ch=getchar();
	while(ch!='\n'){
		buffer[i++]=ch;
		ch=getchar();
	}
	
	for(i=0;i<strlen(buffer);i++){
		for(j=i,k=0;k<strlen(match);j++,k++){
			if(buffer[j]!=match[k]){
				break;
			} 
		}
		if(k==strlen(match) && j>0){
			printf("%s",buffer);
			break; //可能会有好几处匹配的位置 
		}
	}
	return 0;
}
