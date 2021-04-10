#pragma once

#include <string>
#include <vector>

class Course {
private:
	// List of all students in course.
	std::vector<std::string> studentList;
public:
	// Constructors
	Course();
	// Destructor
	~Course();

	// Add a student to the end of the list.
	void addStudent(std::string student);

	// Removes a student from the course.
	// Returns true if successfull.
	bool removeStudent(std::string student);

	// Returns the amount of students registered to the course.
	int getStudentAmount();

	// Print the name of all the students registered to the course.
	void print();
};