//Exception handling
# include <iostream>
using namespace std;
int main()
{
    int numerator, denominator , result;
    cout<<"Enter numerator: ";
    cin>>numerator;
    cout<<"Enter denominator: ";
    cin>>denominator;
    try
    {
        if(denominator==0)
        {
            throw denominator;        
        }
        result = numerator/denominator;
        cout<<result;
    }
    catch(int ex)
    {
        cout<<"Exception: Can't divide by 0."<<endl;
    }
}
