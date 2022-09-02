#include<bits/stdc++.h>
using namespace std;
//Classes
class Person{
    private:
        string firstName;
        string lastName;
    public:
        void testMethod();
        void setName(string firstName,string lastName){
            this->firstName = firstName;
            this->lastName = lastName;
        }
        string getFullName(){
            return this->firstName + " " + this->lastName + "\n";
        }
};
void Person:: testMethod() {
    cout << "Hello, I am test Method";
}
int main(){
    Person *p = new Person();
    p->setName("Himanshu","Kataria");
    cout << p->getFullName() ;

}