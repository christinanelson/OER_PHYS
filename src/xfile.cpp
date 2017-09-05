/*
******************************************************************************

Author : Christina Nelson

Date : August 21, 2017

Description : This program creates a LaTex file in order to generate a high
  quality PDF document of chosen OER Physics Problems from the database.


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


//this program replaces the ' with \ for LaTex commands

int main() {

  outfile.open("myPDF.tex");
  outfile << "\\documentclass[12pt, a4paper/letterpaper]{report}\n";
  outfile << "\\usepackage[margin=1in]{geometry}\n";
  outfile << "\\usepackage{graphicx, amsmath, enumitem}\n";
  outfile << "\\begin{document}\n";
  outfile << "\\begin{enumerate}[leftmargin=\\labelsep]\n";
  
  ifstream myfile("mytest.txt");
  string line;
  char c;
  while(myfile.get(c)){
    
    if(c=='`') c='\\';
    
    outfile << c;
  }


  outfile << "\\end{enumerate}\n";
  
  outfile << "\\end{document}\n"; 
  outfile.close();
  
  cout << "\n******************************************************************"
       << "\n\nOER Success!\nYour file named myPDF.tex has been created and is \nlocated in the latex directory."
       << "\n\n******************************************************************\n" << endl;
  return 0;

}

  
