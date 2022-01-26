#include<iostream>
using namespace std;
class Employee{
   public :
   string Name;
   string Company ;
   int Age ;
void IntroduceYourself(){
cout<<"Name = "<< Name <<endl ;
cout<<"Company = "<< Company <<endl ;
cout<<"Age = "<< Age <<endl ;
}
};
int main()
{
    // ACCESS MODIFIERS OOPS
Employee employee1 ;
employee1.Name = "shashank";
employee1.Company = "Google";
employee1.Age = 23;
employee1.IntroduceYourself();
Employee employee2 ;
employee2.Name = "shashank";
employee2.Company = "Google";
employee2.Age = 23;
employee2.IntroduceYourself();
Employee employee3 ;
employee3.Name = "shailesh";
employee3.Company = "Google";
employee3.Age = 23;
employee3.IntroduceYourself();
Employee employee4 ;
employee4.Name = "shailesh";
employee4.Company = "Google";
employee4.Age = 23;
employee4.IntroduceYourself();


}