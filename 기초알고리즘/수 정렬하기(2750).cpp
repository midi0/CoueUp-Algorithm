#include <stdio.h>

/* 
���� 
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����.
��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����.
�� ���� ������ 1,000���� �۰ų� ���� �����̴�.
���� �ߺ����� �ʴ´�. 

���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�. 
*/
int array[1001];

int main(void){
	int number, i, j, min, index, temp;
	scanf("%d", &number);
	for(i = 0; i<number; i++){
		scanf("%d", &array[i]);
	}
	for(i = 0; i<number; i++){
		min = 1001; // ������ 1000 ���ϱ� ������ 1001�� ����
		for(j=i; j<number; j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		} 
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i=0; i<number; i++){
		printf("%d\n", array[i]);
	}
	
	return 0;
}
