#include <stdio.h> 

//데이터 수가 100만개, 시간제한은 1초이므로 퀵정렬을 써서 풀어야한다. 

int number, data[1000001];

void quickSort(int *data, int start, int end){
	if(start >= end){
		return;
	}
	int key = start;
	int i = start+1, j=end, temp;
	while(i<=j){
		while(data[i] <= data[key] && i <= end){
			i++;
		}
		while(data[j] >= data[key] && j > start){
			j--;
		}
		if(i>j){
			temp = data[j];
			data[j]=data[key];
			data[key]= temp;
		}else{
			temp =data[i];
			data[i]=data[j];
			data[j] = temp;
		}
	}
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}

int main(void){
	scanf("%d", &number);
	for(int i = 0; i<number; i++){
		scanf("%d", &data[i]);
	}
	quickSort(data, 0, number-1);
	 
	for(int i = 0; i<number; i++){
		printf("%d\n", data[i]);
	}
	return 0;
}
