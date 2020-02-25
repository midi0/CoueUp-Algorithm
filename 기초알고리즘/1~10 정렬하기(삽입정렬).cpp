#include <stdio.h>
/*삽입 정렬

버블, 선택정렬과 O(N ^ N) 으로 시간 복잡도는 동일하지만
실제론 삽입정렬이 가장 연산 횟수가 적기에 세가지 중에선 제일 좋은 알고리즘이다 
거의 정렬된 상태의 배열의 경우  
 */
 

int main(void){
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i=0; i<9; i++){
		j=i; // 현재 정렬할 원소를 선택하여 적절한 위치에 삽입할 수 있게 해준다.  
		while(array[j]>array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	for(i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
