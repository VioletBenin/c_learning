#include <stdio.h>
/* ��fahr= 0, 20,,,, 300ʱ,�ֱ�
��ӡ���϶������϶ȶ��ձ� 
�������汾
######
c���Ե�������������
char  �ַ�,һ�����ֽ�
short  ������
long   ������
double ˫���ȸ�����*/
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;   /*�¶ȱ�����*/
	upper = 300;   /*�¶ȱ�����*/
	step = 20;  /*����*/
	
	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t %6.1f\n", fahr, celsius);
		/*
		%d   ����ʮ����������ӡ
		%6d  ����ʮ����������ӡ,����6�ַ���
		%f   ���ո�������ӡ
		%6f  ���ո�������ӡ,����6�ַ���
		%.2f ���ո�������ӡ,С���������λС�� 
		*/
		fahr = fahr + step;
	} 
 } 
