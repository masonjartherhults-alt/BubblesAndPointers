#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} 

void printValues(int* values){
  printf("[");
  for(int i = 0; i < MAX; i++){
    printf("%d ", values[i]);
  }
  printf("]\n");
}

void swap(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int* values){
  for(int i = 0; i < MAX -1; i++){
    for(int j = 0; j < MAX - 1; j++){
      if(values[j] > values[j + 1]){
        swap(&values[j], &values[j + 1]);
	printValues(values);
      }
    }
  }
}  
