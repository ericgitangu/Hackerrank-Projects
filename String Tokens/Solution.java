import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String>words = Arrays.asList(scanner.nextLine().trim().strip().split("\\P{Alpha}+"));
        try{
            System.out.println(words.get(0) == "" ? 0 : words.size());
        } catch(Exception e) {
            System.out.println(0);
        }
        for(String string : words){
            System.out.println(string);
        }
    }
}


