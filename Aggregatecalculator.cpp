#include<iostream>
#include<string>
#include"Section.h"
#include"Aggregate.h"
#include"color.h"
using namespace std;

// Section class implementation

Section::Section() {
    this->correctAnswers = 0;
    this->wrongAnswers = 0;
    this->attemptedQuestions = 0;
    this->scorePerCorrect = 0.0;
    this->scorePerWrong = 0.0;
    this->totalQuestions = 0;
}
Section::~Section() {

}

AdvanceMath::AdvanceMath() {
    this->totalQuestions = 50;
    this->scorePerCorrect = 1.00;
    this->scorePerWrong = -0.25;
}

void AdvanceMath::inputAnswers() {
    cout << "Enter Advance Math details: " << endl;
    cout << "Enter number of attempted questions: "<<RESET;
    cin >> this->attemptedQuestions;
   
    while (this->attemptedQuestions > this->totalQuestions || this->attemptedQuestions < 0) {
        cout <<GREEN "Invalid input. attempted answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->totalQuestions <<GREEN<< ": "<<RESET;
        cin >> this->attemptedQuestions;
    }
    cin.ignore();
    cout <<GREEN<< "Enter number of correct answers: "<<RESET;
    cin >> this->correctAnswers;
    while (this->correctAnswers > this->totalQuestions || this->correctAnswers < 0) {
        cout <<GREEN<< "Invalid input. Correct answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->attemptedQuestions <<GREEN<< ": "<<RESET;
        cin >> this->correctAnswers;
    }
    cin.ignore();
    cout << YELLOW;
    cout << "Attempted questions entered: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct ansers entered: " <<RESET<< this->correctAnswers << endl;
    this->wrongAnswers = this->attemptedQuestions - this->correctAnswers;
    cout << GREEN;
}

double AdvanceMath::calculateScore() {
    return (this->correctAnswers * this->scorePerCorrect) + (this->wrongAnswers * this->scorePerWrong);
}

void AdvanceMath::displayScore() {
    cout <<YELLOW<< "Advance math score: " <<RESET<< this->calculateScore() << endl;
}

void AdvanceMath::display() {
    cout <<YELLOW<< "Attempted questions: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct answers: " <<RESET<< this->correctAnswers << endl;
    cout <<YELLOW<< "Wrong answers: " <<RESET<< this->wrongAnswers << endl;
}

AdvanceMath::~AdvanceMath() {

}

BasicMath::BasicMath() {
    this->totalQuestions = 20;
    this->scorePerCorrect = 1.00;
    this->scorePerWrong = -0.25;
}

void BasicMath::inputAnswers() {
    cout << GREEN;
    cout << "Enter Basic math details: " << endl;
    cout << "Enter number of attempted questions: "<<RESET;
    cin >> this->attemptedQuestions;
    while (this->attemptedQuestions > this->totalQuestions || this->attemptedQuestions < 0) {
        cout <<GREEN<< "Invalid input. attempted answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->totalQuestions <<GREEN<< ": "<<RESET;
        cin >> this->attemptedQuestions;
    }
    cin.ignore();
    cout <<GREEN "Enter number of correct answers: "<<RESET;
    cin >> this->correctAnswers;
    while (this->correctAnswers > this->totalQuestions || this->correctAnswers < 0) {
        cout <<GREEN<< "Invalid input. Correct answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->attemptedQuestions <<GREEN<< ": "<<RESET;
        cin >> this->correctAnswers;
    }
    cin.ignore();
    cout << YELLOW;
    cout << "Attempted questions entered: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct ansers entered: " <<RESET<< this->correctAnswers << endl;
    this->wrongAnswers = this->attemptedQuestions - this->correctAnswers;
    cout << GREEN;
}

double BasicMath::calculateScore() {
    return (this->correctAnswers * this->scorePerCorrect) + (this->wrongAnswers * this->scorePerWrong);
}

void BasicMath::displayScore() {
    cout <<YELLOW<< "Basic math score: " <<RESET<< this->calculateScore() << endl;
}

void BasicMath::display() {
    cout <<YELLOW<< "Attempted questions: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct answers: " <<RESET<< this->correctAnswers << endl;
    cout <<YELLOW<< "Wrong answers: " <<RESET<< this->wrongAnswers << endl;
}

BasicMath::~BasicMath() {

}

Intellegence::Intellegence() {
    this->totalQuestions = 20;
    this->scorePerCorrect = 1.00;
    this->scorePerWrong = -0.25;
}

