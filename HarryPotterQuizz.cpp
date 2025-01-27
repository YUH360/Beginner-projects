#include <iostream>

int main() {
// welcome to my magical world 
// declaring the 4 different houses variables 
int gryffindor = 0;
int hufflepuff = 0;
int  ravenclaw = 0;
int slytherin  = 0;
// declaring the 4 quiz answers variables 
int answer1;
int answer2;
int answer3;
int answer4;
// displaying the initiation of the quiz 
std::cout << "The sorting hat Quiz has started ! \n";
// displaying the first quiz question 
std::cout << "Q1) When I'm dead, I want people to remember me as: \n" << "\n" << "  1) The Good \n" << 
"  2) The Great \n" << "  3) The Wise \n" << "  4) The Bold \n"; 
// storing the user's answer in the following declared variable 
std::cin >> answer1;
// conditioning the answer vis a vis the question 
if (answer1 == 1) {
  hufflepuff = hufflepuff + 1; 
}
else if (answer1 == 2) {
  slytherin = slytherin + 1;
}
else if (answer1 == 3) {
  ravenclaw = ravenclaw + 1;
}
else if (answer1 == 4) {
  gryffindor = gryffindor + 1;
}
else { 
  std::cout << "Invalid input \n";
}
// Second question display and storing the answer 
std::cout << "Q2) Dawn or Dusk? \n" << "\n" << "  1) Dawn \n" << "  2) Dusk \n";
std::cin >> answer2;
// second conditioning 
if (answer2 == 1) {
  gryffindor = gryffindor + 1;
  ravenclaw = ravenclaw + 1;
}
else if (answer2 == 2) {
  hufflepuff = hufflepuff + 1;
  slytherin = slytherin + 1;
}
else {
  std::cout << "Invalid input \n";
}
// third question for the quiz 
std::cout << "Q3) Which kind of instrument most pleases your ear? \n" << "\n" << "  1) The violin \n" << "  2) The trumpet \n" << "  3) The piano \n" << "  4) The drum \n"; 
std::cin >> answer3;
// third conditioning, kill me :) 
if (answer3 == 1) { 
  slytherin = slytherin + 1;
}
else if (answer3 == 2) {
  hufflepuff = hufflepuff + 1;
}
else if (answer3 == 3) {
  ravenclaw = ravenclaw + 1;
}
else if (answer3 == 4) {
  gryffindor = gryffindor +1;
}
else {
  std::cout << "Invalid input \n";
}
// same thing for the fourth question 
std::cout << "Q4) Which road tempts you most? \n" << "\n" << "  1) The wide, sunny grassy lane \n" << "   2) The narrow, dark, lantern-lit alley \n" << "   3) The twisting, leaf-strewn path through woods \n" << "  4) The cobbled street lined (ancient buildings) \n"; 
std::cin >> answer4; 
// conditioning for the fourth question :)))
if (answer4 == 1) { 
  hufflepuff = hufflepuff + 1;
}
else if (answer4 == 2) {
  slytherin = slytherin + 1;
}
else if (answer4 == 3) {
  gryffindor = gryffindor + 1;
}
else if (answer4 == 4) {
  ravenclaw = ravenclaw + 1;
}
else {
  std::cout << "Invalid input \n";
}
// last part :D 
std::string house;
int max = 0;

if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}
if (slytherin > max) {
  max = slytherin; 
  house = "Slytherin";
}
std::cout << house << "!\n";
}