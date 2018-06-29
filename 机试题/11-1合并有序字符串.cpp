#include<iostream>
using namespace std;
int main(){
	string str1,str2;
	scanf("%s,%s",&str1,&str2);
	int len1=str1.length(),len2=str2.length();
	string str;
	int len=len1+len2;
	for(int i=0;i<len;i++){
		if(str1[i]<str2[i] && i<len1)
			str[i]=str1[i];
			i++;
		}else if(str1[i]>=str2[i] && i<len2){
			str[i]=str2[i];
			i++;
		}
	}
	return 0;
}
