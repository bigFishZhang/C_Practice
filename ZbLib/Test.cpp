//
// Created by bigfish on 2019-03-12.
//

#include "Test.h"
#include <stdio.h>
#include <unistd.h>

CTestLib *GetClass()
{
    return (new Test());
}

void Test::helloWorld()
{
    printf("====  helloWorld,I'm test lib  ==== \n");
}

void Test::test(const char *str)
{
    printf("====  say:%s in lib  ==== \n",str);
}