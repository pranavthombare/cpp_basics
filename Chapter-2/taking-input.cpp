#include<iostream>
#include<string>

using namespace std;

int main()
{
    //This is an integer. Like 1,2,3,4....etc
    int a;

    //This is a character. Like a,b,c,d....etc
    char b;

    //This is an integer with precison. Like 3.14, 6.9(nice)...etc 
    float c;

    //This will be bool. Their values be either 0(False) or 1(True)
    bool d;

    //Now to print stuff, we use "cout". So to take input we use "cin"

    //First lets take an integer from the user
    cout<<"Enter the integer: ";
    cin>>a;
    cout<<"The integer a is: "<<a<<"\n";

    //Then we take a character from the user
    cout<<"Enter the character: ";
    cin>>b;
    cout<<"The character b is: "<<b<<"\n";

    //Now we take a number with decimals
    cout<<"Enter the floating value: ";
    cin>>c;
    cout<<"The float value c is: "<<c<<"\n";

    //And finally we take a boolean value.
    cout<<"Are your a noob at C++ (1 for true and 0 for false): ";
    cin>>d;
    cout<<d;

}