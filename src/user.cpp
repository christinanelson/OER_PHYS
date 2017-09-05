/*
******************************************************************************

Author : Christina Nelson

Date : August 21, 2017

Description : This program provides the user interface for retrieving 
  problems from the Open Education Resource (OER) Physics Problems database.
  Input are text files of tables from the database, and the output is a 
  text file ready to be processed into a LaTex file.



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

  outfile.open("mytest.txt");
  
  std::vector<std::vector <string> > subj_val;
  std::string pid, subject, difficulty, keywords, comment, q_type, line;
  ifstream subject_v("../mysql/META_INFO.txt");
  int a = 0;
  while(getline(subject_v, line)){
    std::istringstream ss(line);
    std::vector<string> v;
    ss >> pid >> subject >> difficulty >> keywords >> comment >> q_type;
    if(a>0){
    v.push_back(pid);
    v.push_back(subject);
    v.push_back(difficulty);
    v.push_back(keywords);
    v.push_back(comment);
    v.push_back(q_type);
    subj_val.push_back(v);
    }
    a++;
  }

  //std::cout << "size of subjects = " << subj_val.size() << std::endl;
  //for(int i=0; i< subj_val.size(); i++){
  //cout << subj_val[i][0] << " " << subj_val[i][1] <<endl;
  //}
  
  string user_i, k, d, g, we, p, f, h, t, o, em, ow, m, probsolu;
  std::vector<string> user_nums;

  cout << "\n\n******************************************************************\n"
       << "Welcome to the OER Physics algebraic problems database! \n"
       << "\nSelect a subject from the following menu:\n\n"
       << " 1 : Kinematics (linear & rotational)\n"
       << " 2 : Dynamics (linear & rotational)\n"
       << " 3 : Gravitation\n"
       << " 4 : Work & Energy\n"
       << " 5 : Momentum\n"
       << " 6 : Fluids (static & dynamical)\n"
       << " 7 : Heat & Temperature (heat transfer)\n"
       << " 8 : Thermodynamics\n"
       << " 9 : Oscillations\n"
       << "10 : Electricity & Magnetism\n"
       << "11 : Optics & Waves\n"
       << "12 : Modern\n"
       << "\nEnter in the number: ";
  cin >> user_i;
  
  if(user_i.compare("1") == 0){
    k = "kinematics";
    int q_num[83];
    int q=0, nu;
    cout << "\nYou have chosen '"<< k <<"' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(k) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< k <<"' problems." << endl;  
  }
  else if(user_i.compare("2") == 0){
    d = "dynamics";
    int q=0, nu;
    cout << "\nYou have chosen '"<< d <<"' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(d) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< d <<"' problems." << endl;  
  }
  else if(user_i.compare("3") == 0){
    g = "gravitation";
    int q=0, nu;
    cout << "\nYou have chosen '" << g << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(g) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< g <<"' problems." << endl;  
  }
  else if(user_i.compare("4") == 0){
    we = "work-energy";
    int q=0, nu;
    cout << "\nYou have chosen '" << we << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(we) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< we <<"' problems." << endl;  
  }
  else if(user_i.compare("5") == 0){
    p = "momentum";
    int q=0, nu;
    cout << "\nYou have chosen '" << p << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(p) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< p <<"' problems." << endl;  
  }
  else if(user_i.compare("6") == 0){
    f = "fluids";
    int q=0, nu;
    cout << "\nYou have chosen '" << f << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(f) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< f <<"' problems." << endl;  
  }
  else if(user_i.compare("7") == 0){
    h = "heat-temperature";
    int q=0, nu;
    cout << "\nYou have chosen '" << h << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(h) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< h <<"' problems." << endl;  
  }
  else if(user_i.compare("8") == 0){
    t = "thermodynamics";
    int q=0, nu;
    cout << "\nYou have chosen '" << t << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(t) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< t <<"' problems." << endl;  
  }
  else if(user_i.compare("9") == 0){
    o = "oscillations";
    int q=0, nu;
    cout << "\nYou have chosen '" << o << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(o) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< o <<"' problems." << endl;  
  }
  else if(user_i.compare("10") == 0){
    em = "electricity-magnetism";
    int q=0, nu;
    cout << "\nYou have chosen '" << em << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(em) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< em <<"' problems." << endl;  
  }
  else if(user_i.compare("11") == 0){
    ow = "optics-waves";
    int q=0, nu;
    cout << "\nYou have chosen '" << ow << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(ow) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< ow <<"' problems." << endl;  
  }
  else if(user_i.compare("12") == 0){
    m = "modern";
    int q=0, nu;
    cout << "\nYou have chosen '" << m << "' physics problems.\n" << endl;
    for(int j=0; j<subj_val.size(); j++){
      string subj = subj_val[j][1];
      if(subj.compare(m) ==0) {
	string q_num = subj_val[j][0];
	q_num.append("PDB");
	user_nums.push_back(q_num);
      }
    }
    cout << "\nThere are "<< user_nums.size() << " '"<< m <<"' problems." << endl;  
  }
  else {
    cout << "Sorry, the input you have entered is invalid, please check and try again.\n" << endl;
    return -1;
  }

  cout << "Enter 'p' to retrieve only problems from the database, or \n"
       << "enter 'ps' to get problems and solutions : ";
  cin >> probsolu;
  
  bool p_s = false; 
  if(probsolu.compare("ps")==0){
    p_s = true; //display problems and solutions
  }
  else if(probsolu.compare("p")==0){
    p_s = false; //display only problems
  }
  else cout << "Sorry, the input you have entered is invalid, please check and try again.\n" << endl;
 
  std::vector<std::vector <string> > latex_val;
  std::string pid_l, prob, solu, owner, la_line, next;
  ifstream assess_v("reformat-assessment.txt");
  //ifstream assess_v("reformat-ass.txt");
  int b=0, tr1=0, tr2=0, count_newline=0, only_sol=-10;
  char ch, ah;
  cout << "\n" << endl;
  int running_tot = 5*user_nums.size();
    
  if(p_s == false) tr2 = 10;

  while(getline(assess_v, la_line)){
    
    for(int z=0; z<user_nums.size(); z++){      
      string un_i = user_nums[z];
      string next;
      std::istringstream ss(la_line);
      ss >> pid_l;
       
      if(pid_l.compare(un_i)==0){
	assess_v.get(ch);
	outfile << "`item" << endl;	

	while (count_newline<2){
	  if(count_newline == 0) {
	    outfile << ch;
	    tr1++;
	  }	  
	  else if(count_newline == 1 && p_s == true){
	    outfile << ch;
	    tr2++;
	  }
	  assess_v.get(ch);
	  if(ch=='\n') count_newline++;
	  
	  if(tr2==1) {
	    outfile <<"\n`vspace{10mm} \n" << endl;
	    outfile <<"\n`textbf{Solution} `` \n" <<endl;
	  }
	}
	outfile << "\n\n`vspace{10mm}\n\n";
	count_newline=0;
	if(p_s == true) tr2 = 0;
	}
      }
  }
 
  outfile.close();

  if(p_s == true){
    cout << "Your OER physics problems & solutions are ready. \nPlease run next command to generate your LaTex file.\nThanks!\n\n******************************************************************\n" << endl;
  }
  else if(p_s == false){
    cout << "Your OER physics problems & solutions are ready. \nPlease run next command to generate your LaTex file.\nThanks!\n\n******************************************************************\n" << endl;
  }

  return 0;
}
