
#include <iostream>
#include "linkedList.h"

int main(void) {
	Course test1, test2, test3;
	test1.addStudent("NAMEWsaf");
	test1.addStudent("KALLElle eek");
	test1.addStudent("Steeemee");
	//test1.print();
	//printf("\n\n");

	test2.addStudent("Adam");
	test2.addStudent("Eva");
	test2.addStudent("Frehan");
	test2.addStudent("DABBBBBERT");

	//test2.removeStudent("kalle");
	//test2.removeStudent("DABBBBBERT");

	//test2.print();
	//printf("\n\n");

	test3.addStudent("sver");
	test3.addStudent("rechhamacka");
	test3.addStudent("greg");
	test3.addStudent("aaAAAAAAAAAAAA");

	CourseNode node1, node2, node3;
	node1.setCourse(&test1);
	node1.setCourseName("DOA");
	//node1.print();
	//printf("\n\n");

	node2.setCourse(&test2);
	node2.setCourseName("DAATAAA");

	node2.removeStudent("kalle");
	printf("\n");
	node2.removeStudent("DABBBBBERT");
	printf("\n");
	//node1.print();

	node3.setCourse(&test3);
	node3.setCourseName("kys");

	LList list1;
	list1.print();
	list1.addNode(&node1);
	//list1.print();
	list1.addNode(&node2);
	//list1.print();
	list1.addNode(&node3);
	list1.print();

	return 1;
}