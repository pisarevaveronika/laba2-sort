void Bubble(int *a, int n){
  int i, j, t;
 
  for (i = n - 1; i > 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      if (a[j] > a[j + 1]) 
        t = a[j]; 
		a[j] = a[j + 1]; 
		a[j + 1] = t;
    }
  }
}