#ifndef SECTION_H
#define SECTION_H
class Section {
protected:
	int correctAnswers;
	int wrongAnswers;
	int attemptedQuestions;
	int totalQuestions;
	double scorePerCorrect;
	double scorePerWrong;
public:
	Section();
	virtual void inputAnswers() = 0;
	virtual void displayScore() = 0;
	virtual double calculateScore() = 0;
	virtual void display() = 0;
	~Section();
};
class AdvanceMath :public Section {
public:
	AdvanceMath();
	void inputAnswers()override;
	double calculateScore()override;
	void displayScore()override;
	void display()override;
	~AdvanceMath();
};
class BasicMath :public Section {
public:
	BasicMath();
	void inputAnswers()override;
	double calculateScore()override;
	void displayScore()override;
	void display()override;
	~BasicMath();
};
class Intellegence :public Section {
public:
	Intellegence();
	void inputAnswers()override;
	double calculateScore()override;
	void displayScore()override;
	void display()override;
	~Intellegence();
};
class English :public Section {
public:
	English();
	void inputAnswers()override;
	double calculateScore()override;
	void displayScore()override;
	void display()override;
	~English();
};

#endif 