#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int id;
    string name;
    double mathMark;
    double scienceMark;
    double englishMark;

public:
    Student(int studentId, string studentName,
            double math, double science, double english) {
        id = studentId;
        name = studentName;
        mathMark = math;
        scienceMark = science;
        englishMark = english;
    }

    double getAverage() const {
        return (mathMark + scienceMark + englishMark) / 3;
    }

    char getGrade() const {
        double average = getAverage();

        if (average >= 90) return 'A';
        if (average >= 80) return 'B';
        if (average >= 70) return 'C';
        if (average >= 60) return 'D';
        return 'F';
    }

    void display() const {
        cout << "ID: " << id << '\n';
        cout << "Name: " << name << '\n';
        cout << "Average: " << getAverage() << '\n';
        cout << "Grade: " << getGrade() << "\n\n";
    }
};
int main() {
    Student student1(101, "Aarav", 91, 84, 88);
    Student student2(102, "Mira", 76, 82, 79);
    Student student3(103, "Dev", 58, 64, 61);

    student1.display();
    student2.display();
    student3.display();

    return 0;
}