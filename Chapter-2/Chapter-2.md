# Chapter 2: Taking inputs

Normally I'd dive right into taking inputs in c++ but before we do that we will briefly cover the concepts of data types. 

The reason why we need to learn the data types is because we want to tell the difference between the user giving a number as an input vs the user give a string as an input. 

## Data Types

There are many data types in C++ but for basics I'll cover only 4:
- int (Integer)
- float (integer with precision)
- char (your typical character like 'a', 'b')
- bool (in simple words: True or False) 

As the names say, you can decide what kind of input you want. Usually bool isn't taken as an input from the user but why the heck not. Let's try everything out in the code. 

<br>

```
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
```

Save the file with .cpp extenstion and run it with the following command

```
g++ -o executable <filename>.cpp
```

Voila!! You can make the user bend to your rules now. 

Although there are many things that can go wrong here. What if the user enters a character when the program is expecting an integer? The user can easily break your code and we need to make it more robust.

For that, we'll cover conditions in the next chapter.