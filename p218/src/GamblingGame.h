#ifndef GAMBLINGGAME_H_
#define GAMBLINGGAME_H_

class GamblingGame {
private:
	string first;
	string second;
	int num[3];
public:
	GamblingGame();
	void start();
	void random();
};

#endif /* GAMBLINGGAME_H_ */
