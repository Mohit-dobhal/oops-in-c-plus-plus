#include<iostream>
using namespace std;
class AbstractEmployee{
void AskForPromotion() ;
};
class Employee :AbstractEmployee {
   private :
   string Name ;
   string Company ;
   int Age ;
public :
void setName(string name){//setter
    Name = name ;
}
string getName(){//getter
    return Name;
}
void setCompany(string company){//setters
    Company = company ;
}
string getCompany(){//getter
    return Company;
}
void setAge(int age){//setter
if( age >=18)
    Age = age ;
}
int getAge(){//getter

    return Age;
}
void IntroduceYourself(){
std::cout<<"Name = "<< Name <<std::endl ;
std::cout<<"Company = "<< Company <<std::endl ;
std::cout<<"Age = "<< Age <<std::endl ;
}
Employee(string name ,string company,int age){
    Name = name ;
    Company = company ;
    Age =age ;}
void AskForPromotion(){
 if (Age >30)
 cout<<Name<<" "<<"got promoted "<<endl;
else
 cout<<Name<<" "<<"sorry no promotion for you"<<endl;
}
};

int main()
{
Employee employee1 = Employee("shailesh","google",23) ;
employee1.AskForPromotion();
Employee employee2 = Employee("mohit","google",33) ;
employee2.AskForPromotion();
}