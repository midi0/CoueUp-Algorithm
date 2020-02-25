#include <stdio.h>
/*퀵 정렬
시간 복잡도가 O(N * logN) 지만
최악의 경우 O(N^2) 가 되서 비효율적이 될 수 가 있다. 
*/ 

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

//start는 정렬을 수행하는 부분집합의 첫번째
//end는 마지막이 된다 
void quickSort(int *data, int start, int end){
	if(start >= end){// 원소가 1개인 경우 
		return;
	}
	int key = start; //키는 첫번째 원소(피벗값)
	int i = start + 1 ; // i는 왼쪽부터 큰 값을 찾을때 인덱스를 의미한다.
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
