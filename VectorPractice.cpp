#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void vectorOne(){
    vector<int> vecOne(8);
    cout<<vecOne.size()<<" : "<<vecOne.capacity()<<endl;


    //What is the new size and capacity of the vector after the line executes below?
    vecOne.push_back(2);
    cout<<vecOne.size()<<" : "<<vecOne.capacity()<<endl;
}

void vectorTwo(){
    vector<int> vecTwo(2);
    cout<<vecTwo.size()<<" : "<<vecTwo.capacity()<<endl;


    //What is the new size and capacity of the vector after the line executes below?
    vecTwo.push_back(2);
    vecTwo.push_back(2);
    vecTwo.push_back(2);
    cout<<vecTwo.size()<<" : "<<vecTwo.capacity()<<endl;
}

void vectorThree(){
    vector<int> vecThree(2);
    cout<<vecThree.size()<<" : "<<vecThree.capacity()<<endl;


    //What is the new size and capacity of the vector after the line executes below?
    for(int i = 0; i < 1000; i++){
        vecThree.push_back(i);
    }
    cout<<vecThree.size()<<" : "<<vecThree.capacity()<<endl;
}

int main(){
    vectorOne();
    vectorTwo();
    vectorThree();
}