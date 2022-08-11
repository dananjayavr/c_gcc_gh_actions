#include "answer.h"

int test_answer(void);
int test_dev_answer(void);

int test_answer(void) {
    if (return_answer() == 42) {
        return 0;
    } else {
        return -1;
    }
}

int test_dev_answer() {
    if(return_answer_2_0() == 84) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
  
  if (!test_answer() && !test_dev_answer()) {

    return 0;

  } else {

    return 1;

  }
}