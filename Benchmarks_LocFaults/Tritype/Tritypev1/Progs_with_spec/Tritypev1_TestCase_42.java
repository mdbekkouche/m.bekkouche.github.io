package benchmark;

public class Tritypev1 {
    
    /*@ requires
    @ ((i == 6) && (j == 8) && (k == 6));
    @ ensures
    @ (((i+j) <= k || (j+k) <= i || (i+k) <= j) ==> (\result == 4))
    @ && ((!((i+j) <= k || (j+k) <= i || (i+k) <= j) && (i==j && j==k)) ==> (\result == 3))
    @ && ((!((i+j) <= k || (j+k) <= i || (i+k) <= j) && !(i==j && j==k) && (i==j || j==k || i==k)) ==> (\result == 2))
    @ && ((!((i+j) <= k || (j+k) <= i || (i+k) <= j) && !(i==j && j==k) && !(i==j || j==k || i==k)) ==> (\result == 1));
    @*/
    public int tritype (int i, int j, int k) {
        int trityp;
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
            if (j == k) {
                trityp = trityp + 3;
            }
            if (trityp == 0) {
                if ((i+j) <= k || (j+k) <= i || (i+k) <= j) {
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
                        // error in the assignment : trityp = 1 instead of trityp = 2
                        if (trityp == 2 && (i+k) > j) {
                            trityp = 1;
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
        return trityp;
    }
}
