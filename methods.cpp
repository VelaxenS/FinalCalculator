#include "methods.hpp"



const float calculator::findFinal(Grades grades, float midtermGrade)
{
    switch (grades)
    {
    case C3:
        return (60.0 - (midtermGrade * 0.3)) / 0.8;
        break;

    case C2:
        return (65.0 - (midtermGrade * 0.3)) / 0.8;
        break;
    
    case C1:
        return (70.0 - (midtermGrade * 0.3)) / 0.8;
        break;

    case B3:
        return (75.0 - (midtermGrade * 0.3)) / 0.8;
        break;

    case B2:
        return (80.0 - (midtermGrade * 0.3)) / 0.8;
        break;
    case B1:
        return (85.0 - (midtermGrade * 0.3)) / 0.8;
        break;
    
    case A:
        return (90.0 - (midtermGrade * 0.3)) / 0.8;
        break;
    default:
        break;
    }
}

const void calculator::getCoursesInfo()
{
    bool done = false;
    short int count = 1;

    while(!done)
    {
        std::string course;
        float courseGrade;
        std::cout << std::format("Lutfen {}. dersi giriniz veya 'bitir' girin... ", count) << "\n";
        std::cin >> course;

        if (course == "bitir")
        {
            done = true;
            break;
        }
            

        this->courses.push_back(course);

        std::cout << std::format("{} dersinin midterm notunu giriniz...", course) << "\n";
        std::cin >> courseGrade;
        this->midtermGrades.push_back(courseGrade);

        count++;
    }
}

const void calculator::printResult()
{
    for (int i = 0; i < courses.size(); i++)
    {
        for(int grd = C3; grd != length; grd++)
        {
            Grades grade = static_cast<Grades>(grd);
            float f = this->findFinal(grade, midtermGrades[i]);
            std::cout << courses[i] << " : " << std::format("Min Final Grade for {} = ", sGrade[grd]) << f << "\n";
        }

        std::cout << "-------------------------" << "\n";

    }
    
}