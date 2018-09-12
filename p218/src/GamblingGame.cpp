#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "GamblingGame.h"

GamblingGame::GamblingGame() {
	// TODO Auto-generated constructor stub
	cout << "첫번째 선수 이름 : ";
	cin >> this->first;
	cout << "두번째 선수 이름 : ";
	cin >> this->second;
}

void GamblingGame::random(){

	srand((int)time(NULL));

	for(int i=0;i<3;i++){
		this->num[i]=rand()%2+0;
	}
}

void GamblingGame::start(){
	int i=1;

	cout << "***** 갬블링 게임을 시작합니다. *****" << endl; // prints !!!Hello World!!!

	while(1){

		if(i==1){
			cout << this->first << " : " << endl;
			this->random();
			cout << this->num[0] << this->num[1] << this->num[2] ;
			if(this->num[0]==0 && this->num[1]==0 && this->num[2]==0){
				cout << this->first << "님 승리!!" << endl;
				break;
			}
			else{
				cout << "아쉽군요!" << endl;
			}
			i=2;
		}
		else if(i==2){
			cout << this->second << " : " << endl;
			this->random();
			cout << this->num[0] << this->num[1] << this->num[2] ;
			if(this->num[0]==0 && this->num[1]==0 && this->num[2]==0){
				cout << this->second << "님 승리!!" << endl;
				break;
			}
			else{
				cout << "아쉽군요!" << endl;
			}
			i=1;
		}

	}
}
