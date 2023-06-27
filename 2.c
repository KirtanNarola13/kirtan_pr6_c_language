#include<stdio.h>

void main (){
	char a[100];
	printf("ENter word : ");
	scanf("%s",&a);
	int count=0,i,f;
	int j;
	for(i=0;a[count]!='\0';i++){
		count++;
	}
	for(i=0;i<count;i++){
		if(count==a[i]){
			f+=1;
		}
		else{
			f=1;
		}
		printf("%c => %d\n",a[i],f);
	}
}