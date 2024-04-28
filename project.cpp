#include <iostream>
using namespace std;
struct Date{
    int day;
    int month;
    int year;
};

struct studentInformation{
    int idStudent;
    string fullName;
    string firstName;
    string lastName;
    string gender;
    Date d;
    string socialId;
};


struct Class{
    string nameClass;
    studentInformation* listOfStudent;
};

struct listClass{
    Class* listOfClass;
};

struct Course{
    string idCourse;
    string courseName;
    string className;
    string teacherName;
    int numberOfCredits;
    int numberOfCurrentStudent;
    int maxStudent = 50;
    string dayOfWeek;
    string session;
    studentInformation* listOfStudent;
    score* listOfScore;
};
//S1 (07:30), S2 (09:30), S3(13:30) and S4 (15:30)).

struct listOfCourse{
    Course* listOfCourse;
};

struct Semester{
    int noSemester;
    string schoolYear;
    Date Start;
    Date End;
};
struct User{
    string userName;
    string passWord;
};
struct studentUser{
    User account;
    studentInformation info;
};
struct managerUser{
    User account;
    string name;
};
struct score{
    float otherMark;
    float midtermMark;
    float finalMark;
    float totalMark;
};
struct studentCourses{
    studentInformation student;
    //Danh sach khoa hoc cua sinh vien se tham gia;
    //Diem cua khoa hoc
};
int main()
{
    cout << "hello" << endl;

    return 0;
}
