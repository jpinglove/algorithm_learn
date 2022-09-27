//
// Created by Mrz on 2022/8/29.
//

#include "LinkedTest.h"


LinkedTest::LinkedTest(){

}

LinkedTest::~LinkedTest(){

}

LINK_NODE *LinkedTest::initLink()
{
    LINK_NODE * node = new LINK_NODE();
    node->next = nullptr;
    return node;
}

void LinkedTest::insertNode(int val) {
    if (header== nullptr)
        return;
    LINK_NODE *node = new LINK_NODE();
}

