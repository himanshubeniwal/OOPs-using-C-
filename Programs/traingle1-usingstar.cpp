#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cout<<"\n****** Program by Himanshu Beniwal******"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
}
