// Given an integer, convert it to a Roman numeral.
class Solution {
    public String intToRoman(int num) {
        String[] romans = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        // StringBuilder to build the result
        StringBuilder result = new StringBuilder();
        
        // Iterate through each value
        for (int i = 0; i < values.length; i++) {
            while (num >= values[i]) {
                result.append(romans[i]); // Append Roman numeral to the result
                num -= values[i]; // Subtract its value from the number
            }
        }
        return result.toString();
    }
}