#include <iostream>
#include <array>
using namespace std;
class Bag
{
   protected:
   array<float, 25> arr;
   int size;

   public:
   Bag()
   {
    this->size = 0;
   }
   void populate(int n)
   {
    arr[0] = 0;
    for (int i = 1; i < n; i++)
    {
        arr[i] = 1.0 / i;
    }
    size = n;
   }
   void insert(float f, int index)
   {
    for (int i = size; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    size++;
    arr[index] = f;
   }
   float extract(int index)
   {
    float rem = arr[index];
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return rem;
   }
   friend ostream &operator<<(ostream &os , const Bag &b)
   {
    os << b.arr[0];
    for(int i = 1; i < b.size; i++)
    {
        os <<" , "<< b.arr[i];
    }
    return os;
   }
};
int main()
{
    Bag b;
    b.populate(5);
    cout << b << endl;
    b.insert(3,2);
    cout << b << endl;
    b.extract(4);
    cout << b << endl;

    // array<float, 25> arr;
    // int n;
    // cout << "Enter an integer less than or equal to 20 : ";
    // cin >> n;
    // arr[0] = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     arr[i] = 1.0 / i;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    //     if (i != n - 1)
    //     {
    //         cout << " , ";
    //     }
    // }
    // cout << endl;
    // //task02
    // int m;
    // cout << "Enter another number upto 20 : ";
    // cin >> m;
    // if (n != m)
    // {
    //     swap(arr[n - 1], arr[m]);
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i];
    //         if (i != n - 1)
    //         {
    //             cout << " , ";
    //         }
    //     }
    //     cout << endl;
    // }
    // // task03
    // int p;
    // cout << "Enter another number upto 20 : ";
    // cin >> p;
    // float sq = arr[p] * arr[p];
    // for (int i = n; i >= p; i--)
    // {
    //     arr[i] = arr[i-1];
    // }
    // n++;
    // arr[p] = sq;
    // cout << arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     cout << " , " << arr[i];
    // }
    // cout << endl;

    // //task04
    // int mid = n /2;
    // if(n % 2 == 0)
    // {
    //     mid--;
    // }
    // for(int i = mid; i < n - 1 ; i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // n--;
    // cout << "After deletion "<<endl;
    // cout << arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     cout << " , " << arr[i];
    // }
    // cout << endl;

    return 0;
}