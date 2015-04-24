#ifndef FUNCTION_PROTOTYPES_H
#define FUNCTION_PROTOTYPES_H

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <unistd.h>

/* includes des librairies utilisées */
#include <Eigen/Dense>

using namespace::std;
using Eigen::MatrixXd;


/* ici sont placés les prototypes de mes fonctions */

/* 102.cpp */
int E_102_user_choises ();
int E_102_choises (int choise);
void user_input_to_matrix_base(MatrixXd & text_matrix, string & input, string & base);
string chiffre_102(MatrixXd & text_matrix, MatrixXd & key_matrix, string & base);
string dechiffre_102(MatrixXd & text_matrix, MatrixXd & key_matrix, const char * lib);

/* 102_matrix_input.cpp */
int numbers_only(string tmp);
int fast_check(string tmp);
int write_matrix(MatrixXd & out, string tmp);
int last_check(MatrixXd & out);
void matrix_input_102(MatrixXd & out);

/* 102_utilitaires.cpp */
int key_validator_102_base(string key, const string lib);
int input_validator(string str, const string lib);

/* v102.cpp */
int  V_102_user_choises();
void  V_102_choises(int choise);

/* cesars.cpp */
int cesars_choises(int choise);
int cesars_user_choises();
string chiffre_cesars (char * & input, char const * & lib, int lib_size, int key);
string dechiffre_cesars(char * & input, char const * & lib, int lib_size, int key);

/* info.cpp */
void info_C_and_V();
void info_102();
void info_v102();
void info_alpha();
void display_info();

/* vigenere.cpp */
string chiffre_vigenere(string & input, char const * lib, int lib_size, string & key);
string dechiffre_vigenere(string & input, char const * lib, int lib_size, string & key);
int key_check(string & key, const char * lib);
int vigenere_choises (int choise);
int vigenere_user_choises();

/* matrix.cpp */
/*
void resize_matrix(MatrixXd & out, char * input);
void resize_matrix(MatrixXd & out, int words);
void matrix_initialisator(MatrixXd & matrix);
void user_input_to_matrix(MatrixXd & out, char * input, const char * lib);
*/
#endif
