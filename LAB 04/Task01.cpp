#include <iostream>
using namespace std;

class Robot
{
private:
    string name;
    int row, col;
    char direction; // u(up), d(down), l(left), r(right) on Cartesian plane
    int arr[100][100];

public:
    string getRobotName() const
    {
        return this->name;
    }
    void setRobotName(string n)
    {
        this->name = n;
    }
    int getLocationX() const
    {
        return this->row;
    }
    void setLocationX(int v)
    {
        this->row = v;
    }
    int getLocationY() const
    {
        return this->col;
    }
    void setLocationY(int v)
    {
        this->col = v;
    }
    char getDirection() const
    {
        return this->direction;
    }
    void setDirection(char d)
    {
        this->direction = d;
    }
    void setRobot(string n, int cx, int cy, char d)
    {
        this->name = n;
        this->row = cx;
        this->col = cy;
        this->direction = d;
    }
    bool canStep()
    {
        if (direction == 'u' && row > 0)
        {
            return true;
        }
        else if (direction == 'd' && row < 99)
        {
            return true;
        }
        else if (direction == 'l' && col > 0)
        {
            return true;
        }
        else if (direction == 'r' && col < 99)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void takeStep()
    {
        if (canStep())
        {
            if (direction == 'u')
            {
                row--;
            }
            else if (direction == 'd')
            {
                row++;
            }
            else if (direction == 'l')
            {
                col--;
            }
            else if (direction == 'r')
            {
                col++;
            }
        }
        else
        {
            cout << "Can't take step";
        }
    }
    void turnLeft()
    {
        if (direction == 'u')
        {
            this->direction = 'l';
        }
        else if (direction == 'd')
        {
            this->direction = 'r';
        }
        else if (direction == 'l')
        {
            this->direction = 'd';
        }
        else if (direction == 'r')
        {
            this->direction = 'u';
        }
    }
    void turnRight()
    {
        if (direction == 'u')
        {
            this->direction = 'r';
        }
        else if (direction == 'd')
        {
            this->direction = 'l';
        }
        else if (direction == 'l')
        {
            this->direction = 'u';
        }
        else if (direction == 'r')
        {
            this->direction = 'd';
        }
    }
    void turnBackword()
    {
        if (direction == 'u')
        {
            this->direction = 'd';
        }
        else if (direction == 'd')
        {
            this->direction = 'u';
        }
        else if (direction == 'l')
        {
            this->direction = 'r';
        }
        else if (direction == 'r')
        {
            this->direction = 'l';
        }
    }
    void display() const
    {
        cout << name << " is at (" << row << "," << col << ") towards " << direction << endl;
    }
    int disX(Robot x)
    {
        int dis = this->row - x.row;
        return dis;
    }
    int disY(Robot x)
    {
        int dis = this->col - x.col;
        return dis;
    }
};
int main()
{
    Robot R[6];
    R[0].setRobot("R", 3, 4, 'l');
    R[1].setRobot("S", 18, 9, 'r');
    R[2].setRobot("T", 10, 6, 'l');
    R[3].setRobot("Q", 77, 66, 'd');
    R[4].setRobot("P", 43, 90, 'r');
    R[5].setRobot("Z", 23, 87, 'u');
    cout << "Before Movement" << endl;
    for (int i = 0; i < 6; i++)
    {
        R[i].display();
    }
    cout << endl
         << "After Movement" << endl
         << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            R[i].takeStep();
        }
    }
    for (int i = 0; i < 6; i++)
    {
        R[i].display();
    }
    int x = R[2].getLocationX();
    int y = R[2].getLocationY();
    for (int i = 0; i < 6; i++)
    {
        R[i].display();
    }
}