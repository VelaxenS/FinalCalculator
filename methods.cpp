#include "methods.hpp"


/// <summary>
/// Calculates the required final grade.
/// </summary>
/// <param name="grades"></param>
/// <param name="midtermGrade"></param>
/// <returns></returns>

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

/// <summary>
/// Casted in order to start getting input from the user.
/// </summary>
/// <returns></returns>

const void calculator::getCoursesInfo()
{
    bool done = false;
    short int count = 1;

    while(!done)
    {
        std::string course;
        float courseGrade;
        std::string n = "0123456789";


        std::cout << std::format("Lutfen {}. dersi giriniz veya 'bitir' girin... ", count) << "\n";
        std::cin >> course;

        // Checking for the user input to stop getting course input

        if (course == "bitir")
        {
            done = true;
            break;
        }

        // Checking if user input contains number

        for (int i = 0; i < course.size(); i++)
        {
            for (int x = 0; x < n.size(); x++)
            {
                if (course[i] == n[x])
                {
                    system("cls");
                    std::cerr << "Error - invalid course type : Course name cannot contain number" << "\n\n";
                    getCoursesInfo();
                }
            }
        }

        // TODO: Checking if user input contains space

        /*
        if (course.find_first_of(" ") == std::string::npos)
        {
            system("cls");
            std::cerr << "Error - empty space detected : Please input your course name without space (for instance = 'MaterialScience')" << "\n\n";
            getCoursesInfo();
        }*/


        system("cls");
        this->courses.push_back(course);


        std::cout << std::format("{} dersinin midterm notunu giriniz...", course) << "\n";
        std::cin >> courseGrade;
        this->midtermGrades.push_back(courseGrade);

        count++;

        system("cls");
    }

}

/// <summary>
/// Prints the calculation results
/// </summary>
/// <returns></returns>

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