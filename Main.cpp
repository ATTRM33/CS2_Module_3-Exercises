// Zach Brown
// 7/19/2024
// CS2 Module 3 Exercises

#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"

void testCard();
void testDeck();

int main() {

	//testCard();
	//testDeck();
	
	Deck deck;
	Hand hand;
	hand.addCard(deck.dealCard());
	hand.addCards(deck.dealCards(4));

	std::cout << hand.showCards() << std::endl;

};

void testCard() {
	Card card1(Card::Suit(1), Card::ranks[11], true);

	std::cout <<
		card1.getRank() << std::endl <<
		card1.getSuit() << std::endl <<
		card1.getRankName() << std::endl <<
		card1.getSuitName() << std::endl <<
		card1.toString() << std::endl;
}

void testDeck() {
	Deck deck;

	std::vector<Card> hand = deck.dealCards(51);

	for (Card c : hand)
		std::cout << c.toString() << std::endl;

	std::cout << std::endl;

	std::cout << deck.toString();



}