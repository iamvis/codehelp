// #include<iostream>
// using namespace std;

// // classdataTypeName{
// //     int age;
// //     int weight;
// //     char ch;
// //     // ///please revise padding AND GREEDY ALIIGHMENT 
// //     // KYA HOTA HAI

// // };

// // class dataTypeName{
// //   double a;
// //   int b;
// //   short c;
// //   char d;  
// // };-------->size 16

// class dataTypeName{
//     char c;
//     int i;
//     short s;
// };
// int main(){
//     dataTypeName variableName;
//     cout<<"size:  "<<sizeof(dataTypeName);
//     return  0;
// }

//************example of class**************//
#include<iostream>
#include<limits.h>
using namespace std;
class fruit{
    //******Acces Modifire
    // -----> Public:
    // -----> Private(default)
    // -----> Protected
    private:
    int kutta;
    public:

    //property or State
     int weight;
     string color;
     bool ripe;

     //behaviour
     void run(int bahutfast){
     cout<<"kela dorta hai: "<<bahutfast<<endl;
     }

     void wo(int lamba){
        cout<<"kela wo kaar skta hai: " <<lamba<<endl;
     }

     int  getachha(){
        return kutta;
     }

     void setachha(int w){
        kutta = w;
        
     }
};
int main(){
//     //declaration in main function
//     fruit banana;

//     //accesiong and cahnging the properties
//     banana.weight =7;
//     banana.color="yellow";
//     banana.ripe=true;
    
// ///in public accese modeiifire
//     //accesing behaviour
//     cout<<"behaviour of class"<<endl;
//     banana.run(10);
//     banana.wo(90);
//   cout<<endl;

    
//     ///printing banaas Properties
//      cout<<"Properties of class"<<endl;
//     cout<<banana.weight<<endl;
//     cout<<banana.color<<endl;
//     cout<<banana.ripe<<endl;
//     cout<<endl;
    
//     ///in private accese modeiifire
//     /// we use get and set methods
    
//      banana.setachha(71);
//      cout<<"kutta "<<banana.getachha()<<endl;


     //dyanamic memory allocation
     cout<<"******Dyanamic Memory Allocation******"<<endl;
     fruit* banana=new fruit;

     //accesing
     (*banana).weight=15;
     (*banana).color="black";
     cout<<   banana->weight<<endl;
    cout<<   banana->color<<endl;
    cout<<endl;

    ///alternative
    banana->weight=59;
    banana->color= "white";

    cout<<   banana->weight<<endl;
    cout<<   banana->color<<endl;
    return 0;
}