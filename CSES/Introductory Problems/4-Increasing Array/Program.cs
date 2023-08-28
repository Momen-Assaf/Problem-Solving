
class Program
{
    static void Main(string[] args)
    {
        int n = 0;
        long outVal = 0;
        n = int.Parse(Console.ReadLine());
        long[] arr = new long[n];
        string[] inputs = Console.ReadLine().Split(' ');

        for (int i = 0; i < n; i++)
        {
            arr[i] = long.Parse(inputs[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                long tmp = arr[i] - arr[i + 1];
                arr[i + 1] += tmp;
                outVal += tmp;
            }
        }

        Console.WriteLine(outVal);
    }
}
