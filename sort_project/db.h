#pragma once


void init(void);


enum Department {
	QA_MANUAL,
	QA_AUTOMATION,
	DEVELOPER,
	ACCOUNTANT,
	CEO,
};


struct Position {
	char name[10] = "default";
	int salary;
	Department department;
};

struct Employee {
	char firstName[10];
	char lastName[10] = "default";
	short age = 0;
	struct Position position;
};



//////////////////////////////////////////////













