#include <iostream>
using namespace std;


int main(){

int widthOne, lenghtOne;
int widthTwo,lenghtTwo;

int areaOne;
int areaTwo;

cout <<"Enter width and length of the first"<< endl;
cout <<"rectangle, seperated by a space or newline"<< endl;
cin>> widthOne>> lenghtOne;

cout <<"Enter width and length of the second"<< endl;
cout <<"rectangle, seperated by a space or newline"<< endl;
cin>> widthTwo>> lenghtTwo;

areaOne=widthTwo * lenghtTwo;
areaTwo=widthTwo * lenghtTwo;

cout<<"rectangle one has an area of "<<areaOne<< endl;
cout<<"rectangle two has an area of "<<areaTwo<< endl;

if(areaOne > areaTwo ){
    cout<<"rectangle one is bigger "<<endl;

}

if (areaOne < areaTwo){
    cout<<"rectangle two is bigger" <<endl;
}


if (areaOne == areaTwo){
    cout<<"They share the same area"<<endl;


}





}