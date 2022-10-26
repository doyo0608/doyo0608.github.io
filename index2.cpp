#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<string, int>> subJ = { make_pair("국어",3),make_pair("통사",3),make_pair("영어",3),make_pair("심수",3),make_pair("정보",3),make_pair("생명",2),make_pair("통과",2),make_pair("지학",3),make_pair("물리",2),make_pair("화학",3) };
int main()
{
	int VecLen = subJ.size();
	double sum = 0;
	double sumq = 0;
	for (int i = 0; i < VecLen; i++) {
		int s;
		cout << subJ[i].first << " : ";
		cin >> s;
		sum += s*subJ[i].second;
		sumq += subJ[i].second;
		cout << endl;
	}
	cout << "등평 " << sum / sumq;

}
