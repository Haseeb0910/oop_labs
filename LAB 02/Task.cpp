#include <iostream>
using namespace std;

class matrix33
{
//task 01
protected:
  double m[3][3];

public:

// task 02
  double getElement(int row, int col)
  {
    return m[row][col];
  }

  void setElement(int row, int col, double val)
  {
    m[row][col] = val;
  }
 
  // task03
  void display()
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << m[i][j] << " ";
      }
      cout << endl;
    }
  }

  // task 04
  void setmatrix(double ar[3][3])
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        m[i][j] = ar[i][j];
      }
    }
  }

  //default constructor task 07
  matrix33()
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        m[i][j] = 0;
      }
    }
  }

  //task5  
  matrix33(double val1, double val2,double val3,double val4,double val5,double val6,double val7,double val8,double val9)
  {
    m[0][0] = val1;
    m[0][1] = val2;
    m[0][2] = val3;
    m[1][0] = val4;
    m[1][1] = val5;
    m[1][2] = val6;
    m[2][0] = val7;
    m[2][1] = val8;
    m[2][2] = val9;
  }

  // single parameter constructor task 06
  matrix33(double val)
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        m[i][j] = val;
      }
    }
  }

  //task 08
  matrix33 scalarmul(double h)
  {
    matrix33 t;
    double res;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        res = m[i][j]*h;
        t.setElement(i,j,res);
      }
    }
    return t;
  }

  double determinant()
  {
    double a,b,c,d,e,f,i,j,k;
    double det = 1;
    a = m[0][0];
    b = m[0][1];
    c = m[0][2];
    d = m[1][0];
    e = m[1][1];
    f = m[1][2];
    i = m[2][0];
    j = m[2][1];
    k = m[2][2];
    det = (a * ((e*k) - (f*j))) + (-b* ((d*k) - (f*i))) + (c* ((d*j) - (e*i)));
    return det;
  }

  bool isequal(matrix33 &obj)
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if(m[i][j] != obj.getElement(i,j))
        {
          return false;
        }
      }
    }
    return true;
  }
};
int main()
{
  matrix33 mat1;
  mat1.display();
  cout<<endl;
  mat1.setElement(0, 0, 3);
  cout << mat1.getElement(0, 0)<<endl<<endl;;
  double a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  mat1.setmatrix(a);
  mat1.display();
  cout<<endl;
  matrix33 mat2(1,2,3,1,2,3,1,2,3);
  mat2.display();
  cout<<endl;
  matrix33 mat3(9);
  mat3.display();
  cout<<endl;
  matrix33 mat4(1,1,3,2,3,4,3,4,5);
  mat4.scalarmul(2).display();
  cout<<endl;
  double det = mat4.determinant();
  cout<<"Determinant : "<<det<<endl;
  matrix33 mat5(1,2,3,1,2,3,1,2,4);
  matrix33 mat6(1,2,3,1,2,3,1,2,4);
  cout<<endl<<mat5.isequal(mat6);

  return 0;
}