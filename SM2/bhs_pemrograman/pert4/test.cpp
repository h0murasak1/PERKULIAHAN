#include <iostream>
using namespace std;
#include <fstream>
#include <string>
struct Student
{
    string name;
    int age;
    string major;
};

void saveAttendance(const Student &student)
{
    ofstream attendanceFile("attendance.txt", ios::app);
    if (attendanceFile.is_open())
    {
        attendanceFile << "Name: " << student.name << endl;
        attendanceFile << "Age: " << student.age << endl;
        attendanceFile << "Major: " << student.major << endl;
        attendanceFile.close();
        cout << "Attendance recorded successfully." << endl;
    }
    else
    {
        cout << "Unable to open the attendance file." << endl;
    }
}

int main()
{
    Student student;
    cout << "Enter student name: ";
    getline(cin, student.name);
    cout << "Enter student age: ";
    cin >> student.age;
    cin.ignore(); // Ignore the newline character
    cout << "Enter student major: ";
    getline(cin, student.major);

    saveAttendance(student);

    return 0;
}