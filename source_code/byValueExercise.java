// byValueExercise.java
// rename to Main.java


package aloni.main; // check that the package name is correct

public class Main {
 
   public static void main(String[] args){

   int num = 10;   
   System.out.println(num);
   
   // >>>>>>>>>>>  01  >>>>>>>>>>>
   // add the proper source code
   // in order to change to increase
   // the value of num with a method call
   
   
   // <<<<<<<<<<  01  <<<<<<<<<<
   increasex(num) ;
    System.out.println(num);
   
   System.out.println(num);
   
}
   
   // >>>>>>>>>>>  02  >>>>>>>>>>>
   // you can change the method below
   // in ay way you want
   static void increase(int x)
    {
        x += 1;
    }
   // <<<<<<<<<<  02  <<<<<<<<<<   
   


   static int increasex(int x) 
{
      x+=1;
      return x;
} 
} // end of class Main
