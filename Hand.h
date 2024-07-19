#ifndef HAND_H
#define HAND_H
#include <vector>
#include "Card.h"


class Hand
{
private:
	std::vector<Card> cards;

public:
	Hand();
	std::string showCards();
	std::string toString();
	Card getCard(int index);
	void addCard(Card c);
	void addCards(std::vector<Card> cs);
	int getSize();

};
#endif HAND_H
