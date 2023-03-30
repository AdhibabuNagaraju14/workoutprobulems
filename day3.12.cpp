void print_even(int n) {
   if (n < 1) {
      return;
   }
   if (n % 2 == 0) {
      printf("%d ", n);
      print_even(n-2);
   } else {
      print_even(n-1);
   }
}

