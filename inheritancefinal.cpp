#include<iostream>
using namespace std;
class Employee{
   private :
   string Company ;
   int Age ;
   protected:
    string Name;
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
    Age =age ;
    } 
    
};
class Developer:Employee {
public:
string FavProgrammingLanguage;
Developer(string name,string company,int age,string favProgrammingLanguage):Employee(name ,company,age){ 
    FavProgrammingLanguage = favProgrammingLanguage ;
}
    void FixBug() {
        cout<<getName()<<"fix bug using"<<FavProgrammingLanguage<<endl;
    }

    };
class Teacher:Employee{
    public:
 string Subject;
 void PrepareLesson(){
     cout<< Name <<" is preparing for "<< Subject <<" lesson "<<endl;
 }
Teacher(string name,string company,int age,string subject):Employee(name ,company,age){ 
    Subject = subject ;
}

    };
int main()
{
Developer d = Developer("mohit","google",13,"c++") ;
 d.FixBug();
 Teacher  t = Teacher("mohit","google",13,"c++") ;
 t.PrepareLesson();


}
