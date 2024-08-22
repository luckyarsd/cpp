//Say "Hello, World!" With C++
//Output Format: Print Hello, World! to stdout.
#include <iostream>
using namespace std;
int main() 
{
    cout<<"Hello, World!"<<endl;  
    return 0;
}


//Input and Output
//Input Format: One line that contains 3 space-separated integers: a,b and c.
//Output Format: Print the sum of the three numbers on a single line.
#include <iostream>
using namespace std;
int main() 
{
    int num1,num2,num3,sum;
    cin>>num1>>num2>>num3;
    sum=num1+num2+num3;
    cout<<sum;  
    return 0;
}


//Strings
//Input Format: You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').
//Output Format: In the first line print two space-separated integers, representing the length of a and b respectively.
//In the second line print the string produced by concatenating a and b (a+b).
//In the third line print two strings separated by a space, a' and b'.  and  are the same as a and b, respectively, except that their first characters are swapped.
#include <iostream>
using namespace std;
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string a,b,c,d;
    cin>>a;
    cin>>b;
    int len1 = a.size();
    int len2 = b.size();
    cout<<len1<<" "<<len2<<endl;
    c=a+b;
    cout<<c<<endl;
    d[0]=b[0];
    b[0]=a[0];
    a[0]=d[0];
    cout<<a<<" "<<b;
    return 0;
}
