class Circle{
    int radius;
    
    public:
        Circle();
        string build();
        void printCircle();
};

Circle::Circle(){
    radius = 1;
}


string Circle::build(){
    string rslt = "This is a circle";
    return rslt;
}

void Circle::printCircle(){
    string printRst = build();
    cout << printRst << endl;
    
}
