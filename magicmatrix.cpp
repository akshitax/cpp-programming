#include <iostream>
using namespace std;
class Matrix
{
    private:
     int row,column;
     int matrix[10][10];
    public:
     Matrix(int r,int c)
     {
        row=r;
        column=c;
     }
    void inputMatrix()
    {
        cout<<"Enter the number of rows "<<row<<"and the number of columns"<<column;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>matrix[i][j];
            }
        }
    }
    void displayMatrix()
    {
        cout<<"The matrix is:";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<matrix[i][j]<<"";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int row,column;
    cout<<"Enter the number of rows and columns";
    cin>>row>>column;
    Matrix mat(row,column);
    mat.inputMatrix();
    mat.displayMatrix();
}