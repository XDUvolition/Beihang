#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b); //���뱻�滻����ĳ��Ϳ�
	int old[a+1][b+1];
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			scanf("%d",&old[i][j]);//��ʼ��old���� 
		}
	}
	int c,d;
	scanf("%d %d",&c,&d);
	int newarr[c+1][d+1] ;
	for(int i=1;i<=c;i++){
		for(int j=1;j<d+1;j++){
			scanf("%d",&newarr[i][j]);
		}
	}
	
	int row,col;
	scanf("%d %d",&row,&col);//old�����滻���Ӿ�������Ͻǵ�λ��
	
	for(int i=row;i<=a;i++){
		for(int j=col;j<=b;j++){
			old[i][j]=newarr[i-row+1][j-col+1];
		}
	} 
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			printf("%d ",old[i][j]);
		}
		printf("\n");
	} 
	
	return 0;
}
