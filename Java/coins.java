package Java;

public class coins {
    public static void main(String[] args) {
        int n=3;
        Print(n,"");
    }

    public static void Print(int n, String s) {
        if (n==0) {
            System.out.println(s);
        } 
        else {
            Print(n-1, s+"T");
            
            if(s.length()==0){
                Print(n-1, s+"H");
            }
            else if(s.charAt(s.length()-1)!='H'){
                Print(n-1, s+"H");
            }
        }
    }
}
