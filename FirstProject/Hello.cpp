/*
 * Hello.cpp
 *
 *  Created on: Feb 14, 2019
 *      Author: emilyevans
 */

#include <iostream>

using namespace std;

int addnums (int x, int y); /* function declaration */

int main() {
 cout << "!!!Hello, world!!!" << endl;
 int z = addnums (3,4);
 cout << "The result of addnums(3,4) is " << z << endl;
 return 0;
}

/* function definition for add numbers */
int addnums(int x, int y){
	return (x+y);
}
