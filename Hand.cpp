#include "Hand.h"


Hand::Hand() {

}
std::string Hand::showCards() {
	std::string result;
	for (Card c : cards)

		result += "The " + c.getRankName() + " of " + c.getSuitName() + "\n";
	return result;
}
std::string Hand::toString() {
	std::string result;
	for (Card c : cards)
		result += c.toString() + "\n";
	return result;
}
Card Hand::getCard(int index) {

	if (index > 0 && index <cards.size())
		return cards[index];
	Card dummyCard(Card::Suit(0), Card::ranks[0]);
	return dummyCard;
}
void Hand::addCard(Card c) {
	cards.push_back(c);
}
void Hand::addCards(std::vector<Card> cs) {
	for (Card c : cs)
		cards.push_back(c);
}
int Hand::getSize() {
	return cards.size();
}