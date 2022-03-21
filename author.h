#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Author
{
    private:
        char id[50];
        char name[50];
        char notes[50];

    public:
        void Create();
        string get_name(string);
        vector<string> get_Id(string);
        void Inputdata();
        void Update();
        void Delete();
        void Display();
};
