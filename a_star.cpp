#include <iostream>
#include <set>
using namespace std;

#define ROW 10
#define COL 10

class point {

public:

	int x;
	int y;

	int origin_dist() {return sqrt(x*x + y*y);}

};

void aStarSearch(point Graph[][COL], point Source, point Target) {

	set<point> open;
	set<point> closed;

	open.insert(Source); 

} 

int main() {
	aStarSearch();
}