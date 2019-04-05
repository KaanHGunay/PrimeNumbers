#pragma once
#include "stdc++.h"

using namespace std;

typedef int64_t ll;
typedef long long ll;
typedef pair<ll, ll> lll;
typedef pair<ll, int> lli;
typedef pair<int, int> ii;

#define EL printf("\n")
#define OK printf("OK")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)

const int base = 1e9;
typedef vector<int> BigInt;

void Set(BigInt&);
void Print(BigInt);
BigInt Integer(string);
BigInt Integer(char[]);
BigInt Integer(ll);
BigInt Integer(int);
void operator >> (istream&, BigInt&);
void operator << (ostream&, BigInt);
bool operator < (BigInt, BigInt);
bool operator > (BigInt, BigInt);
bool operator == (BigInt, BigInt);
bool operator <= (BigInt, BigInt);
bool operator >= (BigInt, BigInt);
bool operator < (BigInt, int);
bool operator > (BigInt, int);
bool operator == (BigInt, int);
bool operator >= (BigInt, int);
bool operator <= (BigInt, int);
BigInt max(BigInt, BigInt);
BigInt min(BigInt, BigInt);
BigInt operator + (BigInt, BigInt);
BigInt operator + (BigInt, int);
BigInt operator ++ (BigInt&);
void operator += (BigInt&, BigInt);
void operator += (BigInt&, int);
BigInt operator - (BigInt, BigInt);
BigInt operator - (BigInt, int);
void operator -- (BigInt&);
void operator -= (BigInt&, BigInt);
void operator -= (BigInt&, int);
BigInt operator * (BigInt, BigInt);
BigInt operator * (BigInt, int);
void operator *= (BigInt&, BigInt);
void operator *= (BigInt&, int);
BigInt operator / (BigInt, BigInt);
BigInt operator / (BigInt, int);
void operator /= (BigInt&, BigInt);
void operator /= (BigInt&, int);
BigInt operator % (BigInt, BigInt);
int operator % (BigInt, int);
void operator %= (BigInt&, BigInt);
void operator %= (BigInt&, int);
BigInt gcd(BigInt, BigInt);
BigInt lcm(BigInt, BigInt);
BigInt sqrt(BigInt);
BigInt pow(BigInt, BigInt);
BigInt pow(BigInt, int);
int log(int, BigInt);
