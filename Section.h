#ifndef SECTION_H
#define SECTION_H

//abstract base class for test section
class Section {
protected:
	//variable for questions 
	int correctAnswers;
	int wrongAnswers;
	int attemptedQuestions;
	int totalQuestions;
	//variables for marking
	double scorePerCorrect;
	double scorePerWrong;
public:
	//default constructor
	Section();
	//virtual input function
	virtual void inputAnswers() = 0;
	//virtual display function
	virtual void displayScore() = 0;
	//virtual score calculation function
	virtual double calculateScore() = 0;
	//virtual display function
	virtual void display() = 0;
	//destructor for section class
	~Section();
};

//derived class advance math of section class
class AdvanceMath :public Section {
public:
	//default constructor
	AdvanceMath();
	//input function
	void inputAnswers()override;
	//function for score calculation
	double calculateScore()override;
	//function to display score
	void displayScore()override;
	//function to display info
	void display()override;
	//destructor for section class
	~AdvanceMath();
};

//derived class basic math of section class
class BasicMath :public Section {
public:
	//default constructor
	BasicMath();
	//function to input basic math section details
	void inputAnswers()override;
	//function of score calculation
	double calculateScore()override;
	//function to display calculated score
	void displayScore()override;
	//function to display
	void display()override;
	//destructor of section class
	~BasicMath();
};

// derived class intelligence of base section class
class Intellegence :public Section {
public:
	//defualt constructor
	Intellegence();
	//input function
	void inputAnswers()override;
	//score calculation function
	double calculateScore()override;
	//display all score function
	void displayScore()override;
	//display function
	void display()override;
	//destructor of intelligence class
	~Intellegence();
};

//derived class english from base section class
class English :public Section {
public:
	//default constructor
	English();
	//input function
	void inputAnswers()override;
	//score calculation function
	double calculateScore()override;
	/// <summary>
	/// display score function
	/// </summary>
	void displayScore()override;
	//function to display inputs of corresponding object
	void display()override;
	//destructor of english class
	~English();
};

#endif 
