/*
第三题，给出一个标准输入的正数（开头末尾没有多余的0），输出其科学计数法表示结果。
比如：输入0.000002，输出2e-6；输入123.456，输出1.23456e2；输入123456，输出1.23456e2
*/

#include<stdio.h>
#include<string.h>
#define N 100
int main(){
	//思路：将数字转换成字符串，将问题转换为字符串的处理
	char num[N];
	int point=0;
	int first;
	scanf("%s",num); 
//	fgets(num,sizeof(num),stdin); //字符串的末尾会多一个换行符 
	int len=strlen(num);
	num[len]='.';
	for(int i=0;i<len;i++){
		if(num[i]=='.'){
			point=i;//记录下小数点的位置 
			break; 
		}
		point=len;   //  1234. 
	}
	
	for(int i=0;i<len;i++){
		//找到第一个非零的数字
		if(num[i]!='0' && num[i]!='.'){
			first=i;
			break;
		} 
	} 
	
	if(point<first){//小于1  0.0001
		if(first==(len-1)){
			printf("%ce%d",num[first],point-first);
		}else{
			printf("%c",num[first]);
			printf("%c",num[point]);
			for(int i=first+1;i<len;i++){
				printf("%c",num[i]);
			}
			printf("e%d",point-first);
		}
	
	}else{
		if(point==1){ //123.123
			printf("%ce0",num[first]);
		}else{
			printf("%c",num[first]);
			printf("%c",num[point]);
			for(int i=first+1;i<len;i++){
				if(num[i]!=num[point]){
					printf("%c",num[i]);
				}
			}
			printf("e%d",point-1);
		}
		
	} 	
	return 0;
} 
