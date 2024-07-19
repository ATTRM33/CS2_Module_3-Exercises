
#ifndef CARD_H
#define CARD_H
#include <iostream>


class Card
{public:
	struct Rank {
		std::string name;
		int value;
	};
	static enum Suit {CLUBS, SPADES, DIAMONDS, HEARTS};
	static std::string suitNames[4];
	static Rank ranks[13];
private:	 
	Suit suit;
	Rank rank;
	bool faceUp;
public:
	Card(Suit s, Rank r);
	Card(Suit s, Rank r, bool faceu);
	int getRank();
	std::string getRankName();
	std::string getSuitName();
	int getSuit();
	std::string toString();
	void setFaceUp(bool faceU);

};


#endif // !
