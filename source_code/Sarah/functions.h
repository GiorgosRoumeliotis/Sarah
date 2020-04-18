#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
#include <iomanip>
#include <ios>

using namespace std;

vector< vector <string> > loading(string filename){



    vector <vector <string> > data;
    ifstream infile(filename);

    while (infile){
        string s;
        if (!getline( infile, s )) break;

        istringstream ss( s );
        vector <string> record;

        while (ss)
        {
        string s;
        if (!getline( ss, s, ',' )) break;
        record.push_back( s );
        }

        data.push_back( record );



    }

    if (!infile.eof()){
        cerr << "ERROR FILE NOT FOUND!\n";
    }

    return data;

}

#endif // FUNCTIONS_H
