//
// Created by bigfish on 2019-06-18.
//

#include <cstring>
#include "ZString.h"

inline
ZString::ZString(const char *cstr ) {
    if (cstr){
        m_data = new  char[strlen(cstr) +1];
        strcpy(m_data,cstr);
    } else{
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline
ZString::ZString(const ZString &str) {
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data,str.m_data);
}


inline
ZString& ZString::operator=(const ZString &str) {

    if (this == &str)
        return *this;
    delete[] m_data; //1
    m_data = new char[strlen(str.m_data) + 1]; //2
    strcpy(m_data,str.m_data);//3
    return *this;
}





inline
ZString::~ZString() {
    delete[] m_data;
}