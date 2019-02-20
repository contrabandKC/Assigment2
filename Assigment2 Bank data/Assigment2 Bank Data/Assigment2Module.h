#pragma once

#include <string>
#include "string.h"
#include <iomanip>

using namespace std;

char MainMenu();

void PrintCustomerData(const int id[], const string first[] , const string last[], const double savings_Account[], int size );

void PrintNames(const int id[], const string first[], const string last[], int size);

void PrintTotal(const int  id[], const double savings_account[], const double checking_Account[], int size);

