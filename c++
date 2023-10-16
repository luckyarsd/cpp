//First program of c++
# include <iostream>
using namespace std;
int main()
{
  cout<<"You are the future \n";
  return 0;
}

// Program to show how to use terniary opearator
# include <iostream>
using namespace std;
int main()
{
  //This program will show you passes exam or not
  double marks;
  cout<<"Enter your marks: ";
  cin>>marks;
  string result = (marks>33) ? "Pass" : "Fail";
  cout<<"You "<<result<<" the exam"<<endl;
  return 0;
}

//This program will describe your category according to your age
# include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=12){
        cout<<"You are a child"<<endl;
    }
    
    else if(age<=18){
        cout<<"You are a teenager"<<endl;
    }
    else{
        cout<<"you are an adult"<<endl;
    }
}

//This program is show the use of nested loop
# include <iostream>
using namespace std;
int main()
{
    double marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>33){
        if(marks>80){
            cout<<"Gracefully passed"<<endl;
        }
        else{
            cout<<"Just passed"<<endl;
        }
    }
    else{
        cout<<"Fail";
    }
    return 0;
}

//This program will show uses of swith case
# include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    
    switch(num){
        case 1:
        cout<<"Mon"<<endl;
        break;
        
        case 2:
        cout<<"Tues"<<endl;
        break;
        
        case 3:
        cout<<"Wed"<<endl;
        break;
        
        case 4:
        cout<<"Thrus"<<endl;
        break;
        
        case 5:
        cout<<"Fri"<<endl;
        break;
        
        case 6:
        cout<<"Sat"<<endl;
        break;
        
        case 7:
        cout<<"Sun"<<endl;
        break;
        
    }
}

// This is a code to check constant and vowles using switch case
# include <iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter character: ";
    cin>>character;
    
    switch(character)
    {
        case 'a':
        cout<<"Vowels";
        break;
        
        case 'e':
        cout<<"Vowels";
        break;
        
        case 'i':
        cout<<"Vowels";
        break;
        
        case 'o':
        cout<<"Vowels";
        break;
        
        case 'u':
        cout<<"Vowels";
        break;
        
        default:
        cout<<"Consonant";
        break;
    }
    return 0;
}

//Thsi program will show the uses of while loop
//We use for loop when end point is unknown
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<5)
    {
        cout<<"You are the future\n";
        i++;
    }
    return 0;
    
}

//Thsi program will show the uses of while loop using break keyword
#include <iostream>
using namespace std;
int main()
{
    while(true)
    {
        cout<<"You are the future\n";
        break;
    }
    return 0;
    
}

//Thsi program will show the uses of for loop
//We use for loop when end point is known
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<5;i++)
    {
        cout<<"You are the future\n";
    }
    return 0;
    
}

/*Thsi program will show the uses of do while loop
do while loop will print value first after that check the condition it true or not
It means either condition is true or false do while will print at least one time*/
#include <iostream>
using namespace std;
int main()
{
    do
    {
        cout<<"You are the future\n";
    }
    while(1<0);
    return 0;
    
}



//This program is for showing the uses of typecasting
#include <iostream>
using namespace std;

int main()
{
    char ch='A';     //important ascii to learn A -> 65 , a ->97 , '0' -> 47
    int ascii1 = (int)ch;   //Typecasting of char to int
    cout<<ascii1<<endl;
    
    int x = 97;
    char ascii2 = (char)x;   //Typecasting of int to char
    cout<<ascii2<<endl;
    return 0;
}

