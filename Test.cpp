//
// Created by Mrz on 2022/8/26.
//
#include <iostream>
#include <bitset>
using namespace std;
#include "Test.h"

int getNumber()
{
    int a;
    cout << "plz enter a number : \n";
    cin >> a;
    return a;
}

void testPointer(){
    int a =17;
    int b = a;
    const int *p = &a;
    int * const p1 = &b;

    p = &b;
//    p1 = &a;
    *p1 = 489;

}

void int2str(){
//    int n = INT_MIN;
    int n = 952;
    char buffer[50];
    memset(buffer, 0,50);

    char *address = buffer;

    int i = 0;

    bool isNeg = n<0;

    unsigned int n1 = isNeg ? -n : n;

    while(n1!=0)
    {
        buffer[i++] = n1%10+'0';
        n1=n1/10;
    }

    if(isNeg)
        buffer[i++] = '-';

    buffer[i] = '\0';

    for(int t = 0; t < i/2; t++)
    {
        buffer[t] ^= buffer[i-t-1];
        buffer[i-t-1] ^= buffer[t];
        buffer[t] ^= buffer[i-t-1];
    }

    if(n == 0)
    {
        buffer[0] = '0';
        buffer[1] = '\0';
    }

    cout<< buffer << endl;
}

void testhex(unsigned char n){
    bitset<8> bit = n;
    cout << bit << endl;

    unsigned char a = 15;
    unsigned char b = 9;

    bitset<8> b0 = a^b;
    cout << b0 << ", decimal number = "<< b0.to_ulong() << endl;

    int l = b0.to_ulong();
    cout << l << endl;
}


void swap(int *a, int *b){
    int c  =*a;
    *a = *b;
    *b = c;
}
void selection_sort(int arr[],int len){
    int i,j;
    int length =  len;
    for ( i = 0; i < len -1; i++) {
        int min = i;
        for(j= i+1; j<len;j++){
            if (arr[j]<arr[min])
                min = j;
        }
        swap(&arr[i],&arr[min]);
    }

    for (int k = 0; k < length; ++k) {
        cout << arr[k] << " ,";
    }
}


void test01(){
    std::cout << "Hello, World!" << std::endl;
//    cout << "a =  "<< a << endl;

//    int2str();
    testhex(15);

    int arr[] = {51,2,6,8,45,64,1,5,56,87,4,21,56,6,564,8,9,33,54,45,4132,5,54};
    int l = sizeof(arr)/sizeof(int);
    selection_sort(arr,l);
}

int Fbi(int i){
    if (i<2)
        return  i==0?0:1;
    return Fbi(i-1) + Fbi(i-2);
}

void TestFbi(int num){
    int i =0;
    cout<< fbi2(num)<<endl;

    cout<< Fbi(num)<<endl;
//    for (i=0;i<num; i++) {
//        cout<< Fbi(i)<<endl;
//    }
}

void climbstair(int num){
    unsigned int cnt =0;
    int arr[47] = {1,1};
    for (int i = 2; i < 47; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        cnt += arr[i];
        cout << "arr[i] = "<< arr[i]<<endl;
    }
    cout << "cnt = "<< cnt << endl;
}

int fbi2(int n){
    if (n<2) return n==0?0:1;
    return  fbi2(n-1)+ fbi2(n-2);
}

void insersort(int a[],int n){
    int i,j,k,tmp;
//    for (i = 1; i < n; ++i) {
//        tmp = a[i];
//        for (j = i; j >0&&a[j-1]>tmp ; --j) {
//            a[j]=a[j-1];
//        }
//        a[j]=tmp;
//    }

//    i = 1;
//    while (i<n){
//        tmp = a[i];
//        j = i;
//        while (j>0&&a[j-1]>tmp){
//            a[j]=a[j-1];
//            j--;
//        }
//        a[j] = tmp;
//        ++i;
//    }

    for (k = n/2; k > 0 ; k/=2) {
        for (i = k; i < n; i+=k) {
            tmp = a[i];
            for (j = i; j >0&&a[j-k]>tmp ; j-=k) {
                a[j] = a[j-k];
            }
            a[j] = tmp;
        }
    }

    for (k = 0; k < n; ++k) {
        cout<<a[k]<<", ";
    }
}

void quicksort(int a[],int len){
    qsort(a,0,len-1);

    for (int k = 0; k < len; ++k) {
        cout<<a[k]<<", ";
    }
}

int partition(int a[],int low ,int high){
    int i,j,pivot = a[high];
    i = low;
    for (j = low; j < high; ++j) {
        if (a[j]<pivot){
            swap(&a[j],&a[i++]);
        }
    }
    swap(&a[high],&a[i]);
    return  i;
}


void qsort(int a[],int low,int high){
    if (low >= high) return;
    int pivot = partition(a,low,high);
    qsort(a,low, pivot-1);
    qsort(a,pivot+1,high);
}
