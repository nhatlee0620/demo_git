namespace Folder2
{
    public class Program
    {
        private static void Main(string[] args)
        {
            List<string> lst = new List<string>();
            lst.Add("one");
            lst.Add("two");
            lst.Add("three");
            foreach(var str in lst)
            {
                Console.WriteLine(str);
            }
            Console.WriteLine("Hello, World!");
        }
    }
}