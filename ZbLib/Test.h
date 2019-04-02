//
// Created by bigfish on 2019-03-12.
//

#ifndef ZBLIB_TEST_H
#define ZBLIB_TEST_H

#include "ZBHeader.h"

class Test :public CTestLib {
public:
    Test(){};
    virtual ~Test(){};
    virtual void test(const char *str);
    virtual void helloWorld();
};


#endif //ZBLIB_TEST_H
