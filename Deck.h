#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
class Deck
{
private:
	std::vector <Card> cards;
public:
	Deck();
	Card dealCard();
	Card dealCard(bool faceUp);
	std::vector<Card> dealCards(int num);
	std::vector<Card> dealCardsFaceUp(int num);
	std::string toString();
};

#endif // !DECK_H