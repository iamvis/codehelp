#include<iostream>
#include "bird.h"
using namespace std;
void somebird(Bird*&bird){
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
}
int main(){
   Bird*bird= new pigeon();
    somebird(bird);

    return 0;
}