/* program for triangle classification 
 * returns 1 if (i,j,k) are the sides of any triangle
 * returns 2 if (i,j,k) are the sides of an isosceles triangle
 * returns 3 if (i,j,k) are the sides of an equilateral triangle
 * returns 4 if (i,j,k) are not the sides of a triangle
 * 
 
 * error has been inserted line 44, 48
 * when (i,j,k) = (2,2,3) returns 2 (an isosceles triangle) while it would return 4 (any triangle)
 */







	
	void TritypeKO5 (int i, int j, int k) {__CPROVER_assume((i ==2) && (j == 3) && (k ==3));
		int trityp = 0;
		if (i == 0 || j == 0 || k == 0) {
			trityp = 4;		
		}
		else {
			trityp = 0;
			if (i == j) {
				trityp = trityp + 1;
			}
			if (i == k) {
				trityp = trityp + 2;
			}
			if (j != k) {  // error in the condition : j == k instead of j != k
				trityp = trityp + 4; // error in the assignment  : trityp = trityp + 3 instead of trityp = trityp + 4
			}
			if (trityp == 0) {
				if ((i+j) <= k || ((j+k) <= i || (i+k) <= j)) {
					trityp = 4;				
				}
				else {
					trityp = 1;
				}			
			}
			else {
                               
				if (trityp > 3) { 
					trityp = 3;
				}
				else {
					if (trityp == 1 && (i+j) > k) {
						trityp = 2;
					}
					else {
						if (trityp == 2 && (i+k) > j) {
							trityp = 2;						
						}
						else {
							if (trityp == 3 && (j+k) > i) {
								trityp = 2;
							}
							else {
								trityp = 4;
							}
						}
					}
				}
			}
		}
		assert(trityp == 2);
	}
