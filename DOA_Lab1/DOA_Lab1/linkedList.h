#pragma once

#include <iostream>
#include <string>
#include "course.h"

class CourseNode {
private:
	// Next node in list.
	CourseNode* next;
	// The name of the Course.
	std::string courseName;
	// Reference to the Course object
	Course* course;
public:
	// Constructor.
	CourseNode();
	// Desrtuctor.
	~CourseNode();

	// Set the pointer to the next Node.
	void setNext(CourseNode* next);

	// Set the name of the Course.
	void setCourseName(std::string courseName);

	// Set the pointer to the Course object.
	void setCourse(Course* course);

	// Returns the pointer to the next Node.
	CourseNode* getNext();

	// Returns the name of the Course.
	std::string getCourseName();

	// Returns the pointer to the Course object.
	Course* getCourse();

	// Removes the inserted student from the course.
	void removeStudent(std::string student);

	// Prints the data of the Node.
	// Course’s name: Student, Student, ...
	void print();
};

// Linked list can only search information
// in one direction, front to back.
class LList {
private:
	// The start of the linked list.
	CourseNode* start;
public:
	// Constructor.
	LList();
	// Desrtuctor.
	~LList();

	// Add a node to the end of the linked list.
	void addNode(CourseNode* newNode);

	// Print the values of each node.
	void print();
};