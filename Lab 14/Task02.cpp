#include<iostream>
using namespace std;

void sortarray(double* score , int size)
{
   for(int i = 0; i<size-1; i++)
   {
    for(int j = i+1; j<size; j++)
    {
        if(*(score+j) < *(score+i))
        {
            double temp = *(score+j);
            *(score+j) = *(score+i);
            *(score+i) = temp;
        }
    }
   }
}

double Average(double* score , int size)
{
    double sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum += *(score+i);
    }
    return (sum/size);
}
int main()
{
    int num;
    cout << "Enter number of test scores you want to enter: ";
    cin >> num;
    if(num <= 0)
    {
        cout << "Invalid number of scores";
        return 1;
    }
    double* scores = new double[num];
    for(int i = 0; i < num; i++)
    {
        cout << "Score " << i+1 <<": ";
        cin >> *(scores+i);
    }

    sortarray(scores,num);
    double avg = Average(scores,num);
    
    cout << endl << "Sorted Scores in Ascending order" << endl;
    for(int i = 0; i<num; i++)
    {
        cout << "Score " << i+1 << ": " <<*(scores+i) << " " ;
        cout << endl;
    }
    cout << endl << "Average score: " << avg << endl;

    delete[] scores;
    return 0;
}