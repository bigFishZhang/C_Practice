//
// Created by bigfish on 2019-03-12.
//

#ifndef ZBLIB_ZBHEADER_H
#define ZBLIB_ZBHEADER_H


class CTestLib
{
public:
    virtual void test(const char *str) = 0;
    virtual void helloWorld() = 0;
};

extern  CTestLib *GetClass();

#endif //ZBLIB_ZBHEADER_H


