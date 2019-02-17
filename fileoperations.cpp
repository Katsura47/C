#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "fileoperations.h"

using namespace std;

void File::add(Phone_Record *nrptr){
	fseek(phonebook, 0, SEEK_END);
	fwrite(nrptr, sizeof(Phone_Record), 1, phonebook);

}

void File::create(){
	strcpy(filename, "phonebook.txt");
	phonebook = fopen(filename, "r+");
	if(!phonebook){
		if(!(phonebook=fopen(filename, "w+"))){
			cout << "Cannot open File!" << endl;
			exit(1);
		}
	}
}

void File::close(){
	fclose(phonebook);
}

int File::search(char *desired){
	Phone_Record k;
	int counter = 0;
	bool all = false;
	int found = 0;
	if(strcmp(desired, "*")==0)
	all=true;
	fseek(phonebook, 0, SEEK_SET);
	while(!feof(phonebook)){
		counter++;
		fread(&k, sizeof(Phone_Record), 1, phonebook);
		if(feof(phonebook)) break;
		if (!all && strnicmp(k.name, desired, strlen(desired))!=0)
		continue;
		
		cout << counter << "." << k.name << "." << k.phonenum << endl;
		found++;
	}
	return found;
	
}


void File::update(int recordnum, Phone_Record *nrptr){
	if(fseek(phonebook, sizeof(Phone_Record)*(recordnum-1),SEEK_SET)==0)
		fwrite(nrptr, sizeof(Phone_Record), 1, phonebook);
}

void File::remove(int recordnum){
	Phone_Record emptyrecord = {"", ""};
	
	if(fseek(phonebook, sizeof(Phone_Record)*(recordnum-1), SEEK_SET)==0);
		fwrite(&emptyrecord, sizeof(Phone_Record), 1, phonebook);
	
	
	
	
	
}







