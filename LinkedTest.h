//
// Created by Mrz on 2022/8/29.
//

#ifndef UNTITLED_LINKEDTEST_H
#define UNTITLED_LINKEDTEST_H
#include <iostream>
using namespace  std;

typedef struct LINK_NODE{
    int value;
    LINK_NODE* next;
}LINK_NODE,*LPLINK_NODE;

class LinkedTest {
private:
    LPLINK_NODE header;

public:
    LinkedTest();
    ~LinkedTest();
    LINK_NODE * initLink();
    void insertNode(int val);


};


#endif //UNTITLED_LINKEDTEST_H
