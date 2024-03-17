int Subset(int array1[], int m, int array2[], int n) {
  if (n > m) return 0;

  int i, j;
  for (i = 0; i < n; i++) {
    int flag = 0;
    for (j = 0; j < m; j++) {
      if (array2[i] == array1[j]) {
        flag = 1;
        break;
      }
    }
    if (!flag) {
      return 0;
    }
  }
  return 1;
}
