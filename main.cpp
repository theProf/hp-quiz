#include <iostream>
#include <cstdlib>
#include <vector>

int main() {
  
  //House Point totals
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  
  //Answer storage
  int answer1;
  int answer2;
  int answer3;
  int answer4;
  
  //answer vector
  std::vector<std::string> house = {"Gryffindor", "Hufflepuff", "Ravenclaw", "Slytherin"};
  int i = 0; //display house in answer
  
  //final score
  int max = 0;
  
  //Quiz start
  std::cout << "The Sorting Hat Quiz!\n";
  
  //Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cout << "\n";
  std::cin >> answer1;
  
  //answer1 formula
  if (answer1 == 1) {
    hufflepuff = hufflepuff + 1;
    std::cout << "\n";
  }
  else if (answer1 == 2) {
    slytherin = slytherin + 1;
    std::cout << "\n";
  }
  else if (answer1 == 2) {
    ravenclaw = ravenclaw + 1;
    std::cout << "\n";
  }
  else if (answer1 == 2) {
    gryffindor = gryffindor + 1;
    std::cout << "\n";
  }
  else {
    std::cout << "Invalid input\n";
  }

  //Question 2
  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
  std::cout << "\n";
  std::cin >> answer2;
  
  //answer2 formula
  if (answer2 == 1) {
    gryffindor = gryffindor + 1;
    ravenclaw = ravenclaw + 1;
    std::cout << "\n";
  }
  else if (answer2 == 2) {
    hufflepuff = hufflepuff + 1;
    slytherin = slytherin + 1;
    std::cout << "\n";
  }
  else {
    std::cout << "Invalid inpu\nt";
  }
  
  //Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) Violin\n";
  std::cout << "  2) Trumpet\n";
  std::cout << "  3) Piano\n";
  std::cout << "  4) Drum\n";
  std::cout << "\n";
  std::cin >> answer3;
  
  //answer3 formula
  if (answer3 == 1) {
    slytherin = slytherin + 1;
    std::cout << "\n";
  }
  else if (answer3 == 2) {
    hufflepuff = hufflepuff + 1;
    std::cout << "\n";
  }
  else if (answer3 == 3) {
    ravenclaw = ravenclaw + 1;
    std::cout << "\n";
  }
  else if (answer3 == 4) {
    gryffindor = gryffindor + 1;
    std::cout << "\n";
  }
  else {
    std::cout << "Invalid input\n";
  }
  
  //Question 4
  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "  1) The wide, sunny, grassy lane.\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley.\n";
  std::cout << "  3) The twisting, leaf-strewn path through the woods.\n";
  std::cout << "  4) The cobbled street lined with ancient buildings.\n";
  std::cout << "\n";
  std::cin >> answer4;
  
  //answer4 formula
  if (answer4 == 1) {
    hufflepuff = hufflepuff + 1;
    std::cout << "\n";
  }
  else if (answer4 == 2) {
    slytherin = slytherin + 1;
    std::cout << "\n";
  }
  else if (answer4 == 3) {
    gryffindor = gryffindor + 1;
    std::cout << "\n";
  }
  else if (answer4 == 4) {
    ravenclaw = ravenclaw + 1;
    std::cout << "\n";
  }
  else {
    std::cout << "Invalid input\n";
  }
  
  //result formula
  if (gryffindor > max) {
    max = gryffindor;
    i = 0;
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    i = 1;
  }
//  else if (hufflepuff == max) {
//    max = hufflepuff;
//    srand(time(NULL));
//    i = std::rand() % 1;
//  }
  if (ravenclaw > max) {
    max = ravenclaw;
    i = 2;
  }
  if (slytherin > max) {
    max = slytherin;
    i = 3;
  }
//  else if (slytherin == max) {
//    max = slytherin;
//    srand(time(NULL));
//    i = std::rand() % 1 + 2;
//  }
  
  std::cout << house[i] << "!\n";
  
}