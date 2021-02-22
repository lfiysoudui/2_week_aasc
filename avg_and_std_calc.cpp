#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;



int main(){
    int n = 0;
    float sum = 0;
    cin >> n ;
    float *ary = new float [n];
    for(int i=0;i<n;i++){
        cin >> ary[i];
        sum = sum + ary[i];
    }
    float avg = float(sum)/float(n);
    cout <<"Average:"<<avg;
    float sd = 0;
    for(int i=0;i<n;i++){
        sd = sd + powf(ary[i]-avg,2);
    }
    cout <<"\tStandard deviation:"<<powf(sd/float(n),0.5);
}  
