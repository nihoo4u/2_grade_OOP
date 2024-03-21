#include <iostream>
using namespace std;


int main(){
    int num=10;
    int name;
    int pass=0;
    int fail=0;
    string nm;
    int student[num];
    for(int i=0;i<num;i++){
        cout<<"enter result"<<endl;
        cin>>name;
        if (name==1){
            pass+=1;
        }
        else{
            fail+=1;
        }
    }
    cout<<"number of pass students is "<<pass<<endl;

    if(pass>8){
        cout<<"bonus";
    }
    else{
        cout<<"do your best";
    }
    
}


