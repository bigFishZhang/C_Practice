//
// Created by bigfish on 2019-06-18.
//

#ifndef INC_61801_ZSTRING_H
#define INC_61801_ZSTRING_H


class ZString {

public:
    ZString(const char* cstr = 0);
    ZString(const ZString& str);
    ZString& operator = (const ZString& str);
    ~ZString();

    char* get_c_str() const { return  m_data;}
private:
    char* m_data;

};


#endif //INC_61801_ZSTRING_H
