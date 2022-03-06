using Sytem;
using Sytem.Linq;   // 統合言語クエリ...コレクションの要素を処理するメソッドを集めたライブラリ
                    // クエリ...問い合わせ言語

namespace abc100_a{
    class Program{
        static void Main(string[] args){
            int[] x = Console.ReadLine().Split().Select(int.Parse).ToArray();
            Console.WriteLine(x.Max()) <= 8 ? "Yay!" : ":(");
        }
    }
}