#include <stdio.h>

int main(){
	float c;//摄氏度
	 
	printf("请输入摄氏度:55");
	scanf("%f",&c);//%f对应flaat,&不能忘
	
	float f=c*1.8+32;
	priintf ("%.2f摄氏度=%.2f华氏度\n",c,f);
	
	return 0;
} 
