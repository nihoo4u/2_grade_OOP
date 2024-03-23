// 과제번호: 1주차 과제, 학번: 12211777, 이름: 박준연 학과:정보통신공학과


 /*어렵지 않은 과제였으나 처음에 실행했을 때 예상과 다르게 출력문이 출력되지 않아 적지 않게 당황하였었다
 실행되지 않았던 이유는 출력문이 if 문에 들어가 있었고 이를 인지하지 못하고 있었다.
 아무리 쉬운 문제더라도 교수님께서 말씀하신대로 구조화 프로그래밍을 생활화해야겠다는 생각이 들었다.
 
 <코드 설명>
 처음에 int 형태의 num 변수를 통해 입력할 친구 수를 결정하게 된다. 이 num은 이후에 for문에 쓰이면서 
 입력하는 num에 따라 입력을 받는 반복문의 반복횟수가 결정되게 된다.
 변수는 총 2 개의 묶음으로 구분된다. 입력 받는 데에 사용되는 변수 묶음과 실제 가장 나이 많은 사람에 대한 정보를 저장하는 묶음이다.
 가독성을 높이기 위해 입력을 받는 변수 이름을 Input으로 시작하도록 하였다.
 for문의 내용은 입력 변수를 통해서 입력을 받고 원래 저장되어있던 나이 age 와 InputAge을 비교해서 새로 입력된 사람의 나이가 많으면
 저장 변수에 입력변수가 갖고 있던 정보를 복사해서 저장하는 방식이다.
 만약에 InputAge<age이게 되면 if문이 실행되지 않아서 아무 일도 일어나지 않고 for문 다음 실행으로 넘어가게 된다.
*/



#include <iostream>
using namespace std;



int main(){
    int num;
    string InputName;
    int InputAge;
    float InputGPA;
    string InputNumber;
 
    string name;
    int age=0;
    float gpa;
    string number;

    cout<<"input the number of friends"<<endl;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        cout<<"input the information about a friend"<<endl;
        cout<<"input the name"<<endl;
        cin>>InputName;
        cout<<"input the age"<<endl;
        cin>>InputAge;
        cout<<"input the GPA"<<endl;
        cin>>InputGPA;
        cout<<"input the PhoneNumber"<<endl;
        cin>>InputNumber;

        if (InputAge>age){
            name=InputName;
            age=InputAge;
            gpa=InputGPA;
            number=InputNumber;

            
            

            
        }
        

        
        
            
            


        
    
        
    }

    cout<<"The oldest person name is "<<endl;
    cout<<name<<endl;
    cout<<"The oldest person age is "<<endl;
    cout<<age<<endl;
    cout<<"The oldest person GPA is "<<endl;
    cout<<gpa<<endl;
    cout<<"The oldest person PhoneNumber is "<<endl;
    cout<<number<<endl;



    
    
    
}


