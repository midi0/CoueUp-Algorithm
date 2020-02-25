#include <stdio.h>

//선택 정렬 알고리즘 


// 데이터의 수가 늘어날수록 반복 횟수가 늘어나기에 비효율적이다. 
int main(void){
	int i, j, min, index, temp;
	
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i=0; i<10; i++){
		min = 9999;
		
		for(j = i; j < 10; j++){
			// 배열의 최소 값과 인덱스를 찾아준 후 
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
		// 위에서 찾은 최소값과 인덱스를 배열의 처음과 교환해준다 
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
} 


