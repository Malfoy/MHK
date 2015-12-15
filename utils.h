#ifndef UT
#define UT
#include <string>
#include <iostream>
#include <cstdint>
#include <cctype>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

typedef uint64_t minimizer;
typedef uint32_t readNumber;
typedef unsigned int uint;


vector<string> getReads(const string& ReadFile,uint n);
uint64_t nuc2int(char c);
string reversecomplement (const string& s);
void int2seq(minimizer min, uint n);
minimizer cat(minimizer seed, minimizer body, uint n);
minimizer getRepresent(minimizer min, uint n);
minimizer rc(minimizer min, uint n);
minimizer getEnd(minimizer kmer, uint n);
minimizer getBegin(minimizer kmer, uint n);

#endif
