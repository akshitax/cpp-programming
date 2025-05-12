#include <iostream>
using namespace std;
class AB
{
    private:
     int  m[4][4],i,j,k;
    public:
     void input();
     void output();
     void spiral();
};
void AB:: input()
{
    cout<<"Enter 16 elements";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>m[i][j];
        }
    }
}
void AB:: output()
{
    cout<<"Original Matrix\n";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)  

        {
            cout<<"\t"<<m[i][j];
        }
        cout<<"\n";
    }
}
void AB:: spiral()
{
    // Fill top row
    for (j = 0; j < 4; j++) {
        m[0][j] = k++;
    }

    // Fill right column
    for (i = 1; i < 4; i++) {
        m[i][3] = k++;
    }

    // Fill bottom row
    for (j = 2; j >= 0; j--) {
        m[3][j] = k++;
    }

    // Fill left column
    for (i = 2; i > 0; i--) {
        m[i][0] = k++;
    }

    // Fill inner top row
    for (j = 1; j < 3; j++) {
        m[1][j] = k++;
    }

    // Fill inner right column
    for (i = 2; i < 3; i++) {
        m[i][2] = k++;
    }

    // Fill inner bottom row
    for (j = 1; j >= 1; j--) {
        m[2][j] = k++;
    }

    // Displaying the final spiral matrix
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

 
}
  

int main()
{
    AB s;
    s.input();
    s.output();
    s.spiral();
    return 0;
}