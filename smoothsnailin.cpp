// smooth snailin copyright 2020 Cassie Worm 
 #include <iostream>
 #include <cmath>
 #include <string>
//  #include <Windows.h>

using namespace std;
srand(time(NULL));

char choices(string x) {
char choice;
cout << x;
cin >> choice;
choice{::tolower(choice)};
return choice;
}

string choices1(string x) {
string choice1;
cout << x;
cin >> choice1;
choice1{::tolower(choice1)};
return choice1;
}

int battle(int num, string name2) {
	int hit_pos1{};
	int hit_pos2{};
	int hp2{};
	int newxp{};

	attack:
	int hit_pos1{rand() % 100};
	int hit_pos2{rand() % 100};

if(hit_pos1 >= num) {
int hit_pnts1{(rand() % 20) * level} // player snail's attack
int hp2{hp2 - hit_pnts1}
cout << "\aYou hit " << name2 << "for " << hit_pnts1 << " points.\n";
} else {
cout << "You missed ;("
}

if(hit_pos2 >= num) {
	int hit_pnts2{(rand() % 20) * level} // oppossing snail attack
	int hp1{hp1-hit_pnts2};
	cout << "\a" << name2 << " hit you for " << hit_pnts2 << " points.\n";
}

if(hp1 <= 0) {
cout << "You have died.\nGame over.\n";
break;
} else if(hp2 <= 0) {
newxp{rand() % 40};
cout << name2 << " has died. rip :/\n you gain " << newxp << " experience points.";
xp{xp + newxp};
return xp;
} else {
goto attack;
}
}

int main() {
//  PlaySound(TEXT("smoothsnail.wav"), NULL, SND_FILENAME);

int hp1{100};
int level{1};
int xp{0};
string name1{""};

cout << "Smooth Snailin' 2020. roll a blunt & prepare to squirm\n\n\n";
cout << "A glass pane appears your eyes.\n" 
<< " This is all you've ever known.\n" 
<<"The warm light keeps you dry and ready for human consumption.\n" 
<< "What is your name, young snail?"
cin >> name1;
<< "You must break free from this prision & make a family. Capre Diem, snail time\n";

choices("Which direction would you like to move ? (n, e, s, w) \n");

switch(choice) {
	case 'n':
	choices("\aYou approach the glass of the terrarium. Would you like to attempt to ford it ? (y/n) ");
	 break;
	case 'e':
	choices1("You approach the snail hide where the alpha snails (Jeremy, Brad, Phil) fondle their mates to flex on you. \n");
	goto snail_fight
	break;
	case 's':
	cout << "my friend you are closer to god\n\a";
	break;
	case 'w':
	cout << "you see \n\a";
	break;
	default:
	cout << "Try again ;0 \n\a"; 
	return 0;
}

snail_fight:
if(choice1 == "fight jeremy" || "fight brad" || "fight phil") {
battle(25, jeremy);
}
}