void Intellegence::inputAnswers() {
    cout << GREEN;
    cout << "Enter intelligence details: " << endl;
    cout << "Enter number of attempted questions: "<<RESET;
    cin >> this->attemptedQuestions;
    while (this->attemptedQuestions > this->totalQuestions || this->attemptedQuestions < 0) {
        cout <<GREEN<< "Invalid input. attempted answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->totalQuestions <<GREEN<< ": "<<RESET;
        cin >> this->attemptedQuestions;
    }
    cin.ignore();
    cout <<GREEN<< "Enter number of correct answers: "<<RESET;
    cin >> this->correctAnswers;
    while (this->correctAnswers > this->totalQuestions || this->correctAnswers < 0) {
        cout <<GREEN<< "Invalid input. Correct answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->attemptedQuestions <<GREEN<< ": "<<RESET;
        cin >> this->correctAnswers;
    }
    cin.ignore();
    cout << YELLOW;
    cout << "Attempted questions entered: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct ansers entered: " <<RESET<< this->correctAnswers << endl;
    this->wrongAnswers = this->attemptedQuestions - this->correctAnswers;
    cout << GREEN;
}

double Intellegence::calculateScore() {
    return (this->correctAnswers * this->scorePerCorrect) + (this->wrongAnswers * this->scorePerWrong);
}

void Intellegence::displayScore() {
    cout <<YELLOW<< "Intelligence score: " <<RESET<< this->calculateScore() << endl;
}

void Intellegence::display() {
    cout <<YELLOW<< "Attempted questions: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct answers: " <<RESET<< this->correctAnswers << endl;
    cout <<YELLOW<< "Wrong answers: " <<RESET<< this->wrongAnswers << endl;
}

Intellegence::~Intellegence() {

}

English::English() {
    this->totalQuestions = 30;
    this->scorePerCorrect = 0.33;
    this->scorePerWrong = -0.083;
}

void English::inputAnswers() {
    cout << GREEN;
    cout << "Enter English details: " << endl;
    cout << "Enter number of attempted questions: "<<RESET;
    cin >> this->attemptedQuestions;
    while (this->attemptedQuestions > this->totalQuestions || this->attemptedQuestions < 0) {
        cout <<GREEN<< "Invalid input. attempted answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->totalQuestions <<GREEN<< ": "<<RESET;
        cin >> this->attemptedQuestions;
    }
    cin.ignore();
    cout <<GREEN<< "Enter number of correct answers: "<<RESET;
    cin >> this->correctAnswers;
    while (this->correctAnswers > this->totalQuestions || this->correctAnswers < 0) {
        cout <<GREEN<< "Invalid input. Correct answers must be between "<<RESET<<0<<GREEN<<" and " <<RESET<< this->attemptedQuestions <<GREEN<< ": "<<RESET;
        cin >> this->correctAnswers;
    }
    cin.ignore();
    cout << YELLOW;
    cout << "Attempted questions entered: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct ansers entered: " <<RESET<< this->correctAnswers << endl;
    this->wrongAnswers = this->attemptedQuestions - this->correctAnswers;
    cout << GREEN;
}

double English::calculateScore() {
    return (this->correctAnswers * this->scorePerCorrect) + (this->wrongAnswers * this->scorePerWrong);
}

void English::displayScore() {
    cout <<YELLOW<< "English score: " <<RESET<< this->calculateScore() << endl;
}

void English::display() {
    cout <<YELLOW<< "Attempted questions: " <<RESET<< this->attemptedQuestions << endl;
    cout <<YELLOW<< "Correct answers: " <<RESET<< this->correctAnswers << endl;
    cout <<YELLOW<< "Wrong answers: " <<RESET<< this->wrongAnswers << endl;
}

English::~English() {

}

// Aggregate calculator class implementation

AggregateCalculator::AggregateCalculator() {
    this->matricMarks = 0.0;
    this->intermidiateMarks = 0.0;
    this->matricPercentage = 0.0;
    this->intermidiatePercentage = 0.0;
    this->entryTestScore = 0.0;
    this->totalAggregate = 0.0;
}

