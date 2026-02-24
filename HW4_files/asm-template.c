/* Completed program reconstructed from asm2.obj */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gval; // global, defaults to 0

static int func1(int x) {
  return x + 5;
}

static void gfunc(int x) {
  gval = gval + x;
}

int main(int argc, char *argv[]) {
  int val;
  int ret = 0;

  if (argc < 2) {
    puts("Program takes one argument.");
    exit(0);
  }
  val = atoi(argv[1]);

  if (val > 1000) {
    ret = func1(val);
    printf("A: %d\n", ret);
  } else if (val > 500) {
    if (val == 600) {
      printf("B: %d\n", val);
    } else {
      puts("B: @@@");
    }
  } else if (val > 200) {
    int arr[500];
    for (int i = 0; i < val; i++) {
      arr[i] = (val & i);
    }
    printf("C: %d\n", arr[100]);
  } else if (val > 100) {
    gfunc(val);
    printf("D: %d\n", gval);
  } else if (val > 10) {
    const char *s = "EECS690/700SRE";
    if ((int)strlen(s) == val) {
      puts("E:FLAG Reached");
    }
  } else {
    switch (val) {
      case 0: ret = val + 0; break;
      case 1: ret = val + 1; break;
      case 2: ret = val + 2; break;
      case 3: ret = val + 3; break;
      case 4: ret = val + 4; break;
      case 5: ret = val + 5; break;
      case 6: ret = val + 6; break;
      case 7: ret = val + 7; break;
      case 8: ret = val + 8; break;
      case 9: ret = val + 9; break;
      default: ret = 0; break;
    }
    printf("F: %d\n", ret);
  }

  return 0;
}
