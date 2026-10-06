#include <iostream>
using namespace std;


class Student
{
protected:
    int roll;
    char name[25];

public:
    void getStudentData()
    {
        cout << "\n----------------------";
        cout << "\nEnter roll no.       : ";
        cin >> roll;
        cout << "Enter student name   : ";
        cin >> name;
    }

    void putStudentData()
    {
        cout << "\n---------------------";
        cout << "\n**** Student Details ****";
        cout << "\n---------------------";
        cout << "\nRoll no.     : " << roll;
        cout << "\nStudent Name : " << name << endl;
    }
};


{
    float marks[3];
public:
    void getExamData()
    {
        getStudentData();
        cout << "Enter marks for 3 subjects: \n";
        for(int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void putExamData()
    {
        putStudentData();
        cout << "Exam Marks: ";
        for(int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    
};


class StudentSports : public Student
{
    int sportsScore;
public:
    void getSportsData()
    {
        getStudentData();
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }

    void putSportsData()
    {
        putStudentData();
        cout << "Sports Score: " << sportsScore << endl;
    }
};

int main()
{
    cout << "--- Exam Department Record ---" << endl;
    StudentExam examStudent;
    examStudent.getExamData();
    examStudent.putExamData();

    cout << "\n--- Sports Department Record ---" << endl;
    StudentSports sportsStudent;
    sportsStudent.getSportsData();
    sportsStudent.putSportsData();

    return 0;
}
