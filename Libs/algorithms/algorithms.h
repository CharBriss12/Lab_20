#ifndef LAB_20_ALGORITHMS_H
#define LAB_20_ALGORITHMS_H

#include <stdio.h>
#include <assert.h>

void error_alert(char *msg);

size_t binarySearch( const int *array, const size_t size, const int x );

size_t binarySearchNear( const int *array, const size_t size, const int x );

void swap( void *a, void *b );

void ascan( int *array, const size_t size );

void aprint( const int *array, const size_t size );

void swapByMem( void *a, void *b, const size_t type_size );

void swapInt( int *a, int *b );

int getElementIndexInArrayIf_(int *const array, const size_t size, int( *comp )(int, int));

int compareMax(int a, int req);

int getMaxElementIndexInArray(int *const array, const size_t size);

int compareMin(int a, int req);

int getMinElementIndexInArray(int *const array, const size_t size);

void insertionSortDecreasing(int *arr, int size);



#endif //LAB_20_ALGORITHMS_H
