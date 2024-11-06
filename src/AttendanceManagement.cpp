#include "../include/AttendanceManagement.hpp"

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}

/***
 * @TODO: Use Datetime Type
 ***/
void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime, bool state)
{
    ifstream testOpenFile("attendance.csv");
    bool fileExists = testOpenFile.good();
    testOpenFile.close();

    ofstream csvFile;
    csvFile.open("attendance.csv", ofstream::app);
    if (!fileExists)
    {
        //column titles
        csvFile << "Id de Estudiante, "
                << "Nombre/s, "
                << "Apellido/s, "
                << "Id de Materia, "
                << "Nombre de Materia, "
                << "Marca temporal, "
                << "Presente\n";
    }

    //data:
    csvFile << student->getIdentifier() << ", "
            << student->getName() << ", "
            << student->getSurname() << ", "
            << course->getIdentifier() << ", "
            << course->getName() << ", "
            << datetime << ", "
            << state << "\n"; /* code */

    csvFile.close();
}
void AttendanceManagement::showAttendance()
{
    ifstream csvFile("attendance.csv");
    if (csvFile.is_open())
        cout << csvFile.rdbuf();
    csvFile.close();
}
