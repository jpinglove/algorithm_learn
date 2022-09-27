//
// Created by Mrz on 2022/9/27.
//

#ifndef UNTITLED_SORTER_H
#define UNTITLED_SORTER_H
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;


class Sorter {

public:
    void testSorter();
protected:

private:
    void selection(int a[],int len);
    void insertion(int a[],int len);
    void bubble(int a[],int len);
    void shell(int a[],int len);

    void merge(int a[],int len);

    void quicksort(int a[],int len);
    void qsort(int a[],int low, int high);
    int partition(int a[],int low, int high);


    void swap(int *a, int *b);
    void printarray(int a[],int len);

};


#endif //UNTITLED_SORTER_H
