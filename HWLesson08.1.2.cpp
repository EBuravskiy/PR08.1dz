#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string first_name;
    string last_name;
    int age = 0;
    int year_of_admission = 0;
public:
    void Set_Person_Date() {
        cout << "Enter first name: ";
        cin >> first_name;
        cout << "Enter last name: ";
        cin >> last_name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter the year of admission: ";
        cin >> year_of_admission;
    }
    void Get_Person_Date() {
        cout << "======================================================================\n";
        cout << "Date of person: \n";
        cout << "----------------------------------------------------------------------\n";
        cout << "First name: " << first_name << "\n";
        cout << "Last name: " << last_name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Year of admission: " << year_of_admission << "\n";
        cout << "----------------------------------------------------------------------\n";
    }
};

class Teacher : public Person {
private:
    int ID_number = 0;
    int Access_level = 0;
    int Discount_value = 0;
public:
    void Set_Teacher_ID() {
        cout << "Enter ID number (****): ";
        cin >> ID_number;
    }
    void Set_Teacher_Access_level() {
        cout << "Enter access level: \n";
        cout << "1. High level (Administration, Audiences, Librarys, Campus, Laboratories)\n";
        cout << "2. Medium level (Administration, Audiences, Librarys, Laboratories)\n";
        cout << "3. Low level (Administration, Audiences, Librarys)\n";
        int level = 0;
        cin >> level;
        switch (level) {
        case 1:
            Access_level = 1;
            break;
        case 2:
            Access_level = 2;
            break;
        case 3:
            Access_level = 3;
            break;
        default:
            cout << "Error. Wrong access level!\n";
            break;
        }
    }
    void Set_Teacher_Discount() {
        cout << "Enter discout level: \n";
        cout << "1. High level (20%)\n";
        cout << "2. Medium level (15%)\n";
        cout << "3. Low level (10%)\n";
        int level = 0;
        cin >> level;
        switch (level) {
        case 1:
            Discount_value = 1;
            break;
        case 2:
            Discount_value = 2;
            break;
        case 3:
            Discount_value = 3;
            break;
        default:
            cout << "Error. Wrong discount level!\n";
            break;
        }
    }
    void Get_Teacher_ID() {
        cout << "----------------------------------------------------------------------\n";
        cout << "Teacher ID number: " << ID_number << endl;
        cout << "----------------------------------------------------------------------\n";
    } 
    void Get_Teacher_Access() {
        switch (Access_level) {
        case 1:
            cout << "----------------------------------------------------------------------\n";
            cout << "High level (Administration, Audiences, Librarys, Campus, Laboratories)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Medium level (Administration, Audiences, Librarys, Laboratories)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Low level (Administration, Audiences, Librarys)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        default:
            break;
        }
    }
    void Get_Teacher_Discount() {
        switch (Discount_value) {
        case 1: 
            cout << "----------------------------------------------------------------------\n";
            cout << "High level (20%)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Medium level (15%)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Low level (10%)\n";
            cout << "----------------------------------------------------------------------\n";
        default:
            break;
        }
    }
};

class Scientist : public Person {
private:
    int ID_number = 0;
    int Discount_value = 0;
    int Laboratory = 0;
public:
    void Set_Scientist_ID() {
        cout << "Enter Scientist ID number (****): ";
        cin >> ID_number;
    }
    void Set_Laboratory() {
        cout << "Enter laboratory: \n";
        cout << "1. Chemical laboratory\n";
        cout << "2. Laboratory of Physical Experiments\n";
        cout << "3. Biological laboratory\n";
        int laboratory = 0;
        cin >> laboratory;
        switch (laboratory) {
        case 1:
            Laboratory = 1;
            break;
        case 2:
            Laboratory = 2;
            break;
        case 3:
            Laboratory = 3;
            break;
        default:
            cout << "Error. Wrong access level!\n";
            break;
        }
    }
    void Set_Scientist_Discount() {
        cout << "Enter discout level: \n";
        cout << "1. High level (30%)\n";
        cout << "2. Medium level (25%)\n";
        cout << "3. Low level (20%)\n";
        int level = 0;
        cin >> level;
        switch (level) {
        case 1:
            Discount_value = 1;
            break;
        case 2:
            Discount_value = 2;
            break;
        case 3:
            Discount_value = 3;
            break;
        default:
            cout << "Error. Wrong discount level!\n";
            break;
        }
    }
    void Get_Scientist_ID() {
        cout << "----------------------------------------------------------------------\n";
        cout << "Scientist ID number: " << ID_number << endl;
        cout << "----------------------------------------------------------------------\n";
    }
    void Get_Laboratory() {
        switch (Laboratory) {
        case 1:
            cout << "----------------------------------------------------------------------\n";
            cout << "Chemical laboratory\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Laboratory of Physical Experiments\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Biological laboratory\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        default:
            break;
        }
    }
    void Get_Scientist_Discount() {
        switch (Discount_value) {
        case 1:
            cout << "----------------------------------------------------------------------\n";
            cout << "High level (30%)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Medium level (25%)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Low level (20%)\n";
            cout << "----------------------------------------------------------------------\n";
        default:
            break;
        }
    }
};

