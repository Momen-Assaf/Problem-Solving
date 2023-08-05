﻿namespace missingNumber
{
    // change code so the strating number is not always 1
    class Solution
    {

        public static void Main(string[] args)
        {
            int[] number = { 11, 12, 13, 14, 15, 17 };
            int missingNum = 0;
            Array.Sort(number);
        
            for(int i = 0; i < number.Length; i++){
                if( (number[i] + number[0]) != (i + number[0] + 1)){
                    missingNum = i + number[0];
                }
            }
            Console.Write(missingNum);
        }
    }
}