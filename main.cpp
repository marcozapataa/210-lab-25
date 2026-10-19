#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;
using namespace std::chrono;

// function prototypes
vector<long long> reading_race(vector<string>& vec, list<string>& lst, set<string>& st);
vector<long long> sorting_race(vector<string>& vec, list<string>& lst);
vector<long long> inserting_race(vector<string>& vec, list<string>& lst, set<string>& st);
vector<long long> deleting_race(vector<string>& vec, list<string>& lst, set<string>& st);
void display_results(const vector<vector<long long>>& results, const vector<string>& operations);


int main() {

    vector<string> vec;
    list<string> lst;
    set<string> st;

    vector<vector<long long>> results;
    vector<string> operations = {
        "Reading", "Sorting", "Inserting", "Deleting"
    };

    // run races and store results
    results.push_back(reading_race(vec, lst, st));
    results.push_back(sorting_race(vec, lst));
    results.push_back(inserting_race(vec, lst, st));
    results.push_back(deleting_race(vec, lst, st));

    // display results
    display_results(results, operations);
    

    return 0;
}