#include<iostream>
using namespace std;
bool isSuShu(int num){
	if(num%10==1){
		for(int i=2;i<num;i++){
		if(num % i ==0) return false;
		}
		return true;	
	}else{
		return false;
	}
	
}
int main(){
	int num;
	int flag=0;
	while((scanf("%d",&num))!=EOF){
		for(int i=2;i<=num;i++){
			if(isSuShu(i))
			{
				cout<<i<<" ";
				flag++;
			}
		}
		if(flag!=0) cout<<endl;
		if(flag==0) cout<<"-1"<<endl;
	}
	return 0;
} 
