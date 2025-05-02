#include <iostream>
#include <fstream>
#include<array>
#include <string>
using namespace std;

// Define user class
class user {

public:
	string firstName;
	string lastName;
	string address;
	unsigned long long phoneNumber;
	string email;
	string password;
	unsigned long int institutionalId;
	unsigned int libraryId;

	user(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid); // param constructor
	user() { firstName = "john", lastName = "doe", address = "123 Sesame Street", phoneNumber = 9201234567, email = "johndoe@website.com", password = "password123", institutionalId = 123456789, libraryId = 0; }; // default constructor
	user(const user& c) { firstName = c.firstName, lastName = c.lastName, address = c.address, phoneNumber = c.phoneNumber, email = c.email, password = c.password, institutionalId = c.institutionalId, libraryId = c.libraryId; }; // copy constructor
	virtual void displayInfo() const;
	bool checkIfValid() const;

	~user() {};
};

user::user(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid) {
	firstName = fn;
	lastName = ln;
	address = ad;
	phoneNumber = pn;
	email = em;
	password = pw;
	institutionalId = iid;
	libraryId = lid;
};

void user::displayInfo() const {
	cout << "User firstName: " << firstName << endl;
	cout << "User lastName: " << lastName << endl;
	cout << "User address: " << address << endl;
	cout << "User phoneNumber: " << phoneNumber << endl;
	cout << "User email: " << email << endl;
	cout << "User password: " << password << endl;
	cout << "User institutionalId: " << institutionalId << endl;
	cout << "User libraryId: " << libraryId << endl;
	cout << endl;
}

bool user::checkIfValid() const {
	if (firstName == "UNUSED-FIRSTNAME") {
		return false;
	}
	else {
		return true;
	}
}



// Define student subclass
class student : public user {

public:
	student(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid); // param constructor
	student() { firstName = "john", lastName = "doe", address = "123 Sesame Street", phoneNumber = 9201234567, email = "johndoe@website.com", password = "password123", institutionalId = 123456789, libraryId = 0; }; // default constructor
	student(const user& c) { firstName = c.firstName, lastName = c.lastName, address = c.address, phoneNumber = c.phoneNumber, email = c.email, password = c.password, institutionalId = c.institutionalId, libraryId = c.libraryId; }; // copy constructor
	virtual void displayInfo() const;
	bool checkIfValid() const;
	~student() {};
};

student::student(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid) {
	firstName = fn;
	lastName = ln;
	address = ad;
	phoneNumber = pn;
	email = em;
	password = pw;
	institutionalId = iid;
	libraryId = lid;
};

void student::displayInfo() const {
	cout << "Student firstName: " << firstName << endl;
	cout << "Student lastName: " << lastName << endl;
	cout << "Student address: " << address << endl;
	cout << "Student phoneNumber: " << phoneNumber << endl;
	cout << "Student email: " << email << endl;
	cout << "Student password: " << password << endl;
	cout << "Student institutionalId: " << institutionalId << endl;
	cout << "Student libraryId: " << libraryId << endl;
	cout << endl;
}

bool student::checkIfValid() const {
	if (firstName == "UNUSED-FIRSTNAME") {
		return false;
	}
	else {
		return true;
	}
}



// Define faculty subclass
class faculty : public user {

public:
	faculty(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid); // param constructor
	faculty() { firstName = "john", lastName = "doe", address = "123 Sesame Street", phoneNumber = 9201234567, email = "johndoe@website.com", password = "password123", institutionalId = 123456789, libraryId = 0; }; // default constructor
	faculty(const user& c) { firstName = c.firstName, lastName = c.lastName, address = c.address, phoneNumber = c.phoneNumber, email = c.email, password = c.password, institutionalId = c.institutionalId, libraryId = c.libraryId; }; // copy constructor
	virtual void displayInfo() const;
	bool checkIfValid() const;
	~faculty() {};
};

faculty::faculty(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid) {
	firstName = fn;
	lastName = ln;
	address = ad;
	phoneNumber = pn;
	email = em;
	password = pw;
	institutionalId = iid;
	libraryId = lid;
};

void faculty::displayInfo() const {
	cout << "Faculty firstName: " << firstName << endl;
	cout << "Faculty lastName: " << lastName << endl;
	cout << "Faculty address: " << address << endl;
	cout << "Faculty phoneNumber: " << phoneNumber << endl;
	cout << "Faculty email: " << email << endl;
	cout << "Faculty password: " << password << endl;
	cout << "Faculty institutionalId: " << institutionalId << endl;
	cout << "Faculty libraryId: " << libraryId << endl;
	cout << endl;
}

bool faculty::checkIfValid() const {
	if (firstName == "UNUSED-FIRSTNAME") {
		return false;
	}
	else {
		return true;
	}
}



// Define staff subclass
class staff : public user {

public:
	staff(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid); // param constructor
	staff() { firstName = "john", lastName = "doe", address = "123 Sesame Street", phoneNumber = 9201234567, email = "johndoe@website.com", password = "password123", institutionalId = 123456789, libraryId = 0; }; // default constructor
	staff(const user& c) { firstName = c.firstName, lastName = c.lastName, address = c.address, phoneNumber = c.phoneNumber, email = c.email, password = c.password, institutionalId = c.institutionalId, libraryId = c.libraryId; }; // copy constructor
	virtual void displayInfo() const;
	bool checkIfValid() const;
	~staff() {};
};

staff::staff(string fn, string ln, string ad, unsigned long long pn, string em, string pw, unsigned long int iid, unsigned int lid) {
	firstName = fn;
	lastName = ln;
	address = ad;
	phoneNumber = pn;
	email = em;
	password = pw;
	institutionalId = iid;
	libraryId = lid;
};

void staff::displayInfo() const {
	cout << "Staff firstName: " << firstName << endl;
	cout << "Staff lastName: " << lastName << endl;
	cout << "Staff address: " << address << endl;
	cout << "Staff phoneNumber: " << phoneNumber << endl;
	cout << "Staff email: " << email << endl;
	cout << "Staff password: " << password << endl;
	cout << "Staff institutionalId: " << institutionalId << endl;
	cout << "Staff libraryId: " << libraryId << endl;
	cout << endl;
}

bool staff::checkIfValid() const {
	if (firstName == "UNUSED-FIRSTNAME") {
		return false;
	}
	else {
		return true;
	}
}



// Define Admin class (NOT A SUBCLASS OF USER)
class admin {

public:
	string username;
	string password;
	admin(string un, string pw);
	void displayInfo();

	~admin() {};
};

admin::admin(string un, string pw) {
	username = un;
	password = pw;
};

void admin::displayInfo() {
	cout << "Admin username: " << username << endl;
	cout << "Admin password: " << password << endl;
	cout << endl;
}



