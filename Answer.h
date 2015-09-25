#pragma once
class Answer
{
public:
	Answer();
	void create(int,int,int,int);
	bool isValid(int,int,int,int);
	bool isSolved(int, int, int, int);
	bool isIn(int, int);
	bool isIn(int);
	int getPeg(int);
	int numCorrect(int,int,int,int);
};

