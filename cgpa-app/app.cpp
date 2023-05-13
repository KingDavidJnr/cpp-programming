#include <iostream>

// Function to calculate CGPA based on the grading system
float calculateCGPA(float* grades, int numCourses, bool isFivePointScale) {
    float totalGradePoints = 0.0;
    float totalCredits = 0.0;

    // Assign the maximum grade point based on the grading system
    float maxGradePoint = isFivePointScale ? 5.0 : 4.0;

    // Iterate through the grades and calculate the total grade points
    for (int i = 0; i < numCourses; ++i) {
        totalGradePoints += grades[i];
        totalCredits += maxGradePoint;
    }

    // Calculate the CGPA
    float cgpa = totalGradePoints / totalCredits;

    return cgpa;
}

int main() {
    int numCourses;
    bool isFivePointScale;

    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    // Dynamic array to store grades for each course
    float* grades = new float[numCourses];

    std::cout << "Enter the grades for each course:\n";
    for (int i = 0; i < numCourses; ++i) {
        std::cout << "Course " << i + 1 << " grade: ";
        std::cin >> grades[i];
    }

    std::cout << "Is the grading system on a 5.0 scale? (1 for yes, 0 for no): ";
    std::cin >> isFivePointScale;

    // Calculate the CGPA
    float cgpa = calculateCGPA(grades, numCourses, isFivePointScale);

    std::cout << "Your CGPA is: " << cgpa << std::endl;

    // Clean up dynamic memory
    delete[] grades;

    return 0;
}
