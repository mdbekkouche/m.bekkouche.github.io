

     
       
       
      
      
    int BSearchKO(int x) {
	int result = -1;int tab[128];int res; __CPROVER_assume((x == -2147472218) && (tab[0]==-2147483610) && (tab[1]==-2147475891) && (tab[2]==-2147474655) && (tab[3]==-2147472218) && (tab[4]==-2147463363) && (tab[5]==-2147461567) && (tab[6]==-2147453202) && (tab[7]==-2147450920) && (tab[8]==-2147483610) && (tab[9]==-2147475929) && (tab[10]==-2147482412) && (tab[11]==-2147481211) && (tab[12]==-2147474793) && (tab[13]==-2147481852) && (tab[14]==-2147475283) && (tab[15]==-2147481366) && (tab[16]==-2147483199) && (tab[17]==-2147483039) && (tab[18]==-2147477795) && (tab[19]==-2147475550) && (tab[20]==-2147482506) && (tab[21]==-2147483367) && (tab[22]==-2147483113) && (tab[23]==-2147477728) && (tab[24]==-2147474703) && (tab[25]==-2147477365) && (tab[26]==-2147480651) && (tab[27]==-2147478969) && (tab[28]==-2147482674) && (tab[29]==-2147481760) && (tab[30]==-2147481995) && (tab[31]==-2147477744) && (tab[32]==-2147475192) && (tab[33]==-2147482325) && (tab[34]==-2147474769) && (tab[35]==-2147481408) && (tab[36]==-2147473923) && (tab[37]==-2147481373) && (tab[38]==-2147481202) && (tab[39]==-2147483058) && (tab[40]==-2147482808) && (tab[41]==-2147475062) && (tab[42]==-2147476742) &&(tab[43]==-2147482413) && (tab[44]==-2147480039) && (tab[45]==-2147481032) && (tab[46]==-2147481193) && (tab[47]==-2147482781) && (tab[48]==-2147474117) && (tab[49]==-2147476770) && (tab[50]==-2147475427) && (tab[51]==-2147475762) && (tab[52]==-2147482054) && (tab[53]==-2147483066) && (tab[54]==-2147481437) && (tab[55]==-2147482540) && (tab[56]==-2147476070) && (tab[57]==-2147476583) && (tab[58]==-2147476019) && (tab[59]==-2147474246) && (tab[60]==-2147481370) &&(tab[61]==-2147480144) && (tab[62]==-2147479262) && (tab[63]==-2147472218) && (tab[64]==-2147481320) && (tab[65]==-2147476472) && (tab[66]==-2147481317) && (tab[67]==-2147474385) && (tab[68]==-2147481536) && (tab[69]==-2147479513) && (tab[70]==-2147476722) && (tab[71]==-2147482546) && (tab[72]==-2147481998) && (tab[73]==-2147475244) && (tab[74]==-2147479313) && (tab[75]==-2147475794) && (tab[76]==-2147478050) && (tab[77]==-2147478878) && (tab[78]==-2147479552) && (tab[79]==-2147480436) &&(tab[80]==-2147478965) && (tab[81]==-2147476946) && (tab[82]==-2147478389) && (tab[83]==-2147477707) && (tab[84]==-2147480901) && (tab[85]==-2147476275) && (tab[86]==-2147474779) && (tab[87]==-2147475645) && (tab[88]==-2147476976) && (tab[89]==-2147480496) && (tab[90]==-2147481830) && (tab[91]==-2147480146) && (tab[92]==-2147483409) && (tab[93]==-2147479462) && (tab[94]==-2147480844) && (tab[95]==-2147474713) && (tab[96]==-2147480625) && (tab[97]==-2147483314) && (tab[98]==-2147483117) && (tab[99]==-2147482257) && (tab[100]==-2147477629) && (tab[101]==-2147482075) && (tab[102]==-2147477667) && (tab[103]==-2147479688) && (tab[104]==-2147483024) && (tab[105]==-2147476583) && (tab[106]==-2147476081) && (tab[107]==-2147480819) && (tab[108]==-2147479483) && (tab[109]==-2147481413) && (tab[110]==-2147482402) && (tab[111]==-2147480014) && (tab[112]==-2147478030) && (tab[113]==-2147477923) && (tab[114]==-2147480949) && (tab[115]==-2147479327) && (tab[116]==-2147478727) && (tab[117]==-2147480876) &&(tab[118]==-2147476837) && (tab[119]==-2147481587) &&(tab[120]==-2147480083) && (tab[121]==-2147478459) && (tab[122]==-2147483529) && (tab[123]==-2147474902) && (tab[124]==-2147477600) && (tab[125]==-2147474029) && (tab[126]==-2147477315) && (tab[127]==-2147477680));
	int milieu = 0;int length = 128;
	int gauche = 0;
	int droite = length - 1;
	while ((result == -1) && (gauche <= droite)) {
	    milieu = (gauche + droite) / 2;
	    if (tab[milieu] == x) {
		result = gauche; /*error: the instruction should be result = milieu; */ 
	    }
	    else if (tab[milieu] > x) {
		droite = milieu - 1;
	    }
	    else {
		gauche = milieu + 1;
	    }
	}
	res=result; 
        assert((res == 3) || (res == 63));
    }
