#include <iostream>
#include<string>
#include<thread>
#include<chrono>
using namespace std;

int main() {
	string name;
	string input;
	
	cout<<"Hello user, may i know your name?"<< endl;
	getline(cin, name);
	this_thread::sleep_for(chrono::seconds(1));
	cout<<"Hello," <<name<<". This is an engineering dictionary."<<endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout<<"I have A - J terms. This is ehat I have in store:"<<endl;
	
	this_thread::sleep_for(chrono::seconds(1));
	cout<< "A (ABACUS, ACTUATOR, ANALYTICAL ENGINE)"<<endl;
	cout<< "B (BANDSAW)"<<endl;
	cout<<"C (CARRIAGE)"<<endl;
	cout<<"D (DIE)"<<endl;
	cout<<"E (ELECTRIC MOTOR)"<<endl;
	cout<<"F ( FABRICATION, FIRST GENERATION)"<<endl;
	cout<<"G ( GAUGE)"<<endl;
	cout<<"I (IGNITORS)"<<endl;
	cout<< "J (JIG SAW STEEL)"<<endl;
	
	this_thread::sleep_for(chrono::seconds(1));
	cout<<"What do you want to know?:";
	getline(cin, input);
	
	cout<<"Searching for thr definition of"<<input<<"........"<<endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout<<"......please wait......"<<endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout<<"....Definition found!"<<endl;
	this_thread::sleep_for(chrono::seconds(1));
	if (input == "ACTUATOR") {
		cout<<"A device that converts hydraulic energy into mechanical energy."<<endl;
	} else if (input == "BANDSAW") {
		cout <<"A power saw, the blade which is a continous, narrow, steal band."<<endl;
	} else if (input == "CARRIAGE") {
        cout << "A belt mounted on wheels that is used to move materials from one storage bin to another." << endl;
    } else if (input == "DIE") {
        cout << "A metal block used in forming materials by casting, molding, stamping, threading, or extruding." << endl;
    } else if (input == "ELECTRIC MOTOR") {
        cout << "An electromechanical device that converts electrical power into rotary motion, measured in horsepower." << endl;
    } else if (input == "ABACUS") {
        cout << "The first computer, invented 4000 years ago, Chinese Invented this" << endl;
     } else if (input == "ANALYTICAL ENGINE") {
        cout << "Invented in the year 1830, by Charles Babbage, was a mechanical computer" << endl;
     } else if (input == "FIRST GENERATION") {
        cout << "Period of the year 1940-1956, slow, huge and expensive, dependent on the batch operating systems." << endl;
     } else if (input == "FABRICATION") {
        cout << "The joining, usually by welding, of two or more parts to produce a finished assembly. The components of the assembly may be a combination of cast and wrought materials." << endl;
    } else if (input == "GAUGE") {
        cout << "The thickness of sheet steel. Better quality steel has a consistent gauge to prevent weak spots or deformation." << endl;
    } else if (input == "HACKSAW") {
        cout << "A metal blade of hardened steel having small, close teeth on one edge. It is held under tension in a U shaped frame." << endl;
    } else if (input == "IGNITORS") {
        cout << "Devices which employ a high energy electrical spark to ignite the pilot gas flame." << endl;
    } else if (input == "JIG SAW STEEL") {
        cout << "Hardened, tempered and bright polished with round edges. Carbon content .85. Ranges of sizes .039 to 393 in width and .016 to .039 in thickness." << endl;
    } else if (input == "HARD DISK DRIVE") {
        cout << "Also known as HDD, it is an electromechanical device, slower than RAM but can store files permanently." << endl;
    } else {
    	cout << "Term not found in the dictionary." <<endl;
    }
    
    this_thread::sleep_for(chrono::seconds(1));
    cout<< "I hope you enjoyed my dictionary! thank you!"<<endl;
    
    return 0;
    
}