// DiChristmasTree.java
// based on: https://github.com/arnab132/Christmas-Tree-Pyramid-Pattern
// extension: can you override the constructor with anonymous nested classes?

package Xmas;
import java.util.ArrayList;

class  Elf{
  protected String name;
  
  Elf(String input){
    name = input;
  }
}


class  TreeProject{
   
  public static final int height = 4;
  static int numberOfElves;
  
   //Main Function
  public static void main(String[] args) {
         
    //Assigning Width
    int width = 6;
 
    //Assigning Space
    int space = width*5;
 
    int x = 1;
 

    // create an ArrayList
    ArrayList<Elf> XmasTeam = new ArrayList<Elf>();
    
    // create two Elves
    // insert Elves into ArrayList
    XmasTeam.add(new Elf("Zachos"));
    XmasTeam.add(new Elf("Doni"));
    XmasTeam.add(new Elf("Dino"));
    
    // <- put Di Elf #01
    
    // <- put Di Elf #02
    
    // <- put Di Elf #03
    
    // <- put Di Elf #04
    
    // <- put Di Elf #05
    
    // <- put Di Elf #06
    
    // <- put Di Elf #07
    
    // <- put Di Elf #08
    
    // <- put Di Elf #09
    
    // <- put Di Elf #10
    
    // <- put Di Elf #11
    
    // <- put Di Elf #12
    
    // <- put Di Elf #13
    
    // <- put Di Elf #14
    
    // <- put Di Elf #15
    
    numberOfElves = XmasTeam.size();
    
    //Code to Print Upper Part of the Tree (triangles)
    for(int a = 1; a <= height; a++){
 
      for(int i = x; i <= width; i++){
 
        for(int j = space; j >= i; j--){
 
          System.out.print(" ");
        }
 
        for(int k = 0; k < i; k++){
 
          System.out.print("* ");
        }
        
        if(numberOfElves>0){
            System.out.print(" -> " + XmasTeam.get(numberOfElves-1).name);
            numberOfElves--;
        }
        
        System.out.println();
      }
 
      x = x+2;
      width = width+2;
    }
 
 
    //Printing  Branch of Christmas Tree
    for(int i = 1; i <= 4; i++){
 
      for(int j = space-3; j >= 1; j--){
         
        System.out.print(" ");
      }
      
      for(int k= 1; k <= 4; k++){
        System.out.print("* ");
      }
 
      System.out.println();
    }
  }
}
