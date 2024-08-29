class AbsMinus {
	
    /* returns |i-j|, the absolute value of i minus j */
	
    /*@ requires
      @	(i==0) && (j==1);
      @ ensures 
      @ (result==1); 
      @*/
	int absMinus (int i, int j) {
		int result;
		int k = 0;
		if (i <= j) {
			k = k+2; // error in the assignment : k = k+2 instead of k = k+1
		}
		if (k == 1 && i != j) {
			result = j-i; 		
		}
		else {
			result = i-j;
		}
		return result;
	}
}
