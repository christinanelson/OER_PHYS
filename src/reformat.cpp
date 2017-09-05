/*
******************************************************************************

Author : Christina Nelson

Date : August 21, 2017

Description : This program just reformats the output from the OER Physics
  database ASSESSMENT table into a format where columns are separated by 
  new line characters instead of tabs.



This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

  ******************************************************************************
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

ofstream outfile;

int main(){

  outfile.open("reformat-assessment.txt");
  std::vector<std::vector <string> > latex_val;
  std::string pid_l, prob, solu, owner, la_line;
  ifstream assess_v("../mysql/ASSESSMENT.txt");
  char ch;
  while(assess_v.get(ch)){
    if(ch!='\t') outfile << ch;
    else outfile << endl;
  }

  outfile.close();
  return 0;
}
