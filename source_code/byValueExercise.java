// byValueExercise.java
// rename to Main.java


package aloni.main; // check that the package name is correct

public class Main {
 
   public static void main(String[] args){

   int num = 10;   
   System.out.println(num);
   
   // >>>>>>>>>>>  01  >>>>>>>>>>>
   num = increase(num);
   
   // <<<<<<<<<<  01  <<<<<<<<<<
   
   System.out.println(num);
   
}
   
   // >>>>>>>>>>>  02  >>>>>>>>>>>
   // you can change the method below
   // in ay way you want
   static int increase(int x)
    {
        return x + 1;
    }
   // <<<<<<<<<<  02  <<<<<<<<<<   
   
} // end of class Main