// Define Item class
class item {
	int id;
	string name;
	string author;
	string itemtype;
	string genre;
	bool available;
	unsigned int renterId;

public:
	item(int idn, string na, string au, string it, string gn, bool av, unsigned int ri) : id(idn), name(na), author(au), itemtype(it), genre(gn), available(av), renterId(ri) {}
	void displayInfo();
	void displayInfoAdmin();
	bool checkIfValid();

	~item() {};
};


void item::displayInfo() {
	cout << "item id:  " << id << endl;
	cout << "item name: " << name << endl;
	cout << "item author: " << author << endl;
	cout << "item itemtype: " << itemtype << endl;
	cout << "item genre: " << genre << endl;
	cout << "item available: " << available << endl;
	cout << endl;
}

void item::displayInfoAdmin() {
	cout << "item id:  " << id << endl;
	cout << "item name: " << name << endl;
	cout << "item author: " << author << endl;
	cout << "item itemtype: " << itemtype << endl;
	cout << "item genre: " << genre << endl;
	cout << "item available: " << available << endl;
	cout << "item renterId: " << renterId << endl;
	cout << endl;
}

bool item::checkIfValid() {
	if (id == -1) {
		return false;
	}else {
		return true;
	}
}

// Search book func. Search books.txt for a keyword and print matching lines

