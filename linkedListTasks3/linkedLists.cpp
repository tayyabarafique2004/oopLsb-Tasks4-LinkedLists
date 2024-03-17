#include<iostream>
#include<list>
#include<vector>
#include"ToDoList.h"
//#include"Node.h"
//#include"LinkedLists.h"
using namespace std;
int main() {



	ToDoList List("First List");
	List.addSubTask("assignment 4");
	List.addSubTask("assignment 5");
	List.addSubTask("assignment 6");

	// Store reference to the newly added sub-task
	ToDoList& task4 = List.addSubTask("open ended");
	task4.addSubTask("midterm exam");

	// Display the to-do list
	List.display();

      
	return 0;
}

//class Spreadsheet {
//private:
//	vector<list<int>> data;
//
//public:
//	// Function to add a new row to the spreadsheet
//	void addRow(const list<int>& row) {
//		data.push_back(row);
//	}
//
//	// Function to delete a row from the spreadsheet
//	void deleteRow(size_t index) {
//		if (index < data.size()) {
//			data.erase(data.begin() + index);
//		}
//	}
//
//	// Function to display the spreadsheet
//	void display() const {
//		for (const auto& row : data) {
//			for (int val : row) {
//				cout << val << "\t";
//			}
//			cout << endl;
//		}
//	}
//};
//int main() {
//
//	Spreadsheet s1;
//
//	// Add some initial data to the spreadsheet
//	s1.addRow({ 1, 2, 3 });
//	s1.addRow({ 4, 5, 6 });
//	s1.addRow({ 7, 8, 9 });
//
//	// Display the spreadsheet
//	cout << "Initial Spreadsheet:" << endl;
//	s1.display();
//
//	// Add a new row to the spreadsheet
//	s1.addRow({ 10, 11, 12 });
//	cout << "\nSpreadsheet after adding a new row:" << endl;
//	s1.display();
//
//	// Delete a row from the spreadsheet
//	s1.deleteRow(1);
//	cout << "\nSpreadsheet after deleting row:" << endl;
//	s1.display();



	/*LinkedLists l1;
	LinkedLists l2;
	
	
	l1.append(12);
	l1.append(15);
	l1.append(13);
	l1.append(20);
	cout << "orignal list is:  ";
	l1.PrintList();
	cout << endl;
	l1.reverse();
	cout << "reversed list is:  ";
	l1.PrintList();
	cout << endl;
	l1.search(12);
	cout << "sorted list:  ";
	l1.sort();
	
	l1.PrintList();
	l2.append(33);
	l2.append(42);
	l2.append(22);
	l1.merge(l2);
	cout << "merged lists:  ";
	l1.PrintList();*/
//	return 0;
//}