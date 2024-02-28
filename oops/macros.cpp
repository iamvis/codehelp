#include<iostream>
using namespace std;
#define PI 3.14487243

float criclearea(float r){
    return PI*r*r;
}
float criclePerimerter(float r){
    return 2*PI*r;
}
int main(){
    cout<<criclearea(65.4)<<endl;
    cout<<criclePerimerter(65.4)<<endl;
    
    
    return 0;

}