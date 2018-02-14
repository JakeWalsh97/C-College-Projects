#include <iostream>
#include <iostream>

using namespace std;

class Node
{
public:
	Node(double theData, Node* theLink)
		: data(theData), next(theLink) {}
	Node* getLink() const { return next; }
	double getData() const { return data; }
	void setData(double theData) { data = theData; }
	void setLink(Node* pointer) { next = pointer; }
private:
	double data;
	Node *next;
};
typedef Node* Pointer;
Pointer p1, p2;


int main() {

}