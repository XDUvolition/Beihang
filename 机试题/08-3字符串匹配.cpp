#include<stdio.h>
#include<string.h> 
#define SIZE 512
int main(){
	FILE* fp;
	char buffer[SIZE];
	fp=fopen("C:\\Users\\sjb\\Desktop\\string.in.txt","r");
	char ms[SIZE];
	scanf("%s",ms);
	int lens=strlen(ms); //数组中的元素个数 
//	printf("%d\n",lens);
	int flag=0;
	while(fgets(buffer,SIZE,fp)!=NULL){
		int len=strlen(buffer);
		for(int i=0;i<lens;i++){
			if(ms[i]!='['){
				if(ms[i]==buffer[j++]){
					continue;
				}
				else{
					flag++;
				}
			}	
		}
	}
	return 0;
}
