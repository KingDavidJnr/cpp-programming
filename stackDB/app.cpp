#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Record {
  string name;
  int age;
  string phone;
};

int main() {
  stack<Record> db;

  char choice;
  do {
    cout << "Enter choice:\n";
    cout << "1: Add record\n";
    cout << "2: Remove record\n";
    cout << "3: Display records\n";
    cout << "4: Exit\n";
    cin >> choice;

    switch(choice) {
      case '1': {
        Record new_record;
        cout << "Enter name: ";
        cin >> new_record.name;
        cout << "Enter age: ";
        cin >> new_record.age;
        cout << "Enter phone number: ";
        cin >> new_record.phone;
        db.push(new_record);
        cout << "Record added!\n";
        break;
      }
      case '2': {
        if (db.empty()) {
          cout << "Database is empty.\n";
        } else {
          db.pop();
          cout << "Record removed!\n";
        }
        break;
      }
      case '3': {
        if (db.empty()) {
          cout << "Database is empty.\n";
        } else {
          stack<Record> temp = db;
          while (!temp.empty()) {
            Record record = temp.top();
            cout << "Name: " << record.name << endl;
            cout << "Age: " << record.age << endl;
            cout << "Phone: " << record.phone << endl;
            cout << "-----------" << endl;
            temp.pop();
          }
        }
        break;
      }
      case '4': {
        cout << "Exiting program...\n";
        break;
      }
      default: {
        cout << "Invalid choice. Please try again.\n";
        break;
      }
    }
  } while (choice != '4');

  return 0;
}
