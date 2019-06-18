//
// Created by bigfish on 2019-06-18.
//

//方位式的常数定义
#ifndef INC_61801_COMPLEX_H
#define INC_61801_COMPLEX_H

class complex {

public:
    complex (double r = 0, double i = 0)
    : re(r),im(i)      //initialization list
    { }
    complex& operator += (const complex&);
    double real() const { return  re;}
    double imag() const { return  im;}

private:
    double re,im;

    friend complex& __doapl(complex*, const complex&);

};



inline complex&
__doapl(complex* ths, const complex& r){
    ths->re += r.re;
    ths->im += r.im;
    return  *ths;
}

inline complex&
complex::operator += (const complex& r){
    return __doapl(this,r);
}

inline complex
operator + (const complex& x, const complex& y){
    return  complex(x.real() + y.real(),
                    x.imag() + y.imag());
}


inline complex
operator + (const complex& x, double y){
    return complex (x.real()  + y,x.imag());
}


inline complex
operator + ( double x,const complex& y){
    return complex (y.real() + x,y.imag());
}




#endif //INC_61801_COMPLEX_H
