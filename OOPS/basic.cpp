#include <iostream>
using namespace std;
class Animal
{
private:
    int salary;

public:
    int age = 10;
    int weight = 58;

    Animal()
    {
        this->age = 0;
        this->weight = 0; 
        this->salary = 0;
    }
    Animal(int age)
    {
        this->age = age;
        cout << "parameter constructorised is called " << age << endl;
    }
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->salary = obj.salary;
        cout << "i am inside the   i get copied by someone  constructor " << endl;
    }
    void eat()
    {
    }
    void sleep()
    {
    }
    int getsalary()
    {
        return salary;
    }

    void setsalary(int salary)
    {
        this->salary = salary; //  this is refresnig to the fisrt salary woards and the funtion input is refering to the second parameters
    }
};
int main()
{
    Animal ramesh;
    Animal a(12);
    Animal c = a;
    cout << "age of the ramesh is the " << ramesh.age << endl;
    cout << "weight of the ramesh is the " << ramesh.weight;
}