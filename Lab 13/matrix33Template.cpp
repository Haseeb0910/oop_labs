#include <iostream>
using namespace std;

class Complex
{
protected:
    double a, b;

public:
    Complex(double A = 0, double B = 0) : a(A), b(B) {}
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << "( " << c.a << " + " << c.b << "i )";
        return os;
    }
};

template <typename T>
class matrix33
{
protected:
    T arr[3][3];

public:
    matrix33()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = T();
            }
        }
    }
    matrix33(T a[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = a[i][j];
            }
        }
    }
    friend ostream &operator<<(ostream &os, const matrix33 &other)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                os << other.arr[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }
};

template <typename T>
class null33 : public matrix33<T>
{
    public:
    null33()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                this->arr[i][j] = T();
            }
        }
        cout << endl;
    }
};

template <typename T>
class identity33 : public matrix33<T>
{
    public:
    identity33()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(i==j)
                {
                    this->arr[i][j] = 1;
                }
                else{
                    this->arr[i][j] = 0;
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {9, 5, 7}};
    matrix33<int> a(A);
    cout << a << endl;
    double d[3][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.7}, {9.7, 5.5, 7.4}};
    matrix33<double> D(d);
    cout << D << endl;
    Complex c[3][3];
    matrix33<Complex> C(c);
    cout << C ;

    null33 <double>h;
    cout << h;

    identity33 <int> i;
    cout << i << endl;  

}