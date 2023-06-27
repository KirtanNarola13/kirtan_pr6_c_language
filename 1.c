#include<stdio.h>

void main (){
	char a[100];
	char b[100];
	int i,j,count=0;
	
	printf("enter name : ");
	scanf("%s",&a);
	
	
	for(i=0;a[count]!='\0';i++){
		count++;
	}
	j=count-1;
	
	
	if(a[count-2]==a[count-j]){
		printf("Word is palindrome");
	}
	else{
		printf("Word is not palindrome");
	}
}
