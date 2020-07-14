#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;


template<typename T>
T sum (T t1, T t2) {
    return t1 + t2;
}


template <class T>
class mypair {
    T a,b;

    public:
        mypair(T first, T second) {
            a=first,b=second;
        }
        void setA(T first) {a = first;}
        void setB(T second) {b = second;}
        T getmax();
};

template<class T>
T mypair<T>::getmax() {
    T retval;
    retval = a>b? a : b;

    return retval;
}

int main() {

    cout << sum(2,2) << endl;
    cout << sum(2.5,2.6) << endl;

    mypair<int> mp (100,200);
    cout << mp.getmax() << endl;

    mp.setA(500);
    cout << mp.getmax() << endl;

    mypair<float> mpf (0.100,0.0200);
    cout << mpf.getmax() << endl;

    return 0;
}