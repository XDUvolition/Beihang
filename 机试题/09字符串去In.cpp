#include<stdio.h>
#include<string.h> 
#define SIZE 512
int main(){
	FILE *fp1,*fp2;
	char buffer[SIZE];
	char bufftmp[SIZE];
	fp1=fopen("C:\\Users\\sjb\\Desktop\\filein.txt","r");
	fp2=fopen("C:\\Users\\sjb\\Desktop\\fileout.txt","w");
	while(fgets(buffer,SIZE,fp1)!=NULL){
		int i=0;
		while(buffer[i]!='\n') {
			if(buffer[i]=='i' || buffer[i]=='I'){
				if(buffer[i+1]=='n' || buffer[i+1]=='N'){
					buffer[i]=' ';
					buffer[i+1]=' ';
				} 
			} 
			i++;
		}
		i=0;
		int j=0;
		memset(bufftmp,0,SIZE);
		while(buffer[i]!='\n'){
			if(buffer[i]!=' '){
				bufftmp[j++]=buffer[i];
			}
			i++;
		}
		bufftmp[j]='\n';
		printf("%s",bufftmp);
		fputs(bufftmp,fp2);
		memset(buffer,0,SIZE);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
