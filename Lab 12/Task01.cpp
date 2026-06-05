#include<iostream>
#include<string>

using namespace std;
class Painting
{
    protected:
    string title;
    string artist_name;
    double value;
    public:
    Painting(string t , string n)
    {
        title = t;
        artist_name = n; 
        value = 400;
    }
    void display()
    {
        cout << "Painting's Title : "<<title<<endl;
        cout << "Artist's Name : "<<artist_name<<endl;
        cout << "Painting's Value : "<<value<<endl;
    }
};

class FamousPainting : public Painting
{
  public:
  FamousPainting(string t , string n) : Painting(t,n)
  {
    value = 25000;
  }
};

int main()
{
    Painting *p[7];
    string title , name;
    for(int i = 0; i<2; i++)
    {
        cout <<"Enter Painting Title and Artist's Name : ";
        cin >> title >> name;
        for(int  i = 0 ; i < name.length(); i++)
        {
            name[i] = toupper(name[i]);
        }
        if(name == "DEGAS" || name == "MONET" || name == "PICASSO" || name == " REMBRANDT")
        {
            p[i] = new FamousPainting(title, name);
        }
        else
        {
            p[i] = new Painting(title , name);
        }
        
    }
    for(int i = 0; i < 2 ; i++)
    {
        p[i]->display();
    }
}