void searchBooks(const string& keyword) {
    ifstream file("books.txt");
    string line;
    bool found = false;

    if (!file) {
        cout << "Could not open books.txt" << endl;
        return;
    }

    while (getline(file, line)) {
        if (line.find(keyword) != string::npos) {
            cout << line << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No results found for: " << keyword << endl;
    }

    file.close();
}

// Search user func. Search users.txt for a keyword by name or ID

void searchUsers(string keyword) {
    ifstream file("users.txt");
    if (!file.is_open()) {
        cout << "Could not open users.txt" << endl;
        return;
    }

    string line;
    bool found = false;

    while (getline(file, line)) {
        if (line.find(keyword) != string::npos) {
            cout << line << endl;
            found = true;
        }
    }

    file.close();

    if (!found) {
        cout << "No user found with that keyword." << endl;
    }
}

// Sep func. Add a new line to the end of the specified file

void addToFile(string filename, string newLine) {
    ofstream file(filename, ios::app);
    file << newLine << endl;
    file.close();
    cout << "Added line to " << filename << endl;
}

// Sep func. Print all lines from the specified file

void viewFile(string filename) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

// Sep func. Replace all lines in the specified file with new content
void overwriteFile(string filename) {
    ofstream file(filename);
    string newContent;
    cout << "Enter new content (type 'end' on a new line to finish):" << endl;
    cin.ignore();
    while (getline(cin, newContent)) {
        if (newContent == "end") break;
        file << newContent << endl;
    }
    file.close();
    cout << "Overwrote " << filename << " with new content." << endl;
}








int main() {
	// Variable initialization
	string username; // Used to store the username of logged-in accounts.
	string password; // Used to store the password of logged-in accounts.
	string permlevel; // Used to store the permission level of a logged in account.  "Admin" is for administrators, while "User" is used for regular users.  Temporary variable.
	int baseInput; // Holds the user's response to the "1, 2, 3, 4" command loop seen upon bootup


	bool go = false; // Controls while loops within while loops.  An example is the login section segment you see after trying to log in as an admin or user.
	bool globalGo = false; // Controls while loops for larger commands.  An example is the section upon booting up, where the program will prompt you to input 1, 2, 3, or 4 as a command.
	bool universalGo = false; // Controls the entire program looping itself.  While false and not inside of another function, will default to the "1, 2, 3, 4" section.  If set to true, the program will fully stop.
	bool isLoggedIn = false; // Controls if the user is considered logged into an account, be it admin or user.  While true, returns to the "Welcome to the library!" section.


	// TODO: At start of bootup, Search for any defined admin accounts from librarians.txt, and place them in an array within the project for easy access
	// TODO: At start of bootup, Search for any defined user accounts from users.txt, and place them in an array within the project for easy access
	// TODO: At start of bootup, Search for any defined items from book.txt, and place them in an array within the project for easy access

	while (universalGo == false) {
		while (globalGo == false) {
			cout << "1. Register New Users" << endl
				<< "2. Admin (Librarian) Login" << endl
				<< "3. User Login" << endl
				<< "4. Exit" << endl;

			cout << "Insert command to continue." << endl << "> ";
			cin >> baseInput;





			// Register New User
				// TODO:  Set up new user registration
				// TODO:  Set up registration so that it checks if inputs are valid strings / integers
				// TODO:  Fix "exit" being not accepted while requesting phoneNumber and institutionalId because they're integers
			if (baseInput == 1) {
				cout << endl; // For formatting
				bool localGo = false;
				// Variable initialization
				// Most of these variables exist just to hold data
				string firstName;
				string lastName;
				string address;
				unsigned long long phoneNumber;
				string email;
				string password;
				unsigned long int institutionalId;
				string userType; // Determines if the user is a student, faculty or staff.
				unsigned int libraryId; // Assigned automatically after account creation.  Not requested by the below assignments.

				// TODO:  Find a more efficient way of requesting each variable, because there's gotta be a more efficient way than using basically the same while loop over and over again
				while (localGo == false) {
					go = false;
					// Request firstName
					while (go == false) {
						cout << "Please input your first name." << endl << "> ";
						cin >> firstName;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
						} else if (firstName == "exit" || firstName == "Exit") {
							cout << "Returning." << endl;
							go = true;
							localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request lastName
					while (go == false) {
						cout << "Please input your last name." << endl << "> ";
						cin >> lastName;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
						} else if (lastName == "exit" || lastName == "Exit") {
							cout << "Returning." << endl;
							go = true;
							localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request address
					while (go == false) {
						cout << "Please input your address (Use camel case, LikeThisIsDoing.  No spaces, please!)." << endl << "> ";
						cin >> address;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
						} else if (address == "exit" || address == "Exit") {
							cout << "Returning." << endl;
							go = true;
							localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request phoneNumber
					while (go == false) {
						cout << "Please input your phone number (Numbers only)." << endl << "> ";
						cin >> phoneNumber;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type any number and then \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
							// This doesn't work because phoneNumber is an integer
							// } else if (phoneNumber == "exit" || phoneNumber == "Exit") {
								// go = true;
								// localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request email
					while (go == false) {
						cout << "Please input your email address." << endl << "> ";
						cin >> email;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
						} else if (email == "exit" || email == "Exit") {
							cout << "Returning." << endl;
							go = true;
							localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request password
					while (go == false) {
						cout << "Please input your password." << endl << "> ";
						cin >> password;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
						} else if (password == "exit" || password == "Exit") {
							cout << "Returning." << endl;
							go = true;
							localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request institutionalId
					while (go == false) {
						cout << "Please input your ID number.  Please only input numbers, and no other characters." << endl << "> ";
						cin >> institutionalId;
						if (std::cin.fail()) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
							// This doesn't work because institutionalId is an integer
						// } else if (institutionalId == "exit" || institutionalId == "Exit") {
							// go = true;
							// localGo = true;
						} else {
							go = true;
						}
					}
					if (localGo == false) { go = false; }
					// Request if you are a student, faculty or staff
					while (go == false) {
						cout << "Are you student, faculty or staff?" << endl << "> ";
						cin >> userType;
						bool invalid = false;
						if (userType != "student" && userType != "faculty" && userType != "staff") { invalid = true; }
						if (std::cin.fail() || invalid == true) { // Checks if the input is an invalid string
							cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
							std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
							std::cin.ignore(256, '\n');
						} else if (userType == "exit" || userType == "Exit") {
							cout << "Returning." << endl;
							go = true;
							localGo = true;
						} else {
							go = true;
						}
					}

					// TODO:  Search the users.txt to find the highest available library ID and set libraryId to 1 higher than that value
					// library ID is temporarily set to a value of 0.
					if (localGo == false) { 
						libraryId = 0;
						if (userType == "student") {
							student tempUser(firstName, lastName, address, phoneNumber, email, password, institutionalId, libraryId);
							cout << endl << "Student account created successfully.  Returning." << endl;
						} else if (userType == "faculty") {
							faculty tempUser(firstName, lastName, address, phoneNumber, email, password, institutionalId, libraryId);
							cout << endl << "Faculty account created successfully.  Returning." << endl;
						} else if (userType == "staff") {
							staff tempUser(firstName, lastName, address, phoneNumber, email, password, institutionalId, libraryId);
							cout << endl << "Staff account created successfully.  Returning." << endl;
						} else {
							cout << "ERROR:  FAILED TO CREATE ACCOUNT." << endl;
						}
					}

					// TODO:  Add the newly defined user to users.txt
					// TODO:  Be sure to add some way of differentiating students, faculty and staff within users.txt

					localGo = true;
				}
				localGo = false;





				// Admin login
				// Username and Password are both "Admin"
				// TODO:  Set up more proper username and password detection, pulling from the .txt document
			} else if (baseInput == 2) {
				while (go == false) {
					cout << "Please insert username." << endl << "> ";
					cin >> username;
					cout << "Please insert password." << endl << "> ";
					cin >> password;

					// After inputting username and password, checks to see if username and password are valid
					// Temporarily holds fake values, where "Admin" as the username and password are the only accepted credentials
					// TODO: Replace temporary login credentials with checking through users.txt to see if the username and password match any account
					if (username == "Admin" && password == "Admin") {
						permlevel = "Admin";
						isLoggedIn = true;
						go = true;
						globalGo = true;
						// Allows users to return to previous screen
					} else if (username == "exit" || password == "exit" || username == "Exit" || password == "Exit") {
						cout << "Returning." << endl;
						go = true;
					} else {
						cout << endl << "This username and password are incorrect.  Please try again, or type \"exit\" to return to the previous screen.";
					}

				}
				go = false;





				// User login
					// Username and Password are both "User"
					// TODO:  Set up more proper username and password detection, pulling from the .txt document
			} else if (baseInput == 3) {
				while (go == false) {
					cout << "Please insert username." << endl << "> ";
					cin >> username;
					cout << "Please insert password." << endl << "> ";
					cin >> password;

					// After inputting username and password, checks to see if username and password are valid
					// Temporarily holds fake values, where "User" as the username and password are the only accepted credentials
					// TODO: Replace temporary login credentials with checking through users.txt to see if the username and password match any account
					if (username == "User" && password == "User") {
						permlevel = "User";
						isLoggedIn = true;
						go = true;
						globalGo = true;
						// Allows users to return to previous screen
					} else if (username == "exit" || password == "exit" || username == "Exit" || password == "Exit") {
						cout << "Returning." << endl;
						go = true;
					} else {
						cout << endl << "This username and password are incorrect.  Please try again, or type \"exit\" to return to the previous screen.";
					}

					cout << endl;
				}
				go = false;

				// Exit
			} else if (baseInput == 4) {
				cout << "See you next time!";
				go = true;
				globalGo = true;
				universalGo = true;

				// In case of invalid command
			} else {
				cout << "Command not recognized.";
				// TODO:  fix the issue where, if the command is not recognized, the program will infinitely accept that as its next bit.
				std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
				std::cin.ignore(256, '\n');
			}

			// Makes a two-line gap after each input command
			cout << endl << endl;
		}
		globalGo = false;







		// Returns to this area after successfully logging in, either as an admin or as a user
		while (isLoggedIn == true) {
			// variable initialization
			string input = "";

			// Ask the user what command to run
			// TODO:  Write a command that turns input entirely lowercase after being submitted, so that it is not case sensitive?
			cout << "Welcome to the library!  Please input a command." << endl << "> ";
			cin >> input;
			cout << endl;



			// - Can borrow books (regulated by the Borrowing class)
				// - Can only borrow up to 4 at a time
				// - The system must keep track of who is borrowing what
			if (input == "borrow") {
				bool localGo = false;
				string inputString;
				bool validId = true;  // Here to test if the later-input string successfully translates itself into an integer.  True by default.
				int inputInt = -1;
				go = false;
				while (localGo == false) {
					while (go == false) {
						cout << "Please input the item of the given item." << endl << "> ";
						cin >> inputString;
						try {
							inputInt = stoi(inputString);
						} catch (const std::invalid_argument&) { validId = false; }
						catch (const std::out_of_range&) { validId = false; }

						bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
						bool itemAvailable = false; // Boolean to set if the given item has an "available" value of true or false.  If available = true, itemAvailable = true.
						if (validId == true) {
							// TODO:  Check to see if the inventory item with the given id exists
							itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
							itemAvailable = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
						}
						if (itemExists == true) {
							if (itemAvailable == true){
								go = true;
							} else {
								// In the case that itemExists = true, but itemAvailable = false;
								cout << "That item is currently being rented, or is otherwise unavailable to rent.  Please try again." << endl;
							}
						} else if (inputString == "exit" || inputString == "Exit") {
							cout << "Returning." << endl;
							localGo = true;
							go = true;
						} else {
							cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
						}
						validId = true;
					}
					if (localGo == false) { go = false; }

					while (go == false) {
						// TODO:  Retrieve the current logged in user's library id
						// TODO: Modify the inventory item with the given id in the following ways:
							// - Set its boolean "available" to false
							// - Set its integer "renterId" to be equal to the current logged in user's library id
						localGo = true;
						go = true;
					}

				}

			// - Can search for books, journals or other inventory items (Regulated by the Search Function class)
				// - Can search by title, author or publisher
				// - Admins can search for users by id or name, which users don't get access to
				// - Admins can see the user id of who owns a book, while searching for books, while users do not
				  // Admins are supposed to also be able to search users by keyword input, but that seems really difficult so I'm willing to take the minor grade penalty for not having it
			} else if (input == "search") {
				bool localGo = false;
				// Allows admins to search the book inventory or the users list
				// If the logged in user is not an admin, it defaults to only searching the book inventory
				string searchFor; // When the user is an admin, this holds the value of if they're searching through inventory or users
				string searchParam; // The parameters by which a user searches a .txt file.  For example, if searchFor is "inventory", the valid values of searchParam may be "title", "author" or "genre".
				string searchQuery;
				while (localGo == false) {
					if (permlevel == "Admin") {
						// In the case the user is an admin
						// Allows the user to pick whether they search through users.txt or book.txt
						go = false;
						while (go == false) {
							cout << "Search for what?  Your options are: " << endl << "- inventory" << endl << "- users" << endl << "> ";
							cin >> searchFor;
							if (searchFor == "inventory" || searchFor == "users") {
								go = true;
							}
							else if (searchFor == "exit" || searchFor == "Exit") {
								cout << "Returning." << endl;
								go = true;
								localGo = true;
							}
							else {
								cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
							}
						}
					}
					else {
						// In case the user is a normal user, not an admin
						// forces the user to only search through book.txt
						searchFor = "inventory";
					}
					if (localGo == false) { go = false; }

					if (localGo == false) {
						// Searching book.txt
						if (searchFor == "inventory") {
							while (go == false) {
								cout << "Search the inventory by what parameters?  Your options are: " << endl << "- title" << endl << "- author" << endl << "- genre" << endl << "> ";
								cin >> searchParam;
								string keyword;
								cout << "Enter keyword (title, author, id, or publisher): ";
								cin >> keyword;

								//book func. using keyword
								searchBooks(keyword);
								go = true;
								localGo = true;

								if (searchParam == "title" || searchParam == "author" || searchParam == "genre") {
									go = true;
								}
								else if (searchParam == "exit" || searchParam == "Exit") {
									cout << "Returning." << endl;
									go = true;
									localGo = true;
								}
								else {
									cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
								}
							}
							if (localGo == false) { go = false; }


							item* invSearchReturn[10]; // The array which will fill with items
							for (int i = 0; i <= 9; i++) {
								// Fills invSearchReturn with placeholder items
								invSearchReturn[i] = new item(-1, "UNUSED-TITLE", "UNUSED-AUTHOR", "UNUSED-ITEMTYPE", "UNUSED-GENRE", false, 0);
							}

							if (searchParam == "title") {

								string titleSearch;
								while (go == false) {
									cout << "What title would you like to search?" << endl << "> ";
									cin >> titleSearch;
									if (titleSearch == "exit" || titleSearch == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// TODO: Search books.txt by title, and return user accounts with a title which is the same as the value of titleSearch.
								// Return each accepted item to the item* array, invSearchReturn
								// Assumes that no more than 10 items will be returned, as this is the maximum size of the invSearchReturn array

							}
							else if (searchParam == "author") {

								string authorSearch;
								while (go == false) {
									cout << "What author would you like to search?" << endl << "> ";
									cin >> authorSearch;
									if (authorSearch == "exit" || authorSearch == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// TODO: Search books.txt by author, and return user accounts with an author which is the same as the value of authorSearch.
								// Return each accepted item to the item* array, invSearchReturn
								// Assumes that no more than 10 items will be returned, as this is the maximum size of the invSearchReturn array

							}
							else if (searchParam == "genre") {

								string genreSearch;
								while (go == false) {
									cout << "What genre would you like to search?" << endl << "> ";
									cin >> genreSearch;
									if (genreSearch == "exit" || genreSearch == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// TODO: Search books.txt by genre, and return user accounts with a genre which is the same as the value of genreSearch.
								// Return each accepted item to the item* array, invSearchReturn
								// Assumes that no more than 10 items will be returned, as this is the maximum size of the invSearchReturn array

							}
							else {
								cout << "ERROR:  FAILED TO PROPERLY RETURN INVENTORY SEARCH TYPE.";
							}

							if (localGo==false){
								for (int i = 0; i <= 9; i++){
									if (invSearchReturn[i]->checkIfValid()) { // checkIfvalid checks if the item's id is equal to -1, which it will only equal if it is one of the placeholder items created at initialization
										if (permlevel == "Admin") {
											invSearchReturn[i]->displayInfoAdmin(); // If the user is an admin, displays the id number of whoever is renting a given item
										} else {
											invSearchReturn[i]->displayInfo(); // If the user is a regular user, does not display the id number of whoever is renting a given item
										}
									}
								}
							}
							localGo = true;
							go = true;


							// Searching users.txt
						} else if (searchFor == "users") {
							while (go == false) {
								cout << "Search the users list by what parameters?  Your options are: " << endl << "- name" << endl << "- id" << endl << "> ";
								cin >> searchParam;

								string keyword;
								cout << "Enter user name or library ID: ";
								cin >> keyword;

								//user func. using keyword
								searchUsers(keyword);
								go = true;
								localGo = true;

								if (searchParam == "name" || searchParam == "id") {
									go = true;
								}
								else if (searchParam == "exit" || searchParam == "Exit") {
									cout << "Returning." << endl;
									go = true;
									localGo = true;
								}
								else {
									cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
								}
							}
							if (localGo == false) { go = false; }

							user* invSearchReturn[10]; // The array which will fill with items
							for (int i = 0; i <= 9; i++) {
								// Fills invSearchReturn with placeholder items
								invSearchReturn[i] = new user("UNUSED-FIRSTNAME", "UNUSED-LASTNAME", "UNUSED-ADDRESS", 0, "UNUSED-ADDRESS", "UNUSED-PASSWORD", 0, 0);
							}

							if (searchParam == "name") {

								string nameSearch;
								while (go == false) {
									cout << "What name would you like to search? Rememeber, this searches users only by first name." << "> ";
									cin >> nameSearch;
									if (nameSearch == "exit" || nameSearch == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									} else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// TODO: Search users.txt by firstName, and return user accounts with a firstName which is the same as the value of nameSearch.
								// Return each accepted item to the user* array, invSearchReturn
								// Assumes that no more than 10 items will be returned, as this is the maximum size of the invSearchReturn array

							}
							else if (searchParam == "id") {
								//ababwa
								string inputItem;
								int givenId;
								bool validId = true;
								while (go == false) {
									cout << "Which id would you like to search?" << endl << "> ";
									cin >> inputItem;
									try {
										givenId = stoi(inputItem);
									}
									catch (const std::invalid_argument&) { validId = false; }
									catch (const std::out_of_range&) { validId = false; }

									bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
									bool itemAvailable = false; // Boolean to set if the given item has an "available" value of true or false.  If available = true, itemAvailable = true.
									if (validId == true) {
										// TODO:  Check to see if the inventory item with the given id exists
										itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
										itemAvailable = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
									}
									if (itemExists == true) {
										if (itemAvailable == true) {
											go = true;
										}
										else {
											// In the case that itemExists = true, but itemAvailable = false;
											cout << "That item is currently being rented, so it cannot be deleted.  Please try again." << endl;
										}
									}
									else if (inputItem == "exit" || inputItem == "Exit") {
										cout << "Returning." << endl;
										localGo = true;
										go = true;
									}
									else {
										cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
									}
									validId = true;
								}

								// TODO: Search users.txt by id, and return user accounts with an id which is the same as the value of givenId.
								// Return each accepted item to the user* array, invSearchReturn
								// Assumes that no more than 10 items will be returned, as this is the maximum size of the invSearchReturn array

							}
							else {
								cout << "ERROR:  FAILED TO PROPERLY RETURN USERS SEARCH TYPE.";
							}

							if(localGo == false){
								for (int i = 0; i <= 9; i++) {
									if (invSearchReturn[i]->checkIfValid()) { // checkIfvalid checks if the user's firstName is equal to "UNUSED-FIRSTNAME", which it will only equal if it is one of the placeholder items created at initialization
										invSearchReturn[i]->displayInfo();
									}
								}
							}
							localGo = true;
							go = true;
							// Somehow, the user has passed through the above while loop asking them to input "inventory" or "users" without setting searchFor to either of those values
								// That shouldn't be possible, but in case it is via a bug or something, this error code is here to display that.
						}
						else {
							cout << "ERROR:  FAILED TO PROPERLY RETURN SEARCHFOR SELECTION.";
						}

					}
				}
				go = false;

			// - Can add, delete, or edit inventory items
			// Admin only
			} else if (input == "editinv") {
				if (permlevel == "Admin") {
					go = false;
					bool localGo = false;
					string searchFor;
					while (localGo == false) {
						while (go == false) {
							cout << "What would you like to do?  Your options are: " << endl << "- add" << endl << "- delete" << endl << "- edit" << endl << "> ";
							cin >> searchFor;
							if (searchFor == "add" || searchFor == "delete" || searchFor == "edit") {
								go = true;
							}
							else if (searchFor == "exit" || searchFor == "Exit") {
								cout << "Returning." << endl;
								go = true;
								localGo = true;
							}
							else {
								cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
							}
						}
						if (localGo == false) { go = false; }
						
						if (localGo == false) {
							if (searchFor == "add") {
								int tempId;
								string tempName;
								string tempAuthor;
								string tempItemtype;
								string tempGenre;
								// bool available;
								// int renterId;

								/* TODO: IMPLEMENT GETLINE PROPERLY IN THESE WITHOIUT THEM BEING BUGGY AND DEMANNDING TWO INPUTS EACH AFTER THE FIRST ONE
								// Request name
								while (go == false) {
									cout << "Please input the name of the item." << endl << "> ";
									std::getline(std::cin, tempName);
									if (std::getline(std::cin, tempName).fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (tempName == "exit" || tempName == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								*/

								// Request name
								while (go == false) {
									cout << "Please input the name of the item." << endl << "> ";
									std::cin >> tempName;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (tempName == "exit" || tempName == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// Request name
								while (go == false) {
									cout << "Please input the name of the item's author." << endl << "> ";
									std::cin >> tempAuthor;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (tempAuthor == "exit" || tempAuthor == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// Request itemType
								while (go == false) {
									cout << "Please input what type of item this is, ideally in one word.  Common examples are \"book\", \"magazine\" or \"movie\"." << endl << "> ";
									std::cin >> tempItemtype;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (tempItemtype == "exit" || tempItemtype == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// Request genre
								while (go == false) {
									cout << "Please input what genre the item fits into, in one word if possible." << endl << "> ";
									std::cin >> tempGenre;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (tempGenre == "exit" || tempGenre == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }

								// TODO:  Search book.txt to find the highest available item ID and set tempId to 1 higher than that value
								// tempId is temporarily set to a value of 0.
								tempId = 0;

								item tempItem = item(tempId, tempName, tempAuthor, tempItemtype, tempGenre, false, 0);

								// TODO:  Add tempItem to book.txt

								localGo = true;

							} else if (searchFor == "delete") {

								string inputString;
								int itemId;
								bool validId = true;
								while (go == false) {
									cout << "Please input the id of the item you wish to delete." << endl << "> ";
									cin >> inputString;
									try {
										itemId = stoi(inputString);
									}
									catch (const std::invalid_argument&) { validId = false; }
									catch (const std::out_of_range&) { validId = false; }

									bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
									bool itemAvailable = false; // Boolean to set if the given item has an "available" value of true or false.  If available = true, itemAvailable = true.
									if (validId == true) {
										// TODO:  Check to see if the inventory item with the given id exists
										itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
										itemAvailable = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
									}
									if (itemExists == true) {
										if (itemAvailable == true) {
											go = true;
										}
										else {
											// In the case that itemExists = true, but itemAvailable = false;
											cout << "That item is currently being rented, so it cannot be deleted.  Please try again." << endl;
										}
									}
									else if (inputString == "exit" || inputString == "Exit") {
										cout << "Returning." << endl;
										localGo = true;
										go = true;
									}
									else {
										cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
									}
									validId = true;
								}

								if (localGo==false) {
									// TODO: Find the item in book.txt and delete it
									// TODO: For any items with a higher libraryId than the deleted item (which is held as the value of the itemId variable), decrease their id number by 1 so that the item ids don't have a gap in it where the deleted item used to be
								}

								cout << "Item deleted." << endl;
								go = true;
								localGo = true;

							} else if (searchFor == "edit") {

								string inputString;
								int itemId;
								bool validId = true;
								while (go == false) {
									cout << "Please input the id of the item you wish to edit." << endl << "> ";
									cin >> inputString;
									try {
										itemId = stoi(inputString);
									}
									catch (const std::invalid_argument&) { validId = false; }
									catch (const std::out_of_range&) { validId = false; }

									bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
									if (validId == true) {
										// TODO:  Check to see if the inventory item with the given id exists
										itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
									}
									if (itemExists == true) {
										go = true;
									}
									else if (inputString == "exit" || inputString == "Exit") {
										cout << "Returning." << endl;
										localGo = true;
										go = true;
									}
									else {
										cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
									}
									validId = true;
								}
								if (localGo == false) { go = false; }
								
								string editParam;
								string editParamType;
								while (go == false) {
									cout << "What would you like to edit the item based on?  Your options are: " << endl << "- name" << endl << "- author" << endl << "- itemtype" << endl << "- genre" << endl << "- available" << endl << "- renterId" << endl << "> ";
									cin >> editParam;

									if (editParam == "name" || editParam == "author" || editParam == "itemtype" || editParam == "genre") {
										editParamType = "string";
										go = true;
									} else if (editParam == "available") {
										editParamType = "bool";
										go = true;
									} else if (editParam == "renterId") {
										editParamType = "int";
										go = true;
									} else if (editParam == "exit" || editParam == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									} else {
										cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
									}
								}
								if (localGo == false) { go = false; }


								if (editParam == "name") { // In the case that the user wants to edit "name"
									
									string replacementName;
									while (go == false) {
										cout << "What would you like to set the name value to?  Please make your input one word." << endl << "> ";
										cin >> replacementName;

										if (replacementName == "exit" || replacementName == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in book.txt with an id equal to "itemId" and replace its name value with the value of replacementName
									}
									localGo = true;

								} else if (editParam == "author") { // In the case that the user wants to edit "author"

									string replacementAuthor;
									while (go == false) {
										cout << "What would you like to set the author value to?  Please make your input one word." << endl << "> ";
										cin >> replacementAuthor;

										if (replacementAuthor == "exit" || replacementAuthor == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in book.txt with an id equal to "itemId" and replace its author value with the value of replacementAuthor
									}
									localGo = true;

								} else if (editParam == "itemType") { // In the case that the user wants to edit "itemType"

									string replacementItemType;
									while (go == false) {
										cout << "What would you like to set the itemType value to?  Please make your input one word." << endl <<
											"As a reminder, examples of what itemType should equal include \"book\", \"magazine\", or \"movie\"." << endl << "> ";
										cin >> replacementItemType;

										if (replacementItemType == "exit" || replacementItemType == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in book.txt with an id equal to "itemId" and replace its itemType value with the value of replacementItemType
									}
									localGo = true;

								} else if (editParam == "genre") { // In the case that the user wants to edit "genre"

									string replacementGenre;
									while (go == false) {
										cout << "What would you like to set the genre value to?  Please make your input one word." << endl << "> ";
										cin >> replacementGenre;
										
										if (replacementGenre == "exit" || replacementGenre == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in book.txt with an id equal to "itemId" and replace its genre value with the value of replacementGenre
									}
									localGo = true;

								} else if (editParam == "available") { // In the case that the user wants to edit "available"
									
									string boolAsString;
									bool replacementAvailable;
									while (go == false) {
										cout << "What would you like to set the available value to?  Your options are true or false." << endl << "> ";
										cin >> boolAsString;

										if (boolAsString == "true") {
											replacementAvailable = true;
											go = true;
										} else if (boolAsString == "false") {
											replacementAvailable = false;
											go = true;
										} else if (boolAsString == "exit" || boolAsString == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										} else {
											cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {

										// TODO: Find the item in book.txt with an id equal to "itemId" and replace its available value with the value of replacementAvailable
											// If replacementAvailable is false, set the item's renterId to 0

									}
									localGo = true;

								} else if (editParam == "renterId") { // In the case that the user wants to edit "renterId"
									string inputString2;
									unsigned int replacementId;
									bool validInput = true;
									while (go == false) {
										cout << "Please input the integer you wish to replace the renterId value with." << endl << "> ";
										cin >> inputString;
										try {
											replacementId = stoi(inputString);
										}
										catch (const std::invalid_argument&) { validInput = false; }
										catch (const std::out_of_range&) { validInput = false; }

										if (validInput == true) {
											go = true;
										}
										else if (inputString2 == "exit" || inputString2 == "Exit") {
											cout << "Returning." << endl;
											localGo = true;
											go = true;
										}
										else {
											cout << "This input is invalid.  Please try again." << endl;
										}
										validId = true;
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {

										// TODO: Find the item in book.txt with an id equal to "itemId" and replace its renterId value with the value of replacementId

									}
									localGo = true;
										
								} else {
									cout << "ERROR: IMPROPERLY DEFINED VALUE OF EDITPARAM." << endl;
								}


							} else {
								cout << "ERROR:  FAILED TO PROPERLY RETURN ITEMS SEARCH TYPE.";
								localGo = true;
							}

						}

					}
					go = false;


				} else { // Deny access to this command if the user is not an admin
					cout << "Access denied: Invalid credentials." << endl;
				}



			// - Can add, delete, or edit user accounts
			// Admin only
			} else if (input == "editusers") {
				if (permlevel == "Admin") {
					go = false;
					bool localGo = false;
					string searchFor;
					while (localGo == false) {
						while (go == false) {
							cout << "What would you like to do?  Your options are: " << endl << "- add" << endl << "- delete" << endl << "- edit" << endl << "> ";
							cin >> searchFor;
							if (searchFor == "add" || searchFor == "delete" || searchFor == "edit") {
								go = true;
							}
							else if (searchFor == "exit" || searchFor == "Exit") {
								cout << "Returning." << endl;
								go = true;
								localGo = true;
							}
							else {
								cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
							}
						}
						if (localGo == false) { go = false; }
						
						if (localGo == false) {
							if (searchFor == "add") {
								// Variable initialization
								// Most of these variables exist just to hold data
								string firstName;
								string lastName;
								string address;
								unsigned long long phoneNumber;
								string email;
								string password;
								unsigned long int institutionalId;
								string userType; // Determines if the user is a student, faculty or staff.
								unsigned int libraryId; // Assigned automatically after account creation.  Not requested by the below assignments.

								while (go == false) {
									cout << "Please input your first name." << endl << "> ";
									cin >> firstName;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (firstName == "exit" || firstName == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request lastName
								while (go == false) {
									cout << "Please input your last name." << endl << "> ";
									cin >> lastName;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (lastName == "exit" || lastName == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request address
								while (go == false) {
									cout << "Please input your address (Use camel case, LikeThisIsDoing.  No spaces, please!)." << endl << "> ";
									cin >> address;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (address == "exit" || address == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request phoneNumber
								while (go == false) {
									cout << "Please input your phone number (Numbers only)." << endl << "> ";
									cin >> phoneNumber;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type any number and then \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
										// This doesn't work because phoneNumber is an integer
										// } else if (phoneNumber == "exit" || phoneNumber == "Exit") {
											// go = true;
											// localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request email
								while (go == false) {
									cout << "Please input your email address." << endl << "> ";
									cin >> email;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (email == "exit" || email == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request password
								while (go == false) {
									cout << "Please input your password." << endl << "> ";
									cin >> password;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (password == "exit" || password == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request institutionalId
								while (go == false) {
									cout << "Please input your ID number.  Please only input numbers, and no other characters." << endl << "> ";
									cin >> institutionalId;
									if (std::cin.fail()) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
										// This doesn't work because institutionalId is an integer
									// } else if (institutionalId == "exit" || institutionalId == "Exit") {
										// go = true;
										// localGo = true;
									}
									else {
										go = true;
									}
								}
								if (localGo == false) { go = false; }
								// Request if you are a student, faculty or staff
								while (go == false) {
									cout << "Are you student, faculty or staff?" << endl << "> ";
									cin >> userType;
									bool invalid = false;
									if (userType != "student" && userType != "faculty" && userType != "staff") { invalid = true; }
									if (std::cin.fail() || invalid == true) { // Checks if the input is an invalid string
										cout << "This input is invalid.  Please try again, or type \"exit\" to return to the previous screen." << endl;
										std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
										std::cin.ignore(256, '\n');
									}
									else if (userType == "exit" || userType == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									}
									else {
										go = true;
									}
								}

								if (localGo == false) {
									// TODO:  Search the users.txt to find the highest available library ID and set libraryId to 1 higher than that value
									// library ID is temporarily set to a value of 0.
									libraryId = 0;

									if (userType == "student") {
										student tempUser(firstName, lastName, address, phoneNumber, email, password, institutionalId, libraryId);
										cout << endl << "Student account created successfully.  Returning." << endl;
									}
									else if (userType == "faculty") {
										faculty tempUser(firstName, lastName, address, phoneNumber, email, password, institutionalId, libraryId);
										cout << endl << "Faculty account created successfully.  Returning." << endl;
									}
									else if (userType == "staff") {
										staff tempUser(firstName, lastName, address, phoneNumber, email, password, institutionalId, libraryId);
										cout << endl << "Staff account created successfully.  Returning." << endl;
									}
									else {
										cout << "ERROR:  FAILED TO CREATE ACCOUNT." << endl;
									}
								}

								// TODO:  Add the newly defined user to users.txt
								// TODO:  Be sure to add some way of differentiating students, faculty and staff within users.txt

								localGo = true;

							} else if (searchFor == "delete") {

								string inputString;
								int itemId;
								bool validId = true;
								while (go == false) {
									cout << "Please input the id of the user you wish to delete." << endl << "> ";
									cin >> inputString;
									try {
										itemId = stoi(inputString);
									}
									catch (const std::invalid_argument&) { validId = false; }
									catch (const std::out_of_range&) { validId = false; }

									bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
									bool itemAvailable = false; // Boolean to set if the given item has an "available" value of true or false.  If available = true, itemAvailable = true.
									if (validId == true) {
										// TODO:  Check to see if the inventory item with the given id exists
										itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
										itemAvailable = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
									}
									if (itemExists == true) {
										if (itemAvailable == true) {
											go = true;
										}
										else {
											// In the case that itemExists = true, but itemAvailable = false;
											cout << "That item is currently being rented, so it cannot be deleted.  Please try again." << endl;
										}
									}
									else if (inputString == "exit" || inputString == "Exit") {
										cout << "Returning." << endl;
										localGo = true;
										go = true;
									}
									else {
										cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
									}
									validId = true;
								}
								
								if (localGo == false) {
								
									// TODO: Find the item in users.txt and delete it
									// TODO: For any users with a higher id than the deleted user (which is held as the value of the itemId variable), decrease their id number by 1 so that the library ids don't have a gap in it where the deleted user used to be

								}

								cout << "Item deleted." << endl;
								go = true;
								localGo = true;

							} else if (searchFor == "edit") {

								string inputString;
								int itemId;
								bool validId = true;
								while (go == false) {
									cout << "Please input the id of the user you wish to edit." << endl << "> ";
									cin >> inputString;
									try {
										itemId = stoi(inputString);
									}
									catch (const std::invalid_argument&) { validId = false; }
									catch (const std::out_of_range&) { validId = false; }

									bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
									bool itemAvailable = false; // Boolean to set if the given item has an "available" value of true or false.  If available = true, itemAvailable = true.
									if (validId == true) {
										// TODO:  Check to see if the inventory item with the given id exists
										itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
										itemAvailable = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
									}
									if (itemExists == true) {
										if (itemAvailable == true) {
											go = true;
										}
										else {
											// In the case that itemExists = true, but itemAvailable = false;
											cout << "That item is currently being rented, so it cannot be deleted.  Please try again." << endl;
										}
									}
									else if (inputString == "exit" || inputString == "Exit") {
										cout << "Returning." << endl;
										localGo = true;
										go = true;
									}
									else {
										cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
									}
									validId = true;
								}
								if (localGo == false) { go = false; }
								
								string editParam;
								string editParamType;
								while (go == false) {
									cout << "What would you like to edit the item based on?  Your options are: " << endl << "- firstName" << endl << "- lastName" << endl << "- address" << endl << "- phoneNumber" << endl << "- email" << endl << "- password" << endl << "- institutionalId" << endl << "> ";
									cin >> editParam;

									if (editParam == "firstName" || editParam == "lastName" || editParam == "address" || editParam == "email" || editParam == "password" || editParam == "institutionalId") {
										editParamType = "string";
										go = true;
									} else if (editParam == "phoneNumber") {
										editParamType = "unsigned long long";
										go = true;
									} else if (editParam == "institutionalId") {
										editParamType = "unsigned long int";
										go = true;
									} else if (editParam == "exit" || editParam == "Exit") {
										cout << "Returning." << endl;
										go = true;
										localGo = true;
									} else {
										cout << "That's not a valid input!  Please input one of the given inputs, or input \"exit\" to return to the previous screen." << endl;
									}
								}
								if (localGo == false) { go = false; }


								if (editParam == "firstName") { // In the case that the user wants to edit "name"
									
									string replacementFirstName;
									while (go == false) {
										cout << "What would you like to set the firstName value to?" << endl << "> ";
										cin >> replacementFirstName;

										if (replacementFirstName == "exit" || replacementFirstName == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its firstName value with the value of replacementFirstName
									}
									localGo = true;

								} else if (editParam == "lastName") { // In the case that the user wants to edit "lastName"

									string replacementLastName;
									while (go == false) {
										cout << "What would you like to set the lastName value to?" << endl << "> ";
										cin >> replacementLastName;

										if (replacementLastName == "exit" || replacementLastName == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its lastName value with the value of replacementLastName
									}
									localGo = true;

								} else if (editParam == "address") { // In the case that the user wants to edit "address"

									string replacementAddress;
									while (go == false) {
										cout << "What would you like to set the address value to?" << endl << "> ";
										cin >> replacementAddress;

										if (replacementAddress == "exit" || replacementAddress == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its address value with the value of replacementAddress
									}
									localGo = true;

								} else if (editParam == "phoneNumber") { // In the case that the user wants to edit "phoneNumber"
									string inputString2;
									unsigned long long replacementPhoneNumber;
									bool validInput = true;
									while (go == false) {
										cout << "Please input the integer you wish to replace the phoneNumber value with." << endl << "> ";
										cin >> inputString;
										try {
											replacementPhoneNumber = stoi(inputString);
										}
										catch (const std::invalid_argument&) { validInput = false; }
										catch (const std::out_of_range&) { validInput = false; }

										if (validInput == true) {
											go = true;
										} else if (inputString2 == "exit" || inputString2 == "Exit") {
											cout << "Returning." << endl;
											localGo = true;
											go = true;
										} else {
											cout << "This input is invalid.  Please try again." << endl;
										}
										validId = true;
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {

										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its phoneNumber value with the value of replacementPhoneNumber

									}
									localGo = true;

								} else if (editParam == "email") { // In the case that the user wants to edit "email"

									string replacementEmail;
									while (go == false) {
										cout << "What would you like to set the email value to?" << endl << "> ";
										cin >> replacementEmail;

										if (replacementEmail == "exit" || replacementEmail == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										}
										else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its email value with the value of replacementEmail
									}
									localGo = true;

								} else if (editParam == "password") { // In the case that the user wants to edit "password"

									string replacementPassword;
									while (go == false) {
										cout << "What would you like to set the password value to?" << endl << "> ";
										cin >> replacementPassword;

										if (replacementPassword == "exit" || replacementPassword == "Exit") {
											cout << "Returning." << endl;
											go = true;
											localGo = true;
										} else {
											go = true;
										}
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {
										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its password value with the value of replacementPassword
									}
									localGo = true;


								} else if (editParam == "institutionalId") { // In the case that the user wants to edit "institutionalId"
									string inputString2;
									unsigned long int replacementInstitutionalId;
									bool validInput = true;
									while (go == false) {
										cout << "Please input the integer you wish to replace the institutionalId value with." << endl << "> ";
										cin >> inputString;
										try {
											replacementInstitutionalId = stoi(inputString);
										}
										catch (const std::invalid_argument&) { validInput = false; }
										catch (const std::out_of_range&) { validInput = false; }

										if (validInput == true) {
											go = true;
										} else if (inputString2 == "exit" || inputString2 == "Exit") {
											cout << "Returning." << endl;
											localGo = true;
											go = true;
										} else {
											cout << "This input is invalid.  Please try again." << endl;
										}
										validId = true;
									}
									if (localGo == false) { go = false; }

									if (localGo == false) {

										// TODO: Find the item in users.txt with an id equal to "itemId" and replace its institutionalId value with the value of replacementInstitutionalId

									}
									localGo = true;

								} else {
									cout << "ERROR: IMPROPERLY DEFINED VALUE OF EDITPARAM." << endl;
								}

							} else {
								cout << "ERROR:  FAILED TO PROPERLY RETURN USERS SEARCH TYPE.";
								localGo = true;
							}

						}

					}
					go = false;


				} else { // Deny access to this command if the user is not an admin
					cout << "Access denied: Invalid credentials." << endl;
				}



			// - Can view the total number of currently active users in the system
			// Admin only
			}
			else if (input == "getactive") {
				if (permlevel == "Admin") {
					int userCount = 0;
					// TODO:  Search for the number of individual users in users.txt and return the number to userCount
					cout << "There are " << userCount << " users in the system.  However, there is only 1 user who is currently logged in." << endl;
				}
				else {
					cout << "Access denied: Invalid credentials." << endl;
				}



			// - Can facilitate book returns
			// Admin only
			}
			else if (input == "return") {
				bool localGo = false;
				while (localGo == false) {
					if (permlevel == "Admin") {
						string inputString;
						int itemId;
						bool validId = true;
						while (go == false) {
							cout << "Please input the id of the item you wish to return." << endl << "> ";
							cin >> inputString;
							try {
								itemId = stoi(inputString);
							}
							catch (const std::invalid_argument&) { validId = false; }
							catch (const std::out_of_range&) { validId = false; }
							
							bool itemExists = false; // boolean to check if the id exists within the inventory.  If an item with the given id exists, available = true;
							bool itemAvailable = false; // Boolean to set if the given item has an "available" value of true or false.  If available = true, itemAvailable = true.  To continuethe process, this variable needs to be false.
							if (validId == true) {
								// TODO:  Check to see if the inventory item with the given id exists
								itemExists = true; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
								itemAvailable = false; // TODO:  THIS IS A TEMPORARY SETUP TO ALLOW THE PROGRAM TO CONTINUE, REMOVE THIS LINE OF CODE ONCE FINISHED WITH A PART OF THE PROGRAM THAT LETS THE PROGRAM CHECK IF A GIVEN ID EXISTS OR NOT
							}
							if (itemExists == true) {
								if (itemAvailable == false) {
									go = true;
								} else {
									// In the case that itemExists = true, but itemAvailable = false;
									cout << "That item is already available." << endl;
									go = true;
									globalGo = true;
								}
							} else if (inputString == "exit" || inputString == "Exit") {
								cout << "Returning." << endl;
								localGo = true;
								go = true;
							} else {
								cout << "This input is invalid, or no item with that id exists.  Please try again." << endl;
							}
							validId = true;
						}
	
						if (localGo == false) {
							// TODO: Find the item in book.txt with an id equal to itemId, set its value of Available to "false" and set its value of renterId to 0
						}

						cout << "Item renewed." << endl;
						go = true;
						localGo = true;
					} else {
						cout << "Access denied: Invalid credentials." << endl;
					}
				}
				go = false;


				// Help command
				// Displays a list of commands

				
			}

			else if (input == "addsimple") {
   			 string filename, line;
   			 cout << "File name (e.g., books.txt): ";
   			 cin >> filename;
   			 cout << "Enter line to add: ";
   			 cin.ignore();
   			 getline(cin, line);

			 //sep func. append to file
   			 addToFile(filename, line);
}

			else if (input == "viewsimple") {
 		  	string filename;
   			cout << "File name to view: ";
    		cin >> filename;

			//sep func. view file
    		viewFile(filename);
}

			else if (input == "overwritesimple") {
    		string filename;
    		cout << "File name to overwrite: ";
    		cin >> filename;

			//sep func. overwrite file
    		overwriteFile(filename);
}

			
			else if (input == "help") {
				cout << "A list of valid commands are:" << endl;
				cout << "- borrow:  Borrow and check out books in our library's inventory." << endl;
				cout << "- search:  Search through our library's inventory.";
					if (permlevel == "Admin") { cout << "  Admins can also search for user accounts."; }
					cout << endl;
				if (permlevel == "Admin") {
					cout << "- editinv:  Add, delete or edit inventory items." << endl;
					cout << "- editusers:  Add, delete, or edit user accounts." << endl;
					cout << "- getactive : Return the number of active users in the system." << endl;
					cout << "- return : Facilitate book returns." << endl;
				}
				cout << "- logout:  Logs out and terminates the program" << endl;

				// Logout command
				// Ends the current login loop and returns to the original requests upon bootup
			} else if (input == "logout") {
				cout << "See you next time!";
				permlevel = "";
				isLoggedIn = false;

				// In case of an invalid command
			} else {
				cout << "Command not recognized.  Please input \"help\" to see a list of commands." << endl;
				std::cin.clear(); // Clears the failbit on cin so that it can detect an invalid string again
				std::cin.ignore(256, '\n');
			}

			cout << endl << endl;
		}

	}
	return 0;
}

// TODO:
// User / Admin command:  Search for inventory items and users by name.  ADMINS can search for items by name, ID, keywords, or publisher
// Admin command:  Add new inventory item
// Admin command:  Delete existing inventory item
// Admin command:  Edit inventory item
// Admin command:  Add user account
// Admin command:  Delete user account
// Admin command:  Edit user item
// Admin command:  Request number of currently active users in system