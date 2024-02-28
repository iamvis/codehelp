
///operator overloading 
// #include<iostream>
// using namespace std;


// class param{
//     public:
//     int value;

//     void operator +(param &obj2){
//         int value1=this->value;
//         int value2= obj2.value;
//         cout<<(value-value2)<<endl;
//     }

// };


// int main(){
//     param obj1, obj2;
//     obj1.value=7;
//     obj2.value=9;

//     //defffernce print karana hai + operator se
//     obj1+obj2;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;


class param{
    public:
    vector<int>value;

    void operator <<(param &obj2){
        for(int i=0; i<value.size(); i++){
           int value1=this->value[i];
           int value2= obj2.value[i];
         cout<<(value1*value2)<<endl;
        }
       
       
    }

};


int main(){
    param obj1, obj2;
    
    obj1.value={2,3,4,5};
    obj2.value={11, 23, 33 ,22};

    //defffernce print karana hai + operator se
    obj1<<obj2;
    return 0;
}