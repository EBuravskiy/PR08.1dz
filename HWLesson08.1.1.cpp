#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string first_name;
    string last_name;
    string gender;
    int age = 0;
    double weigth = 0;
public:
    void Set_first_name() {
        cout << "Enter first name: ";
        cin >> first_name;
    }
    void Set_last_name() {
        cout << "Enter last name: ";
        cin >> last_name;
    }
    void Set_gender() {
        cout << "Select your gender:\n" << "1. Male\n" << "2. Female\n";
        int number;
        cin >> number;
        switch (number) {
        case 1:
            gender = "Male";
            break;
        case 2:
            gender = "Female";
            break;
        default:
            cout << "Error.Wrong gender entered!\n";
            break;
        }
    }
    void Set_age() {
        cout << "Enter your age: ";
        cin >> age;
    }
    void Set_weigth() {
        cout << "Enter your weigth: ";
        cin >> weigth;
    }
    void ChangePersonAge() {
        int age;
        cout << "Enter new age of person: ";
        cin >> age;
        this->age = age;
    }
    void ChangePersonWeigth() {
        double newweigth;
        cout << "Enter new weigth of person: ";
        cin >> newweigth;
        this->weigth = newweigth;
    }
    void printPersonDate() {
        cout << "\nPersonDate:\n";
        cout << "First name: " << first_name << "\n";
        cout << "Last name: " << last_name << "\n";
        cout << "Gender: " << gender << "\n";
        cout << "Age: " << age << "\n";
        cout << "Weigth: " << weigth << "\n\n";
    }
};

class Student : public Person {
private:
    int student_ID_number;
    int year_of_admission;
    int training_period;
public:
    void Set_ID_number() {
        cout << "Enter student ID number: ";
        int student_ID_number;
        cin >> student_ID_number;
        this->student_ID_number = student_ID_number;
    }
    void Set_Year_of_administration() {
        cout << "Enter the student's year of entry: ";
        int year;
        cin >> year;
        this->year_of_admission = year;
    }
    void printStudentDate() {
        cout << "\nStudent's Date:\n";
        cout << "Student's first name: " << first_name << "\n";
        cout << "Student's last name: " << last_name << "\n";
        cout << "Student's gender: " << gender << "\n";
        cout << "Student's age: " << age << "\n";
        cout << "Student's weigth: " << weigth << "\n";
        cout << "Student's ID number: " << student_ID_number << "\n";
        cout << "Student's year of admission: " << year_of_admission << "\n";
    }
};



int main()
{
    Person Petrov;
    Petrov.Set_first_name();
    Petrov.Set_last_name();
    Petrov.Set_gender();
    Petrov.Set_age();
    Petrov.Set_weigth();
    Petrov.printPersonDate();
    Petrov.ChangePersonAge();
    Petrov.ChangePersonWeigth();
    Petrov.printPersonDate();
    Student Ivanov;
    Ivanov.Set_first_name();
    Ivanov.Set_last_name();
    Ivanov.Set_gender();
    Ivanov.Set_age();
    Ivanov.Set_weigth();
    Ivanov.Set_ID_number();
    Ivanov.Set_Year_of_administration();
    Ivanov.printStudentDate();
    Ivanov.ChangePersonAge();
    Ivanov.ChangePersonWeigth();
    Ivanov.printStudentDate();
    return 0;
}