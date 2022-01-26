#include<iostream>
using namespace std;
class Employee{
   public :
   string Name;
   string Company ;
   int Age ;
/*  public :
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
} */
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

    //CONSTRUCTOR =A constructor is a special type of member function of a class which initializes objects of a class.
    // In C++, Constructor is automatically called when object(instance of class) create.
    // It is special member function of the class because it does not have any return type.

Employee employee1 = Employee("mohit","google",13) ;
/* employee1.Name = "shashank";
employee1.Company = "Google";
employee1.Age = 23; */
employee1.IntroduceYourself();
Employee employee2 = Employee("shailesh","google",23);
/* employee2.Name = "shashank";
employee2.Company = "Google";
employee2.Age = 23; */
employee2.IntroduceYourself();
Employee employee3 = Employee("shailesh","google",23);
/* employee3.Name = "shailesh";
employee3.Company = "Google";
employee3.Age = 23; */
employee3.IntroduceYourself();
Employee employee4 = Employee("shailesh","google",23) ;
/* employee4.Name = "shailesh";
employee4.Company = "Google";
employee4.Age = 23; */
employee4.IntroduceYourself();
/* mployee1.setAge(15);
std::cout<<employee1.getName()<<" is " << employee1.getAge()<<" years old "<<std::endl ; */

}