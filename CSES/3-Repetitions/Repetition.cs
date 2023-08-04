namespace Repetition
{
    class Solution
    {

        public static void Main(string[] args)
        {
            string str = "GTTCGGGA";
            int A = 0, T = 0, C = 0, G = 0;
            for (int i = 0; i < str.Length; i++)
            {
                switch (str[i])
                {
                    case 'A':
                        A++;
                        break;
                    case 'T':
                        T++;
                        break;
                    case 'C':
                        C++;
                        break;
                    default:
                        G++;
                        break;
                }
            }
            Console.Write(Math.Max(Math.Max(A,T),Math.Max(C,G)));
        }
    }
}