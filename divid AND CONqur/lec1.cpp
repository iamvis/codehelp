#include<iostream>
using namespace std;

void merge(int *array, int s, int e){
int mid= s-(s-e)/2;
int len1= mid-s+1;
int len2= e-mid;
//dynamic array creat karenege yaha q ki recursion bhai code ko barbad kar denge warna
int *left = new int [len1];
int *right= new int [len2];

//copy karenge values ko
int k= s;
for(int i=0; i<len1;i++){
    left[i]=array[k];
    k++;
}

k = mid+1;
for(int i=0 ; i<len2; i++){
    right[i]= array[k];
    k++;
}

//merge logicṆ

int leftIndex =0;
int rightIndex =0;
int mainIndex = s;
while(leftIndex<len1 && rightIndex<len2){
    if(left[leftIndex]<right[rightIndex]){
        array[mainIndex]=left[leftIndex];
        mainIndex++;
        leftIndex++;
    }
    else{
        array[mainIndex]=right[rightIndex];
        mainIndex++;
        rightIndex++;
    }
}
//copy logic  for left array
while(leftIndex <len1){
    array[mainIndex++]=left[leftIndex++];
}

//copy logic for right array
while(rightIndex <len2){
    array[mainIndex++]=right[rightIndex++];

}
}

void mergesort(int *array, int s, int e){
    int mid= s-(s-e)/2;
    //base case
    //array m  ek he element of 

    //array khtm ho jaye 
    if(s>=e){
         return;
    }
    
    //1 todna hai 2 part main
    //1 st part
    mergesort(array, s,mid);

    // 2end part 
    mergesort(array, mid+1, e);

    //2 fir jodna hai
    merge(array, s, e);

}

int main(){
    int array[]={4, 5, 3, 2, 12,9,10};
    int n= 7;
    int s=0;
    int e = n-1;
    cout<<"pehele  ka Array"<<endl;
        for(int i=0; i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    mergesort(array, s,e);
        cout<<"Baad  ka Array"<<endl;
    for(int i=0; i<n;i++){
        cout<<array[i]<<" ";
    }

}