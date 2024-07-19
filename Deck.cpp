#include "Deck.h"
#include <ctime>


Deck::Deck() {

	srand(time(0));

	for (int suit = 0; suit < 4; suit++) {
		for (int rank = 0; rank < 13; rank++) {
			Card card(Card::Suit(suit), Card::ranks[rank], true);;

			cards.push_back(card);
		}
	}
}
Card Deck::dealCard() {
	int cardIndex = rand() % cards.size();
	Card tempCard = cards[cardIndex];
	cards[cardIndex] = cards[cards.size() - 1];
	cards.pop_back();
	return tempCard;
}
Card Deck::dealCard(bool faceUp) {

	Card tempCard = dealCard();
	tempCard.setFaceUp(faceUp);
	return tempCard;
}
std::vector<Card> Deck::dealCards(int num) {
	std::vector<Card> dealtCards;

	for (int c = 0; c < num; c++) {
		dealtCards.push_back(dealCard());

	}
	return dealtCards;
}
std::vector<Card> Deck::dealCardsFaceUp(int num) {
	std::vector<Card> dealtCards = dealCards(num);

	for (Card c : dealtCards)
		c.setFaceUp(true);
	return dealtCards;
}
std::string Deck::toString() {
	std::string result;
	for (Card c : cards)
		result += c.toString() + "\n";
	return result;
}