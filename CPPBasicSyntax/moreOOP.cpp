#include <iostream>
using namespace std;

// Interface example
class AbstractEmployee
{ // abstract function
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
protected: // private by default
    string name;
    string company;
    int age;

public:
    Employee(string aName, string aCompany, int aAge)
    {
        name = aName;
        company = aCompany;
        age = aAge;
    }

    // Encapsulation examples
    void setName(string aName) { name = aName; }
    string getName() { return name; }
    void setCompany(string aCompany) { company = aCompany; }
    string getCompany() { return company; }
    void setAge(int aAge) { age = aAge; }
    int getAge() { return age; }

    // Abstract method used from AbstractEmployee
    void askForPromotion()
    {
        if (age > 30)
        {
            cout << name << " got promoted!" << endl;
        }
        else
        {
            cout << name << " not promoted!" << endl;
        }
    }

    void intro()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work()
    {
        cout << name << " working..." << endl;
    }
};

// Inheritance example
class Developer : public Employee
{
private:
    string favoriteLanguage;

public:
    Developer(string aName, string aCompany, int aAge, string aFavoriteLanguage) : Employee(aName, aCompany, aAge)
    {
        favoriteLanguage = aFavoriteLanguage;
    }

    void setFavoriteLanguage(string aFavoriteLanguage)
    {
        favoriteLanguage = aFavoriteLanguage;
    }
    string getFavoriteLanguage() { return favoriteLanguage; }

    void fixBug()
    { // used protected "name" above in Employee class
        cout << name << " fixed bug using " << favoriteLanguage << endl;
    }

    // Polymorphism
    void work()
    {
        cout << name << " writing code..." << endl;
    }
};

// Inheritance example
class Teacher : public Employee
{
private:
    string subject;

public:
    Teacher(string aName, string aCompany, int aAge, string aSubject) : Employee(aName, aCompany, aAge)
    {
        subject = aSubject;
    }

    void prepareLesson()
    {
        cout << name << " prepared " << subject << " lesson" << endl;
    }
};

int main()
{
    Employee employee1("John", "Amazon", 35);
    employee1.intro();
    employee1.askForPromotion();

    cout << endl;

    Developer developer1("Connor", "USMC", 25, "C++");
    developer1.fixBug();
    developer1.askForPromotion();

    cout << endl;

    Teacher teacher1("Kyndall", "N/A", 25, "Computer Science");
    teacher1.prepareLesson();

    // Polymorphism example
    Employee *e1 = &developer1;
    Employee *e2 = &teacher1;
    e1->work();
    e2->work();
}