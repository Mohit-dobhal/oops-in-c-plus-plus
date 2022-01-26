#include<iostream>
using namespace std;
class Employee{
   public :
   string Name;
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
};
int main()
{
// ENCAPSULATION = In normal terms Encapsulation is defined as wrapping up of data and information under a single unit.
// In Object Oriented Programming,
// Encapsulation is defined as binding together the data and the functions that manipulates them.
Employee employee1 = Employee("mohit","google",13) ;
employee1.IntroduceYourself();
Employee employee2 = Employee("shailesh","google",23);
employee2.IntroduceYourself();
Employee employee3= Employee("shailesh","google",23);
employee3.IntroduceYourself();
Employee employee4 = Employee("shailesh","google",23) ;
employee4.IntroduceYourself();
employee1.setAge(15);
std::cout<<employee1.getName()<<" is " << employee1.getAge()<<" years old "<<std::endl ;

}