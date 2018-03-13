/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Parser.h
 * Author: morleyw1
 *
 * Created on October 6, 2017, 1:08 PM
 */

#ifndef PARSER_H
#define PARSER_H

using namespace std;

//individual command's parsers. Each one takes a stream and returns the message to be printed to the screen
string insertR(stringstream & );
string modifyR(stringstream & );
string printR(stringstream & );
string printNode(stringstream &);
string deleteR(stringstream &);

//error checking functions that are used by the parse functions above. They perform small tasked that are often repeated
bool checkStreamErrors(stringstream &);  //checks stream for flags and resets them if necessary
bool checkNameErrors(string);            //checks for name "all"
bool checkNodeRange(int, stringstream &);//ensures nodes are between 0-MAX_NODE_NUMBER
bool checkResistance(double);            //checks for negative resistance
bool validInt(stringstream &);           //checks for characters trailing an int that the stream doesn't automatically pickup


#endif /* PARSER_H */

