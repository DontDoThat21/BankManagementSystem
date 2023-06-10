#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include "sqlite3.h"

using namespace std;
using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    sqlite3* db;
    sqlite3_stmt* stmt;
    sqlite3_open("BMS.db", &db);

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
