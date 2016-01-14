/*
 * lab01_dericm_v2.c
 *
 *    Created on: Jan 14, 2016
 *        Author: Deric Mccadden
 * StudentNumber: A00751277
 */

#include <stdio.h>
#define CHECK(PRED) printf("%s ... %s\n",(PRED) ? "passed" : "FAILED", #PRED)

int arr_min(const int a[], size_t n);
size_t arr_count(const int a[], size_t n, int x);
int arr_all_even(const int a[], size_t n);
size_t arr_find_last(const int a[], size_t n, int x);

int main(void){
	int a[] = {2, 5, 0, 4 ,-1, 7, 4, 2};
	int b[] = {2};
	int c[] = {2, 5, 0, 4 ,-1, 7};

	CHECK(arr_min(a, 8) == -1);
	CHECK(arr_min(b, 1) == -1);
	CHECK(arr_min(c, 6) == -1);

	CHECK(arr_count(a, 8, 4) == 2);
	CHECK(arr_count(b, 1, 2) == 1);
	CHECK(arr_count(c, 6, -1) == 1);

	CHECK(arr_all_even(a, 8) == 0);
	CHECK(arr_all_even(b, 1) == 1);
	CHECK(arr_all_even(c, 6) == 0);

	CHECK(arr_find_last(a, 8, 2) == 7);
	CHECK(arr_find_last(b, 1, 2) == 0);
	CHECK(arr_find_last(c, 6, 2) == 0);

	return 0;
}

int arr_min(const int a[], size_t n){
	size_t i;
	int smallest = a[0];
    for(i=0;i < n;i++)
		if (a[i] <= smallest)
			smallest = a[i];
	return smallest;
}


size_t arr_count(const int a[], size_t n, int x){
	int count = 0;
	size_t i;
	for(i=0;i < n;i++)
		if (a[i] == x)
			count++;
	return count;
}

int arr_all_even(const int a[], size_t n){
	size_t i;
	for(i=0;i < n;i++)
		if (a[i] % 2 != 0)
			return 0;
	return 1;
}

size_t arr_find_last(const int a[], size_t n, int x){
	size_t i;
	for(i=0;n-1 > i;i--)
		if (a[i] == x)
			return i;
	return -1;
}

