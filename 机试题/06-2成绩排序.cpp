#include<iostream>
#include<cstring>
using namespace std;
struct student{
	string name;
	double score;
};
int main(){
	int n;
	scanf("%d",&n);
	struct student stu[n];
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].score;
	}
	double tmp;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(stu[i].score>stu[j].score){
				tmp=stu[i].score;
				stu[i].score=stu[j].score;
				stu[j].score=tmp;
				stu[i].name.swap(stu[j].name);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<stu[i].name<<" "<<stu[i].score<<endl;
	}
	return 0;
}
