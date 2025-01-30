#ifndef AGGREGATE_H
#define AGGREGATE_H
#include"Section.h"
#include<string>
using namespace std;
class AggregateCalculator {
private:
	AdvanceMath advanceMath;
	BasicMath basicMath;
	Intellegence intellegence;
	English english;
	string Name;
	string Arn;
	double  matricMarks;
	double intermidiateMarks;
	double matricPercentage;
	double intermidiatePercentage;
	double entryTestScore;
	double totalAggregate;
public:
	AggregateCalculator();
	void inputPersonalInfo();
	void calculatePercentages();
	void inputAllSections();
	double calculateEntryTestScore();
	void calculateTotalAggregate();
	void displayAllScores();
	void displayAll();
	~AggregateCalculator();
};
#endif