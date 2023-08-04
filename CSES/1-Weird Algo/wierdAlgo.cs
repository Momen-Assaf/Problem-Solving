namespace WierdAlgo
{
    class Solution
    {
        public static void Main(string[] args)
        {
            Random random = new();
            int n = random.Next(10, 20);
            int t = n;
            Console.Write(t);
            while (t != 1)
            {
                if ((t % 2) == 0)
                {
                    t /= 2;
                }
                else
                {
                    t = t * 3 + 1;
                }
                Console.Write("->" + t);
            }

        }
    }
}
