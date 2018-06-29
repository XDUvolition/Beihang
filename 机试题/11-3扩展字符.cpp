#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	cin>>str;
	int len=str.length();//获取字符串的长度
//	cout<<len<<endl;
	string c1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string c2="abcdefghijklmnopqrstuvwxyz";
	string num="0123456789";
	while(str.find("-")!=-1){
		int i=str.find("-");
		if(str[i-1]>='a' && str[i-1]<='z' && str[i+1]>='a' && str[i+1]<='z' && str[i+1]>=str[i-1]  ){
			int n=str[i+1]-str[i-1]-1;//要扩展的字符的个数
			string sub=c2.substr(str[i-1]-'a'+1,n);	
			str.replace(i,1,sub);
			
		}else if(str[i-1]>='A' && str[i-1]<='Z' && str[i+1]>='A' && str[i+1]<='Z' && str[i+1]>=str[i-1]) {
			
			int n=str[i+1]-str[i-1]-1;//要扩展的字符的个数
			string sub=c1.substr(str[i-1]-'A'+1,n);	
			str.replace(i,1,sub);
			
		}else if(str[i-1]>='0' && str[i-1]<='9' && str[i+1]>='0' && str[i+1]<='9' && str[i+1]>=str[i-1]){
			
			int n=str[i+1]-str[i-1]-1;//要扩展的字符的个数
			string sub=num.substr(str[i-1]-'0'+1,n);	
			str.replace(i,1,sub);
			
		}	
	}		
	cout<<str; 
	return 0;
}
