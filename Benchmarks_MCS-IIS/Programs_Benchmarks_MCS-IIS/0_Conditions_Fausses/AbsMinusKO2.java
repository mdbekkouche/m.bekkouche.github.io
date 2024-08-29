class AbsMinus {
	
    /* returns |i-j|, the absolute value of i minus j */
	
     /*@ requires
      @	(i==0) && (j==1);
      @ ensures 
      @ (result==1); 
      @*/
	int AbsMinusKO2 (int i, int j) {
		int result=i+1; // error in the assignment : result = i+1 instead of result = i
		int k = 0;
		if (i <= j) {
			k = k+1;
		}
		if (k == 1 && i != j) {
			result = j-result; 		
		}
		else {
			result = result-j;
		}
		return result;
	}
}
