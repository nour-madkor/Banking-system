#include "FileManager.h"
#include "Admin.h"
using namespace std;

int main() {
	//refill files:
	/*Employee s("Garfield", 1090, "passtemp", 10000);
	Employee x("Sameh", 1010, "emp1pass", 10000);
	Employee y("Haitham", 1011, "emp2pass", 10000);
	Employee z("Rawan", 1012, "emp3pass", 10000);
	employeelist.push_back(x);
	employeelist.push_back(y);
	employeelist.push_back(z);
	Admin f("Naseem", 100, "adminpass", 25000);
	Admin k("Walaa", 101, "adminpass", 25000);
	adminlist.push_back(f);
	adminlist.push_back(k);
	client l(102030, "Clark", "client1pass", 500030);
	client m(102031, "Steven", "client2pass", 500500);
	client n(102032, "Maryam", "client3pass", 650000);
	client o(102033, "Malak", "client4pass", 550000);
	client p(102034, "Salma", "client5pass", 20000);
	clientlist.push_back(l);
	clientlist.push_back(m);
	clientlist.push_back(n);
	clientlist.push_back(o);
	clientlist.push_back(p);
	filemanager::refillemployees();
	filemanager::refilladmins();
	filemanager::refillclients();
	*/
	//testing:
	Admin a("Snoopy", 10, "passtemp", 10000);
	cout << "admin created\n";
	filemanager::getAllEmployees();
	cout << "get func called\n";
	a.listemployees();
	cout << "Welcome!\n\n";
	int choice;
	client g(102035, "Garfield", "password", 150000);
	/*do {
		cout << "Do you want to 1)Search for client, 2)Add new client, ";
		cout << "3)View all clients, 4)Edit a client, or 5)View your information? \n";
		cin >> choice;
		cout << "\n";
		switch (choice) {
		case 1:
		{
			client* ptr = s.searchforclient(102033);
			if (ptr != NULL)
				ptr->display();
			else
				cout << "Invalid Id\n";
			break;
		}
		case 2:
		{
			s.addclient(g);
			break;
		}
		case 3:
		{
			s.listclients();
			break;
		}
		case 4:
		{

			break;
		}
		case 5:
		{
			s.display();
			break;
		}
		default:
		{
			cout << "Invalid choice..\n";
		}
		}//end of inner switch
		system("cls");
	} while (true);*/
}

/*void employeemenu(Employee s) {
	cout << "Welcome!\n\n";
	int choice;
	client g(102035, "Garfield", "password", 150000);
	do {
		cout << "Do you want to 1)Search for client, 2)Add new client, ";
		cout << "3)View all clients, 4)Edit a client, or 5)View your information? \n";
		cin >> choice;
		cout << "\n";
		switch (choice) {
		case 1:
		{
			client* ptr=s.searchforclient(102034);
			ptr->display();
		}
		case 2:
		{
			s.addclient(g);
			break;
		}
		case 3:
		{
			s.listclients();
			break;
		}
		case 4:
		{
		
			break;
		}
		case 5:
		{
			s.display();
			break;
		}
		default:
		{
			cout << "Invalid choice..\n";
		}
		}//end of inner switch
		system("cls");
	} while (true);

}*/

//void login() {
//	string password;
//	int id;
//	bool wrongid = true, calladmin, callemployee, callclient;
//	do {
//		cout << "Are you an 1)Admin, 2)Employee or 3)Client? ";
//		cin >> choice;
//		system("cls");
//		switch (choice) {
//		case 1:
//		{
//			cout << "Enter ID: "; cin >> id;
//			cout << "Enter Password: "; cin >> password;
//			for (int i = 0; i < lasteadminindex; i++) {
//				if (id == adminlist[i].getId()) {
//					wrongid = false;
//					stay = false;
//					if (password == adminlist[i].getPassword())
//					{
//						cout << "Successful login\n";
//						system("cls");
//						adminmenu(i);
//						stay = false;
//					}
//					else {
//						cout << "Incorrect password\n";
//						stay = true;
//					}
//				}
//				else {
//					wrongid = true;
//				}
//			}
//			if (wrongid) {
//				cout << "Incorrect ID...\n";
//				stay = true;
//			}
//			break;
//		}//case1 
//		case 2:
//		{
//			cout << "Enter ID: "; cin >> id;
//			cout << "Enter Password: "; cin >> password;
//			for (int i = 0; i < lastemployeeindex; i++) {
//				if (id == employeelist[i].getId()) {
//					wrongid = false;
//					stay = false;
//					if (password == employeelist[i].getPassword())
//					{
//						cout << "Successful login\n";
//						system("cls");
//						employeemenu(i);
//						stay = false;
//					}
//					else {
//						cout << "Incorrect password\n";
//						stay = true;
//					}
//				}
//				else {
//					wrongid = true;
//				}
//			}
//			if (wrongid) {
//				cout << "Incorrect ID...\n";
//				stay = true;
//			}
//			break;
//		}//case 2
//		case 3:
//		{
//			cout << "Enter ID: "; cin >> id;
//			cout << "Enter Password: "; cin >> password;
//			for (int i = 0; i < lastclientindex; i++) {
//				if (id == clientlist[i].getId()) {
//					wrongid = false;
//					stay = false;
//					if (password == clientlist[i].getPassword())
//					{
//						cout << "Successful login\n";
//						stay = false;
//						//clientmenu(i);
//					}
//					else {
//						cout << "Incorrect password\n";
//						stay = true;
//					}
//				}
//				else {
//					wrongid = true;
//				}
//			}
//			if (wrongid) {
//				cout << "Incorrect ID...\n";
//				stay = true;
//			}
//			break;
//		}//case3
//		default:
//		{
//			cout << "Invali option...\n";
//			stay = true;
//		}
//		}//end of switch
//		system("cls");
//	} while (stay);
//}
//void adminmenu(int index) {
//	cout << "Welcome " << adminlist[index].getName() << "!\n\n";
//	do {
//		cout << "Do you want to 1)Search for Employee, 2)Add new Employee, ";
//		cout << "3)View all Employees, 4)Edit an Employee, or 5)View your information? \n";
//		cin >> choice;
//		cout << "\n";
//		system("cls");
//		switch (choice) {
//		case 1:
//		{
//			int searchindex = adminlist[index].searchforemployee(lastemployeeindex, employeelist);
//			if (searchindex != -1) {
//				employeelist[searchindex].display();
//				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "-------------------------------------------- " << endl;
//				break;
//			}
//			else {
//				cout << '\n';
//				break;
//			}
//		}
//		case 2:
//		{
//			adminlist[index].addemployee(lastemployeeindex, employeelist);
//			cout << "\n";
//			employeelist[lastemployeeindex - 1].display();
//			cout << "\t\t\t\t\t\t\t\t\t\t\t" << "-------------------------------------------- " << endl;
//			break;
//		}
//		case 3:
//		{
//			adminlist[index].listemployees(lastemployeeindex, employeelist);
//			break;
//		}
//		case 4:
//		{
//			adminlist[index].editemployee(lastemployeeindex, employeelist);
//			break;
//		}
//		case 5:
//		{
//			adminlist[index].display();
//			break;
//		}
//		default:
//		{
//			cout << "Invalid choice..\n";
//		}
//		}//end of inner switch
//		cout << "Another task? (press n/N to stop) "; cin >> repeat;
//		system("cls");
//	} while (repeat != 'n' && repeat != 'N');
//
//}