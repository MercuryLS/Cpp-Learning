#include <string> // program uses C+t Standard Library string class
using namespace std;
class GradeBook
{
public:
    static const int students = 10; // number of students
    static const int tests = 3;     // number of tests
    GradeBook(string, const int[][tests]);
    void setCourseName(string);                // function to set the course name
    string getCourseName();                    // function to retrieve the course name
    void displayMessage();                     // display a we1come message
    void processGrades();                      // l perform various operations on the arade data
    int getMinimum();                          // find the minimum grade in the grade book
    int getMaximum();                          // find the maximum grade in the grade book
    double getAverage(const int[], const int); // get student's average
    void outputBarChart();                     // output bar chart of grade distribution
    void outputGrades();                       // output the contents of the grades array
private:
    string courseName;                         // course name for this grade book
    int grades[students][tests];               // two-dimensional array of grades
};// end class GradeBook
