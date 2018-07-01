#include<stdio.h>
#include<string.h>
#define SIZE 512
int main(){
	char buff[SIZE];
	char ch=getchar();
	int i=0;
	while(ch!='\\'){
		buff[i++]=ch;
		ch=getchar();
	}
	buff[i]='\0';
	int space=0,tab=0,enter=0;
	for(int i=0;i<strlen(buff);i++){
		if(buff[i]=='\t'){
			tab++;
		}else if(buff[i]=='\n'){
			enter++;
		}else if(buff[i]==' '){
			space++;
		}
	}
	printf("%d %d %d\n",space,enter,tab);
	return 0;
}