class Student : public Person {
private:
    int student_ID_number = 0;
    int Discount_value = 0;
    int Access_Campus = 0;
public:
    void Set_Student_ID() {
        cout << "Enter Student ID number (****): ";
        cin >> student_ID_number;
    }
    void Set_Campus() {
        cout << "Enter access level: \n";
        cout << "1. Administration, Audiences, Librarys, Campus #1\n";
        cout << "2. Administration, Audiences, Librarys, Campus #2\n";
        cout << "3. Administration, Audiences, Librarys, Campus #3\n";
        int level = 0;
        cin >> level;
        switch (level) {
        case 1:
            Access_Campus = 1;
            break;
        case 2:
            Access_Campus = 2;
            break;
        case 3:
            Access_Campus = 3;
            break;
        default:
            cout << "Error. Wrong campus!\n";
            break;
        }
    }
    void Set_Student_Discount() {
        cout << "Enter discout level: \n";
        cout << "1. High level (15%)\n";
        cout << "2. Medium level (10%)\n";
        cout << "3. Low level (5%)\n";
        int level = 0;
        cin >> level;
        switch (level) {
        case 1:
            Discount_value = 1;
            break;
        case 2:
            Discount_value = 2;
            break;
        case 3:
            Discount_value = 3;
            break;
        default:
            cout << "Error. Wrong discount level!\n";
            break;
        }
    }
    void Get_Student_ID() {
        cout << "----------------------------------------------------------------------\n";
        cout << "Student ID number: " << student_ID_number << endl;
        cout << "----------------------------------------------------------------------\n";
    }
    void Get_Campus_Access() {
        switch (Access_Campus) {
        case 1:
            cout << "----------------------------------------------------------------------\n";
            cout << "Administration, Audiences, Librarys, Campus #1\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Administration, Audiences, Librarys, Campus #2\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Administration, Audiences, Librarys, Campus #3\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        default:
            break;
        }
    }
    void Get_Student_Discount() {
        switch (Discount_value) {
        case 1:
            cout << "----------------------------------------------------------------------\n";
            cout << "High level (15%)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Medium level (10%)\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Low level (5%)\n";
            cout << "----------------------------------------------------------------------\n";
        default:
            break;
        }
    }
};

class Technical_worker : public Person {
private:
    int ID_number = 0;
    int Access = 0;
public:
    void Set_Technical_worker_ID() {
        cout << "Enter ID number: ";
        cin >> ID_number;
    }
    void Set_Access() {
        cout << "Enter access level: \n";
        cout << "1. Administration\n";
        cout << "2. Audiences\n";
        cout << "3. Librarys\n";
        int level = 0;
        cin >> level;
        switch (level) {
        case 1:
            Access = 1;
            break;
        case 2:
            Access = 2;
            break;
        case 3:
            Access = 3;
            break;
        default:
            cout << "Error. Wrong access level!\n";
            break;
        }
    }
    void Get_Technical_worker_ID() {
        cout << "----------------------------------------------------------------------\n";
        cout << "Technical worker ID number: " << ID_number << endl;
        cout << "----------------------------------------------------------------------\n";
    }
    void Get_Access() {
        switch (Access) {
        case 1:
            cout << "----------------------------------------------------------------------\n";
            cout << "Access: Administration\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 2:
            cout << "----------------------------------------------------------------------\n";
            cout << "Access: Audiences\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        case 3:
            cout << "----------------------------------------------------------------------\n";
            cout << "Access: Librarys\n";
            cout << "----------------------------------------------------------------------\n";
            break;
        default:
            break;
        }
    }
};
int main()
{
    Teacher Ivanov;
    Ivanov.Set_Person_Date();
    Ivanov.Set_Teacher_ID();
    Ivanov.Set_Teacher_Access_level();
    Ivanov.Set_Teacher_Discount();
    Ivanov.Get_Person_Date();
    Ivanov.Get_Teacher_ID();
    Ivanov.Get_Teacher_Access();
    Ivanov.Get_Teacher_Discount();
    cout << "///////////////////////////////////////////////////////////////////////\n";
    Scientist Petrov;
    Petrov.Set_Person_Date();
    Petrov.Set_Scientist_ID();
    Petrov.Set_Laboratory();
    Petrov.Set_Scientist_Discount();
    Petrov.Get_Person_Date();
    Petrov.Get_Scientist_ID();
    Petrov.Get_Laboratory();
    Petrov.Get_Scientist_Discount();
    cout << "///////////////////////////////////////////////////////////////////////\n";
    Student Sidorov;
    Sidorov.Set_Person_Date();
    Sidorov.Set_Student_ID();
    Sidorov.Set_Campus();
    Sidorov.Set_Student_Discount();
    Sidorov.Get_Person_Date();
    Sidorov.Get_Student_ID();
    Sidorov.Get_Campus_Access();
    Sidorov.Get_Student_Discount();
    cout << "///////////////////////////////////////////////////////////////////////\n";
    Technical_worker Alisherov;
    Alisherov.Set_Person_Date();
    Alisherov.Set_Technical_worker_ID();
    Alisherov.Set_Access();
    Alisherov.Get_Person_Date();
    Alisherov.Get_Technical_worker_ID();
    Alisherov.Get_Access();
    return 0;
}