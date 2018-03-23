#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);
void printarr(int arr[], int size);

void IBubble(int arr[], int size);
void IBubbleSort(int arr[], int size);

int BubbleFlag(int arr[], int size);
void BubbleFlagSort(int arr[], int size);

int IndexOfMin(int arr[], int size);
void IndexOfMinSort(int arr[], int size);

void insert(int arr[], int index);
void InsertSort(int arr[], int size);

void merge(int a[], int an, int b[], int bn, int c[]);
void merge_sort(int a[], int n);
void m_sort(int a[], int n, int help_ar[]);

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr1[] = { 9,8,7,6,5,4 };
	int arr2[] = { 6,5,4,3,2,1 };
	int arr3[12];
	//merge(arr1, 6, arr2, 6, arr3);
	merge_sort(arr, 10);
	printarr(arr, 10);
	_getch();
	return 0;
}



void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarr(int arr[], int size)
{
	int i;
	for(i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	putch('\n');
}

void IBubble(int arr[], int size)
{
	int i;
	for(i = 1; i < size; ++i){
		if(arr[i - 1] > arr[i])
			swap(&arr[i - 1], &arr[i]);
		printf("%d: ", i);
		printarr(arr, size);
	}
}

void IBubbleSort(int arr[], int size)
{
	int i;
	for(i = 0; i < size-1; ++i){
		IBubble(arr, size - 1);
	}
}

int BubbleFlag(int arr[], int size)
{
	int i = 0, swapped = 0;;
	for(i = 1; i < size; ++i){
		if(arr[i - 1] > arr[i]){
			swapped = 1;
			swap(&arr[i - 1], &arr[i]);
			printf("%d: ", i);
			printarr(arr, size);
		}
	}
	return swapped;
}
void BubbleFlagSort(int arr[], int size)
{
	int flag = 1;
	while(flag)
		flag = BubbleFlag(arr, size);
}

int IndexOfMin(int arr[], int size)
{
	int i;
	int i_min = 0;
	for(i = 0; i  < size; ++i){
		if(arr[i_min] > arr[i])
			i_min = i;
	}
	return i_min;
}

void IndexOfMinSort(int arr[], int size)
{
	int i;
	for(i = 0; i < size;++i){
		swap(&arr[i+IndexOfMin(&arr[i],size - i)], &arr[i]);	//For that reason we do index max 
		printf("%d: ", i);
		printarr(arr, size);
	}
}

void insert(int arr[], int index)
{
	int i = index -1;
	int temp = arr[index];
	while(arr[i] > temp && i >=0){
		arr[i + 1] = arr[i];
		--i;
	}
	arr[i+1] = temp;
}

void InsertSort(int arr[], int size)
{
	int i;
	for(i = 1; i < size; ++i){
		insert(arr, i);
		printf("%d: ", i);
		printarr(arr, size);
	}
}

void merge(int a[], int an, int b[], int bn, int c[])
{
	int ia = 0, ib = 0, ic = 0;
	while((ia<an) && (ib<bn)){
		c[ic++] = (a[ia] < b[ib]) ? a[ia++] : b[ib++];
	}
	while(ia<an){
		c[ic++] = a[ia++];
	}
	while(ib<bn){
		c[ic++] = b[ib++];
	}
}
void merge_sort(int a[], int n)
{
	int *tmp_ar = (int *)malloc(sizeof(int) * n);
	if(tmp_ar == NULL)return 0;
	m_sort(a, n, tmp_ar);
	free(tmp_ar);
}
void m_sort(int a[], int n, int help_ar[])
{
	int left = n / 2, right = n - left;
	if(n<2) return;
	m_sort(a, left, help_ar);
	m_sort(a + left, right, help_ar);
	merge(a, left, a + left, right, help_ar);
	memcpy(a, help_ar, n * sizeof(int));
}