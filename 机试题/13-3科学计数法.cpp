/*
�����⣬����һ����׼�������������ͷĩβû�ж����0����������ѧ��������ʾ�����
���磺����0.000002�����2e-6������123.456�����1.23456e2������123456�����1.23456e2
*/

#include<stdio.h>
#include<string.h>
#define N 100
int main(){
	//˼·��������ת�����ַ�����������ת��Ϊ�ַ����Ĵ���
	char num[N];
	int point=0;
	int first;
	scanf("%s",num); 
//	fgets(num,sizeof(num),stdin); //�ַ�����ĩβ���һ�����з� 
	int len=strlen(num);
	num[len]='.';
	for(int i=0;i<len;i++){
		if(num[i]=='.'){
			point=i;//��¼��С�����λ�� 
			break; 
		}
		point=len;   //  1234. 
	}
	
	for(int i=0;i<len;i++){
		//�ҵ���һ�����������
		if(num[i]!='0' && num[i]!='.'){
			first=i;
			break;
		} 
	} 
	
	if(point<first){//С��1  0.0001
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
