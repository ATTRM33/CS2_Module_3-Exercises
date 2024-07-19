#include "Card.h"

Card::Rank Card::ranks[] = {{"Ace", 1}, {"Two", 2}, {"Three", 3}, {"Four", 4}, {"Five", 5}, {"Six", 6}, {"Seven", 7}, {"Eight", 8}, {"Nine", 9}, {"Ten", 10}, {"Jack", 10} , {"Queen", 10}, {"King", 10}};

std::string Card::suitNames[4] = { "Clubs", "Spades", "Diamonds", "Hearts" };

Card::Card(Suit s, Rank r) {
	suit = s;
	rank = r;
	faceUp = false;
}
Card::Card(Suit s, Rank r, bool faceu) {
	suit = s;
	rank = r;
	faceUp = faceu;
}
int Card::getRank() {
	return rank.value;
}
std::string Card::getRankName() {
	return rank.name;
}
std::string Card::getSuitName() {
	return suitNames[suit];
}
int Card::getSuit() {
	return suit;
}
std::string Card::toString() {
	std::string result = faceUp ? ("The " + getRankName() + " of " + getSuitName()) : "An unknown card faced down";
	return result;
}

void Card::setFaceUp(bool faceU) {
	faceUp = faceU;
}