// FactsDB Programming 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Xavier Moore
// Date last updated: 9/25/2020
// Purpose: Write a program that opens a connection to the FACT database. 
//          If the connection doesn't open successfully print an error message from the database and end program, 
//          other wise print a successful message.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;



int main(int argc, char*argv[])
{
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;
	char* sql;
	const char* data = "callMethod function called";
	// Open database //
	rc = sqlite3_open("fact.db", &db);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
