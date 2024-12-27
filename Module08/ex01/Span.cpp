#include "Span.h"

Span::Span() : n(0) {}

Span::Span(unsigned int _n) : n(_n) {}

void Span::addNumber(int value) {
	if (queue.size() >= n)
		throw std::overflow_error("Queue has been overflowed!");
	queue.push_back(value);
}

int Span::shortestSpan(void) const {
	if (queue.size() < 2)
		throw std::logic_error("Can't have span with less than 2 numbers!");
	std::vector<int> local = queue;
	std::sort(local.begin(), local.end());
	int limit = std::numeric_limits<int>::max();
	for (size_t i = 0; i < local.size() - 1; i++) {
		int delta = local[i + 1] - local[i];
		limit = delta < limit ? delta : limit;
	}
	return limit;
}

int	Span::longestSpan(void) const {
	if (queue.size() < 2)
		throw std::logic_error("Can't have span with less than 2 numbers!");
	return *std::max_element(queue.begin(), queue.end()) - *std::min_element(queue.begin(), queue.end());
}

int	Span::queueGet(int i) {
	return i >= 0 && i < n ? queue[i] : 1;
}

bool Span::exists(int number) const {
	return std::find(queue.begin(), queue.end(), number) != queue.end();
}

Span & Span::operator = (const Span & clone) {
	if (this != &clone) {
		n = clone.n;
		queue = clone.queue;
	}
	return *this;
}

Span::~Span(void) {}