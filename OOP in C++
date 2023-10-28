//Sample program to show the syntax of class & object in C++.
# include <iostream>
using namespace std;
class Maths     //Class defination
{
  public:
    int num1;
};
int main()
{
    Maths number;    //Object defination
    number.num1 = 15;        
    cout<<number.num1<<endl;
    return 0;
}




//Program to make multiple object of one class.
# include <iostream>
# include <string>
using namespace std;
class Car     //Class definatin
{
    public:
        string car_name;
        int car_price;
        int model;
};
int main()
{
    Car data1;    //First object definatin
    data1.car_name = "Ford";
    data1.car_price = 10000000;
    data1.model = 2022;
    cout<<data1.car_name<<endl;
    cout<<"inr "<<data1.car_price<<endl;
    cout<<data1.model<<endl;

    Car data2;    //Second object definatin
    data1.car_name = "Rolls-Royce";
    data1.car_price = 50000000;
    data1.model = 2021;
    cout<<data1.car_name<<endl;
    cout<<"inr "<<data1.car_price<<endl;
    cout<<data1.model<<endl;
    
    return 0;
}




//Use the concept of class and take two number as input and print it's sum.
# include <iostream>
using namespace std;
class Math
{
    public:
        int num1;
        int num2;
        int sum_num;
};
int main()
{
    Math sum;
    int x , y , sum_num;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    sum.num1 = x;
    sum.num2 = y;
    sum_num = sum.num1+sum.num2;
    cout<<"Sum = "<<sum_num;
    return 0;
}



// Program that depict the mehod defination inside the class. 
# include <iostream>
using namespace std;
class Car
{
    public:
        void speed()
        {
            cout<<"maxspeed = "<<200;
        }
    
};
int main()
{
    Car test;
    test.speed();
    return 0;
}




// Program that depict the mehod defination outside the class. 
# include <iostream>
using namespace std;
class Car
{
    public:
        void speed();
};
void Car::speed()
{
    cout<<"maxspeed = "<<200;
}
int main()
{
    Car test;
    test.speed();
    return 0;
}




// Program that show to add a parameter in method. 
# include <iostream>
using namespace std;
class Car
{
    public:
        int speed(int maxspeed);
};
int Car::speed(int maxspeed)
{
    return maxspeed;
}
int main()
{
    Car test;
    cout<<test.speed(200);
    return 0;
}




//Program that depict the syntax of construstor.
# include <iostream>
using namespace std;
class Myclass
{
    public:
        Myclass()
        {
            cout<<"Hello coders! ";
        }
};
int main()
{
    Myclass myObj;
    return 0;
}




//Program that depict the syntax of constructor with parameter.
# include <iostream>
# include <string>
using namespace std;
class Men
{
    public:
        string categories;
        int year;
        Men(string x , int y)
        {
            categories = x;
            year = y;
        }
};
int main()
{
    Men sample1("Sigma" , 18);
    Men sample2("Alpha" , 25);
    cout<<sample1.year<<" "<<sample1.categories<<endl;
    cout<<sample2.year<<" "<<sample2.categories<<endl;
    return 0;
}




//Program that depict the syntax of constructor with parameter outside of class.
# include <iostream>
# include <string>
using namespace std;
class Men
{
    public:
        string categories;
        int year;
        Men(string x , int y);
};
Men::Men(string x , int y)
    {
        categories = x;
        year = y;
    }
        
int main()
{
    Men sample1("Sigma" , 18);
    Men sample2("Alpha" , 25);
    cout<<sample1.year<<" "<<sample1.categories<<endl;
    cout<<sample2.year<<" "<<sample2.categories<<endl;
    return 0;
}



//Program that depict the syntax of encapsulation (.get & .set) methods.
# include <iostream>
using namespace std;
class MyClass
{
    private:
        int dob;
    public:
        void setdob(int y)
        {
            dob = y;
        }
        int getdob()
        {
            return dob;
        }
};
int main()
{
    MyClass myObj;
    myObj.setdob(2004);
    cout<<myObj.getdob();
    return 0;
}
