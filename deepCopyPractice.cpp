#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Sample{
    public:
        string* name;
        int age;
        Sample(){
            name = new string("temp");
            age = 0;
        }
        Sample(string nm, int ag){
            name = new string(nm);
            age = ag;
        }
        //Is this a shallow copy or deep copy?
        Sample(Sample const &x){
            name = x.name;
            age = x.age;
        }
        ~Sample(){
            delete name;
        }
};

int main(){
    Sample y("Nick", 20);
    Sample x(y);

    //What will this output? Will it cause an error?
    cout<<*(x.name)<<" | "<<*(y.name)<<endl;


    //What error, if any, will there be in main because of the copy constructor?
    //Can you change the copy constructor to not cause an error?
}