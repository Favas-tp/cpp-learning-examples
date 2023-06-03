#include <string>
using std::string;

class GradeBook
{
public:
   const static int students = 10;
   const static int tests = 3;

   GradeBook( string, const int [][ tests ] );
   void setCourseName( string );
   string getCourseName();
   void displayMessage();
   void processGrades();
   int getMinimum();
   int getMaximum();
   double getAverage( const int [], const int );
   void outputBarchart();
   void outputGrades();
private:
   string courseName;
   int grades[ students ][ tests ];
};