#include<iostream>
using  namespace  std;

template <class T>
class  Operate {
public:
    static T add(T a, T b) {
        return  a + b;
    }
    static T Mul(T a, T b) {
        return  a * b;
    }
    static T Judge(T a, T b = 1) {
        if (a >= 0)
            return  a;
        else
            return  a / b;
    }
};
int  main() {
    int  a, b, c, d, e, x, y, z;
    a = 1, b = 2, c = 3, d = 4, e = 5;
    x = Operate<int>::add(a, b);
    y = Operate<int>::Mul(c, d);
    z = Operate<int>::Judge(e, b);
    cout << x << " " << y << " " << z << " " << endl;

    float af, bf, cf, df, ef, xf, yf, zf;
    af = 1.1, bf = 2.2, cf = 3.3, df = 4.4, ef = 5.5;
    xf = Operate<float>::add(af, bf);
    yf = Operate<float>::Mul(cf, df);
    zf = Operate<float>::Judge(ef, bf);
    cout << xf << " " << yf << " " << zf << " " << endl;

    return  0;
}