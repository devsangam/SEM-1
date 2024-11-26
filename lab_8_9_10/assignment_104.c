enum Level {
  RED = 1,
  GREEN,
  BLUE
};

int main() {
  enum Level myVar = RED;

  switch (myVar) {
    case 1:
      printf("#ff0000");
      break;
    case 2:
      printf("#00ff00");
      break;
    case 3:
      printf("#0000ff");
      break;
  }
  return 0;
}