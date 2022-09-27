//
// Created by Mrz on 2022/9/27.
//

#include "Sorter.h"

void Sorter::printarray(int a[],int len){
    for (int k = 0; k < len; ++k) {
        cout<<a[k]<<", ";
    }
    cout<<endl;
}

void Sorter::swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Sorter::selection(int a[],int len){
    int i,j,k;
    for (i = 0; i < len-1; ++i) {
        k = i;
        for (j = i+1; j < len; ++j) {
            if (a[j]<a[k])
                k = j;
        }
        swap(&a[i],&a[k]);
    }
}

void Sorter::insertion(int a[],int len){
    int i,j,tmp;
    for (i = 1; i < len; ++i) {
        tmp =a[i];
        for (j = i; j > 0 && a[j-1]>tmp; j--) {
            a[j] = a[j-1];
        }
        a[j] = tmp; // 错在这里了
    }
}

void Sorter::bubble(int a[],int len){
    int i,j;
    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j < len-1-i;/*这里的-i注意*/ ++j) {
            if (a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

void Sorter::shell(int a[],int len){
    int i,j,k,g;
    for (g = len/2; g >0 ; g/=2) {
        for (i = g; i < len; i++) {
            k = a[i];
            j = i; // 错在这里了
            while ((j-g)>=0&&a[j-g]>k){
                a[j] = a[j-g];
                j-=g;
            }
            a[j] = k;
        }
    }
}


void Sorter::merge(int a[],int len){

}

void Sorter::quicksort(int a[],int len){

}

void Sorter::qsort(int a[],int low, int high){

}


int Sorter::partition(int a[],int low, int high){

}




void Sorter::testSorter(){
    int arr[] = {73,51,2,8,71,64,87,618,4,21,79,56,6,352,564,9,33,45,4132,5,54};
    int l = sizeof(arr)/sizeof(int);

//    selection(arr,l);
//    insertion(arr,l);
//    bubble(arr,l);
    shell(arr,l);

    printarray(arr,l);
}