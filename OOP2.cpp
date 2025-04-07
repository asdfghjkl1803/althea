#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Grades {
    public:
        string name;
        string id;
        double math;
        double science;
        double english;
        double filipino;
        double hekasi;
        double average;

    public:
        double averageScore() {
            double average_score = (math + science + english + filipino + hekasi) / 5;
            return average_score;
        }

        void setData(string n, string…", "20221113019", 76, 82, 86, 97, 91);
    gradeList[2].setData("Gaspi", "20241120910", 77, 80, 87, 92, 82);
    gradeList[3].setData("Untalan", "20241100947", 78, 89, 89, 81, 75);
    gradeList[4].setData("Aldeguer", "20241100023475", 79, 84, 90, 88, 80);
     
    insertionSort(gradeList);
    
    cout << "Sorted Average Scores: " << endl;
    for (const auto& grade : gradeList) {
        cout << "ID: " << grade.id << "     " << "Average: " << grade.average << endl;
    }
    
    return 0;
}