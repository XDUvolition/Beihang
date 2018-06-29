#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b); //输入被替换矩阵的长和宽
	int old[a+1][b+1];
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			scanf("%d",&old[i][j]);//初始化old矩阵 
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
	scanf("%d %d",&row,&col);//old矩阵被替换的子矩阵的左上角的位置
	
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
