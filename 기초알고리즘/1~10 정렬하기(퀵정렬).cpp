#include <stdio.h>
/*�� ����
�ð� ���⵵�� O(N * logN) ����
�־��� ��� O(N^2) �� �Ǽ� ��ȿ������ �� �� �� �ִ�. 
*/ 

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

//start�� ������ �����ϴ� �κ������� ù��°
//end�� �������� �ȴ� 
void quickSort(int *data, int start, int end){
	if(start >= end){// ���Ұ� 1���� ��� 
		return;
	}
	int key = start; //Ű�� ù��° ����(�ǹ���)
	int i = start + 1 ; // i�� ���ʺ��� ū ���� ã���� �ε����� �ǹ��Ѵ�.
	int j = end;
	int temp;
	
	while(i<=j){
		while( i <= end && data[i] <= data[key]){
			i++;
		}
		while( j > start && data[j] >= data[key]){
			j--;
		} 
		if(i > j){
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);	
} 

int main(void){
	quickSort(data, 0, number-1);
	for(int i =0; i < number; i++){
		printf("%d ", data[i]);
	}
	
	return 0; 
}
