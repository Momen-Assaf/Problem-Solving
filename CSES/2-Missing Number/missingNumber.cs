namespace missingNumber
{
    class Solution
    {

        public static void Main(string[] args)
        {
            int[] number = { 1, 2, 3, 4, 5, 7 };
            int missingNum = 0;
            Array.Sort(number);
        
            for(int i = 0; i < number.Length; i++){
                if( number[i] != (i + 1)){
                    missingNum = i+1;
                }
            }
            Console.Write(missingNum);
        }
    }
}
