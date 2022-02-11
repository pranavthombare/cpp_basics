# Chapter 1: Printing stuff

Well, I'd not bore you with the syntax of C++. Just run this code 


```
#include<iostream>
#include<string>

using namespace std;

int main()
{
    cout<<"Hello World";
    return 0;
}
```

Save the file with .cpp extenstion and run it with the following command

```
g++ -o executable <filename>.cpp
```

Here "executable" is the executable file which you can run like "./executable"

And congratulations!!! You can print stuff in C++. In the next chapter we'll try taking inputs from the user.