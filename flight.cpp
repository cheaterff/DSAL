#include <iostream>
using namespace std;

class flight
{
    int n;
    int adjmat[50][50];
    string name[50];

public:
    int visited[10];
    flight()
    {

        cout << "Enter the no of citoes: : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter city :  ";
            cin >> name[i];
        }
        for (int i = 0; i < 10; i++)
        {
            visited[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter time between:: " << name[i] << " and " << name[j] << " :";
                cin >> adjmat[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cout << adjmat[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void connected(int i)
    {
        int j;
        cout << i << " ";
        visited[i]=1;
        for ( j = 0; j < n; j++)
        {
            if (!visited[j] && adjmat[i][j] >= 1)
            {
                connected(j);
            }
        }
    }
};

int main()
{
    flight obj;
    obj.connected(0);
}