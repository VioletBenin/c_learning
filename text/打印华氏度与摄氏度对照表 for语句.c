#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20  
/*
#define ���� �滻�ı� 
*/  
//��ӡ���϶��뻪�϶ȵĶ��ձ�
main()
{
	int fahr;
	
	for (
	fahr = LOWER;//��ʼ����ִ��һ�� 
	 fahr <= UPPER; //������������ 
	 fahr = fahr +STEP
	 )
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 } 
