// smooth snailin copyright 2020 Cassie Worm 
 #include <iostream>
 #include <cmath>
 #include <string>

using namespace std;

int main() {

char choice1;
char choice2;

cout << "Smooth Snailin' 2020. roll a blunt & prepare to squirm\n";
cout << "A glass pane appears your eyes.\n" 
<< " This is all you've ever known.\n" 
<<"The warm light keeps you dry and ready for human consumption.\n" 
<< "You must break free from this prision & make a family. Capre Diem, snail time\n";
cout << "Which direction would you like to move ? (n, e, s, w) \n";

cin >> choice1;

switch(choice1) {
	case 'n':
	cout << "You approach the glass of the terrarium. Would you like to attempt to ford it ? (y/n) ";
	cin >> choice2;
	break;
	case 'e':
	cout << "You approach the snail hide where the male snails fondle their mates to flex on you. \n" << "This is too much for you. You decide to take your life.\n Game over.";
	break;
	default:
	cout << "Try again ;0 \n"; 
	return 0;
}
}