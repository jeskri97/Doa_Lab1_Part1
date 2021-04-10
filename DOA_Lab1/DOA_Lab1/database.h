#pragma once

#include "linkedList.h"

class Database {
private:
	// The linked list.
	LList list;
public:
	// Constructor
	Database();
	// Destructor
	~Database();

	void mainMenu();
};