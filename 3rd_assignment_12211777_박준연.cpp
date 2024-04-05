//Friend 타입의 myFriends 배열


#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
#define Maxis 100

class Friend{
    public:
        Friend(){
            setName(" ");
            setAge(0);
            setGpa(0.0);
            setMobile(" ");
        };
        void setName(string a){
            name=a;
        }
        string getName(){
            return name;
        }
        void setAge(int a){
            age=a;
        }
        int getAge(){
            return age;
        }
        void setGpa(float a){
            gpa=a;
        }
        float getGpa(){
            return gpa;
        }
        void setMobile(string a){
            mobile=a;
        }
        string getMobile(){
            return mobile;
        }



    private:

        string name;
        int age;
        float gpa;
        string mobile;
        int num;

};
int infileFunction(string a, Friend []);
void printArray(Friend x[],int num);
int main(){
    int numFriend=0;
    Friend myFriends[Maxis];
    numFriend=infileFunction("myFriends.txt",myFriends);
    printArray(myFriends,numFriend);


}
int infileFunction(string a, Friend x[]){
    string inputName;
    int inputAge;
    float inputGpa;
    string inputMobile;
    fstream inFile(a,ios::in);
    if (!inFile){
        cout<<"there is no file "<<endl;
        exit(-1);
    }
    int count=0;
    while(inFile>>inputName>>inputAge>>inputGpa>>inputMobile){
        x[count].setName(inputName);
        x[count].setAge(inputAge);
        x[count].setGpa(inputGpa);
        x[count].setMobile(inputMobile);
        count++;

}
    return count;
}
void printArray(Friend x[],int num){
    for(int i=0;i<num;i++){
        cout<<x[i].getName()<<","<<x[i].getAge()<<","<<x[i].getGpa()<<","<<x[i].getMobile()<<endl;
    }
}



