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
            lst.Add("four");
            foreach(var str in lst)
            {
                Console.WriteLine(str);
            }
            Console.WriteLine("Hello, World!");
            Console.WriteLine("Nhat dep trai hihihihi");
        }
    }
}
