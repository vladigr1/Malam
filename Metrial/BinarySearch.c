#include <stdio.h>
#include <conio.h>

void BinarySearch (int arr[],int size,int num);

int main ()
{
	int arrey[] = { 0,1,2,3,4,5,6,7,8};
	BinarySearch (arrey, 9, 6);
	_getch ();
	return 0;
}

void BinarySearch (int arr[],int size, int num)
{
	if(arr[0] == num){
		printf ("%d found\n",arr[0]);
		return;
	} 
	if(size == 1){
		printf ("%d\n", arr[0]);
		return;
	}
	if(arr[size / 2] > num){
		printf ("we are at %d which is bigger the %d\n",arr[0],num);
		BinarySearch (arr, size / 2, num);
	}
		printf ("we are at %d which is smaller the %d\n", arr[0], num);
		BinarySearch (arr + size / 2, size - size / 2, num);			//very importend to keep[ the size -size /2 becuase one half tkae the rest
}