void AggregateCalculator::inputPersonalInfo() {
    cout << GREEN;
    cout << "Enter your personal info: " << endl;
    cin.ignore();
    cout << "Enter your name: " << RESET;;
    getline(cin, this->Name);
    cout << GREEN "Enter your ARN: " << RESET;;
    getline(cin, this->Arn);
    cout <<GREEN "Enter your matriculation marks: "<<RESET;
    cin >> this->matricMarks;
    cin.ignore();
    cout <<GREEN "Enter Intermediate marks: "<<RESET;
    cin >> this->intermidiateMarks;
    cout << YELLOW;
    cin.ignore();
    cout << "Matric Marks Entered: " <<RESET<< this->matricMarks <<YELLOW<< endl;
    cout << "Intermediate Marks Entered: " <<RESET<< this->intermidiateMarks <<YELLOW<< endl;
    cout << RED;
    system("pause");
    calculatePercentages();
    cout << RESET;
}

void AggregateCalculator::calculatePercentages() {
    if (this->matricMarks > 0 && this->matricMarks <= 1100 &&
        this->intermidiateMarks > 0 && this->intermidiateMarks <= 1100) {
        this->matricPercentage = (this->matricMarks / 1100.0) * 100;
        this->intermidiatePercentage = (this->intermidiateMarks / 1100.0) * 100;
    }
    else {
        cout <<RED<< "Error: Marks must be between 1 and 1100." <<RESET<< endl;
        this->matricPercentage = 0.0;
        this->intermidiatePercentage = 0.0;
    }
}

void AggregateCalculator::inputAllSections() {
    system("cls");
    cout << GREEN;
    cout << "Enter your entry test details: " << endl;
    advanceMath.inputAnswers();
    cout << RED;
    system("pause");
    cout << GREEN;
    system("cls");
    basicMath.inputAnswers();
    cout << RED;
    system("pause");
    cout << GREEN;
    system("cls");
    intellegence.inputAnswers();
    cout << RED;
    system("pause");
    cout << GREEN;
    system("cls");
    english.inputAnswers();
    cout << RED;
    system("pause");
    cout << RESET;
    system("cls");
}

double AggregateCalculator::calculateEntryTestScore() {
    return this->advanceMath.calculateScore() + this->basicMath.calculateScore() + this->intellegence.calculateScore() + this->english.calculateScore();
}

void AggregateCalculator::calculateTotalAggregate() {
    //this->displayAll();
    this->entryTestScore = calculateEntryTestScore();

    // Display debug information
    cout <<YELLOW<< "----------------------------------------" << endl;
    cout <<YELLOW<< "Matric Percentage: " <<RESET<< this->matricPercentage << "%" << endl;
    cout <<YELLOW<< "Intermediate Percentage: " <<RESET<< this->intermidiatePercentage << "%" << endl;
    cout <<YELLOW<< "Entry Test Score: " <<RESET<< this->entryTestScore << endl;
    cout <<YELLOW<< "----------------------------------------" << endl;

    // Calculate total aggregate
    this->totalAggregate = (0.1 * this->matricPercentage) + (0.4 * this->intermidiatePercentage) + (0.5 * this->entryTestScore);

    // Display aggregate
    cout <<YELLOW<< "----------------------------------------" << endl;
    cout <<YELLOW<< "Name: " <<RESET<< this->Name << endl;
    cout <<YELLOW<< "ARN: " <<RESET<< this->Arn << endl;
    cout <<YELLOW<< "Matric weightage: " <<RESET<< (this->matricPercentage * 0.1) << "%" << endl;
    cout <<YELLOW<< "Intermediate weightage: " <<RESET<< (this->intermidiatePercentage * 0.4) << "%" << endl;
    cout <<YELLOW<< "Entry test weightage: " <<RESET<< (this->entryTestScore * 0.5) << "%" << endl;
    cout <<YELLOW<< "Final Total Aggregate: " <<RESET<< this->totalAggregate <<"%"<< endl;
    cout <<YELLOW<< "----------------------------------------" << endl;
}

void AggregateCalculator::displayAllScores() {
    cout << YELLOW;
    cout << "Entry test details." << endl;
    this->displayAll();
    cout << endl;
    cout <<YELLOW<< "----------------------------------------" << endl;
    this->advanceMath.displayScore();
    this->basicMath.displayScore();
    this->intellegence.displayScore();
    this->english.displayScore();
    cout <<YELLOW<< "----------------------------------------" << endl;
    cout << RESET;
}

void AggregateCalculator::displayAll() {
    cout << YELLOW;
    cout <<YELLOW<< "----------------------------------------" << endl;
    cout << "All entry test scores" << endl;
    this->advanceMath.display();
    this->basicMath.display();
    this->intellegence.display();
    this->english.display();
    cout <<YELLOW<< "----------------------------------------" << endl;
    cout << RED;
    cout << endl;
    system("pause");
    cout << RESET;
}

AggregateCalculator::~AggregateCalculator() {

}

