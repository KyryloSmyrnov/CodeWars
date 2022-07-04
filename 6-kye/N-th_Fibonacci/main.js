function nthFibo(n) {
  if(n == 1 || n == 2)
    return (n - 1);
  
  return(nthFibo(n - 1) + nthFibo(n - 2));
}
