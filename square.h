#pragma once
#include <string>
#include <iostream>
using namespace std;

class square {
    int side;
    
public:
    square();
    string build();
    void printsquare();
};

square::square(){
    side = 3;
}

string square::build(){
    string output = "square shape";
    return output;

}

void square::printsquare(){
    string printoutput = build();
    cout << printoutput << endl;
    
}
    

