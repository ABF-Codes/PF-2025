# include<stdio.h> 
int main(){
     int c1, c2, c3, c4, c5;
      printf("input all your cards m8 \n");
       scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5); 
 
// Gonna put all possible combinations for a full hand in a if statement 
 
if( //1,2,3 & 4,5 
       (c1 == c2 && c2 == c3 && c4 == c5 && c1 != c4) || 
       //1,2,4 & 3,5 
  (c1 == c2 && c2 == c4 && c3 == c5 && c1 != c3) ||   //1,2,5 & 3,4 
  (c1 == c2 && c2 == c5 && c3 == c4 && c1 != c3) ||   //1,3,4, & 2,5 
  (c1 == c3 && c3 == c4 && c2 == c5 && c1 != c2) ||   //1,3,5 & 2,4 
  (c1 == c3 && c3 == c5 && c2 == c4 && c1 != c2) ||   //1,4,5  & 2,3 
  (c1 == c4 && c4 == c5 && c2 == c3 && c1 != c2) ||   //2,3,4 & 1,5 
  (c2 == c3 && c3 == c4 && c1 == c5 && c2 != c1) ||   //2,3,5 & 1,4 
  (c2 == c3 && c3 == c5 && c1 == c4 && c2 != c1) ||   //2,4,5 & 1,3 
  (c2 == c4 && c4 == c5 && c1 == c3 && c2 != c1) || 
  // 3,4,5 & 1,2 
  (c3 == c4 && c4 == c5 && c1 == c2 && c3 != c1)  )  
{ 
        printf("Full House\n"); 
    } else { 
        printf("NOT a Full House\n"); 
    } 	 	 	 	 	 	 	 	 	 	  
 
return 0;  
} 

