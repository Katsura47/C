#include <iostream>
#include <stdlib.h>
#include <iomanip>

#include "fileoperations.h"


using namespace std;

typedef File Datastructure;

Datastructure book;

void print_menu();
bool perform_operation(char);
void search_record();
void add_record();
void delete_record();
void update_record();

int main(){
	book.create();
	bool end = false;
	char choice;
	while(!end){
		print_menu();
		cin >> choice;
		end = perform_operation(choice);
	}
	book.close();
	return EXIT_SUCCESS;
} 

void print_menu(){
	system("cls");
	cout << endl << endl;
	cout << "PHONE BOOK APPLICATION" << endl;
	cout << "choose an operation" << endl;
	cout << "S: Record Search" << endl;
	cout << "A: Record Add" << endl;
	cout << "U: Record Update" << endl;
	cout << "D: Record Delete" << endl;
	cout << "E: Exit" << endl;
	cout << endl;
	cout << "Enter a choice {S,A,U,D,E}: ";
} 

bool perform_operation(char choice){
	bool terminate = false;
	switch(choice) {
		case 'S': case 's':
			search_record();
			break;
		case 'A': case 'a':
			add_record();
			break;
		case 'U': case 'u':
			update_record();
			break;
		case 'D': case 'd':
			delete_record();
			break;
		case 'E': case 'e':
			cout << "Are you sure you want to exit the program? (Y/N):";
			cin >> choice;
			if(choice )
		
		
	}
	
}







