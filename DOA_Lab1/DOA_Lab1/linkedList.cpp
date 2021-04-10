
#include "linkedList.h"

CourseNode::CourseNode() {
	this->next = nullptr;
	this->course = nullptr;
}
CourseNode::~CourseNode() {
	// Empty
}

void CourseNode::setNext(CourseNode* next) {
	this->next = next;
}

void CourseNode::setCourseName(std::string courseName) {
	this->courseName = courseName;
}

void CourseNode::setCourse(Course* course) {
	this->course = course;
}

CourseNode* CourseNode::getNext() {
	return this->next;
}

std::string CourseNode::getCourseName() {
	return this->courseName;
}

Course* CourseNode::getCourse() {
	return this->course;
}

void CourseNode::removeStudent(std::string student) {
	bool removed = this->course->removeStudent(student);
	if (removed) {
		printf("Student '%s' has been removed from the course '%s'\n", student.c_str(), this->courseName.c_str());
	}
	else {
		// Write an error if student not in list.
		printf("DID NOT FIND STUDENT '%s' IN COURSE '%s'\n", student.c_str(), this->courseName.c_str());
	}
}

void CourseNode::print() {
	printf("%s: ", this->courseName.c_str());
	this->course->print();
}



LList::LList() {
	this->start = nullptr;
}
LList::~LList() {
	// Empty
}

void LList::addNode(CourseNode* newNode) {
	if (this->start != nullptr) {
		CourseNode* temp = this->start;
		while (temp->getNext() != nullptr) {
			temp = temp->getNext();
		}
		temp->setNext(newNode);
	}
	else {
		this->start = newNode;
	}
}

void LList::print() {
	if (this->start != nullptr) {
		CourseNode* temp = this->start;
		temp->print();
		while (temp->getNext() != nullptr) {
			temp = temp->getNext();
			temp->print();
		}
	}
	else {
		printf("LINKED LIST IS EMPTY\n");
	}
}