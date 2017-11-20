
package rwfile;
import java.io.*;


/**
 *  example of using java FileReader and FileWriter classes, part of the java.io library
 *  
 *  Al Curry     February, 2017
 * 
 *  Many other file io options exist in Java, but this one is relatively simple and works 
 *  well for text files.  For this example one doesn't really need a java program -
 *  just copying one file to another would do the trick.  Real world scenarios would have
 *  additional logic. 
 *
 */
public class RWfile {

    public static void main(String[] args) {

        try {
            FileReader reader = new FileReader("ac.txt");
            FileWriter writer = new FileWriter("AlCurry.txt", true);
            int character;
 
            while ((character = reader.read()) != -1) {
                //System.out.print((char) character);
                writer.write(character);               
            }
            reader.close();
            writer.close();
 
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
