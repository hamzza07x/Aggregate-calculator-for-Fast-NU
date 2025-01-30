#ifndef AGGREGATE_H
#define AGGREGATE_H
#include"Section.h"
#include<string>
using namespace std;
// class aggregate calculator
//the class calculates aggregate based on test and acadamic scores
class AggregateCalculator {
private:
	//sections of entry test
	AdvanceMath advanceMath;
	BasicMath basicMath;
	Intellegence intellegence;
	English english;

	string Name;//students name
	string Arn;//admission roll number
	//acadamic score
	double  matricMarks;//marks in matric
	double intermidiateMarks;//marks in intermidiate
	double matricPercentage;//percentage in matric
	double intermidiatePercentage;//percentage in intermediate
	//entry test and aggregate score
	double entryTestScore;//total scores from entry test sections
	double totalAggregate;//final aggregate scores
public:
	AggregateCalculator();//constructor to initialize member variables
	void inputPersonalInfo();//takes information 
	//calculate percentage scores in matric and intermediate
	void calculatePercentages();
	//take input for all entry test sections
	void inputAllSections();
	//calculate the final entry test score
	double calculateEntryTestScore();
	//calculate the final aggregate based on acadamic and test weightage
	void calculateTotalAggregate();
	//display all scores of individual sections
	void displayAllScores();
	//display full summary
	void displayAll();
	//destructor of class
	~AggregateCalculator();
};
#endif
