#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
#include "structprotopypes.h"

const int FormsMax = 3;
const string FormsAvalible[FormsMax]{ "round","sqare","triangle" };
const char ShowedForm[FormsMax]{char(2),char(254),char(30)};
const char SelectedChar = '|';
const string ColorAvalible[5]{ "red","green","blue","purpule","white", };
char action();
const int HIGH = 10;
const int WIDGH = 10;