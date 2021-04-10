
#include "course.h"

Course::Course() {
	// Empty
}
Course::~Course() {
	// Empty
}

void Course::addStudent(std::string student) {
	this->studentList.push_back(student);
}

bool Course::removeStudent(std::string student) {
	// Loop trough the list.
	for (int i = 0; i < this->studentList.size(); i++) {
		// If we find the student.
		if (this->studentList[i] == student) {
			// Erases the student from the list.
			this->studentList.erase(this->studentList.begin() + i);
			return true;
		}
	}
	return false;
}

int Course::getStudentAmount() {
	return this->studentList.size();
}

void Course::print() {
	for (int i = 0; i < this->studentList.size(); i++) {
		printf("%s, ", this->studentList[i].c_str());
	}
	printf("\n");
}