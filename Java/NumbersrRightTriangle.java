package assignment;

public class NumbersrRightTriangle {
	
	 public static void printNumTriangle(int n) 
	    { 
	        int i, j,num; 
	    
	        for(i=0; i<n; i++) 
	        // outer loop for rows
	        { 
	            num=1; 
	            for(j=0; j<=i; j++) // inner loop for rows
	            { 
	                // add space to numbers  
	                System.out.print(num+ " "); 
	    
	               
	                num++; 
	            } 
	    
	            // ending line after each row 
	            System.out.println(); 
	        } 
	    } 
	   

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int n = 8; 
	        printNumTriangle(n); 
	}

}
