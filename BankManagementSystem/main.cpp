#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include "sqlite3.h"
#include "main.h"
#include "BankManagementSystem.h"

using namespace std;
using namespace winrt;
using namespace Windows::Foundation;

sqlite3* _db;

int main()
{

    InitializeDB();    
    InitializeDBTables();

    char ch;
    //int num;

    init_apartment();    

    system("color A1");
        
    cout << "\t\t-----------------------------------------" << endl;
    cout << "\t\t| Welcome to the Bank Management System |" << endl;
    cout << "\t\t-----------------------------------------" << endl;

    cout << endl;
    cout << "\t           --- Main Menu ---"<<endl;
    cout << "\t           --- 1. Create Account ---"<<endl;
    cout << "\t           --- 2. Deposit Money ---"<<endl;
    cout << "\t           --- 3. Withdraw Money ---"<<endl;
    cout << "\t           --- 4. Balance Inquiry ---"<<endl;
    cout << "\t           --- 5. All Account Holder List ---"<<endl;
    cout << "\t           --- 6. Close an Account ---"<<endl;
    cout << "\t           --- 7. Modify an Account ---"<<endl;
    cout << "\t           --- 8. Exit ---"<<endl;
    cout << endl;

    cin >> ch;

}

void InitializeDB() {
    sqlite3_stmt* stmt;
    sqlite3_open("BMS.db", &_db);
}

void InitializeDBTables() {
    char* err;
    int result = sqlite3_exec(_db, "CREATE TABLE IF NOT EXISTS Bank_Account(id INT, name varchar(100), sex varchar(10), address varchar(100), tax varchar(100))", NULL, NULL, &err);
    if (result != SQLITE_OK)
    {
        cout << "error: " << err;
    }
}

void Create_Account() {

}

void Display_Account() {

}
