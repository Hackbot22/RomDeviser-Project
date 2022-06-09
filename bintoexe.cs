using System.Diagnostics;

namespace BinExe
{
    class Program
    {
        static void Main(string[] args)
        {
            Process p = new Process();
            p.StartInfo.FileName = "compile.bin";
            p.StartInfo.UseShellExecute = false;
            p.Start();
        }
    }
}