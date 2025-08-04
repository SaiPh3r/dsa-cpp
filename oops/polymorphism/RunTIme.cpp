#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"Shape drawing ..."<<endl;
    }
};

class Rectange : public Shape{
    public:
    void draw(){
        cout<<"Rectangle Drawing"<<endl;
    }
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Circle Drawing"<<endl;
    }
};

void shapeDraw(Shape *S){
    S->draw();
}


int main(){
    Rectange R;
    // R.draw();
    Circle C;
    // C.draw();
    shapeDraw(& R);


    return 0;
}