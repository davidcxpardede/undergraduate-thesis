#include <iostream>
using namespace std;

class Student {
    public: 
        string name;
        string major;
        double gpa;
        Student (string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors () {
            if(gpa >= 3.0) {
                return true;
            }
            return false;
        };

};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);
    Student student3("David", "Engineering", 3.0);

    cout << student3.hasHonors();

    return 0;
}