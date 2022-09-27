#include <iostream>
#include <bitset>
using namespace std;

#include "Test.h"
#include "Sorter.h"

int main() {
//    int a = getNumber();
//    cout<< a << endl;
//    TestFbi(7);
//    testPointer();
//    climbstair(2);

//    int arr[] = {51,2,6,8,45,64,1,5,56,87,4,21,56,6,564,8,9,33,54,45,4132,5,54};
    int arr[] = {51,2,8,71,64,87,4,21,56,6,564,9,33,45,4132,5,54};
    int l = sizeof(arr)/sizeof(int);
//    insersort(arr,l);
//    quicksort(arr, l);
    Sorter *pSorter = new Sorter();
    pSorter->testSorter();

    return 0;
}
