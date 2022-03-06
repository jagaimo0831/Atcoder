# とりあえず
- 茶色になるまで：AからCを1時間で（21:00~22:00）
- 答え合わせ：C言語，C++，C#，Python
- 内定者課題：ABC100からのABCD問題
- 目標：1時間でA～D問題


# 答え合わせ
## やり方
- 正解不正解問わずとりあえず全部理解しながらトレースする
- メイン言語以外は軽めにトレース -> 意味なさそうなのでとりあえずCに集中(その後転移学習)

## 参考にする人
- ygussany
- pengin

## テストケース
- 保管庫：https://www.dropbox.com/sh/nx3tnilzqz7df8a/AAAYlTq2tiEHl5hsESw6-yfLa?dl=0


# その他
## 情報
- AtCoderのtips：https://qiita.com/drken/items/8a6f139158cde8a61dce


## マークダウンファイルについて
- vscodeでのプレビュー
    - [Ctrl] + [K] → [V]
- 参考サイト：https://catalpa.oss.onl/markdown.html


# C言語
- 定型
    
        #include<stdio.h>
        int main(void){ 
            hoge;
            fuga;
            
            fflush(stdout);
            return 0;
        }

- コンパイル
    - gcc -o main.exe main.c
    - gcc -o main.exe main.c -lm

- 配列の宣言
    - データ型名 配列名[要素数];
        - int int_arr[5];
        - char char_arr[5];
    - 文字列の配列(文字列テーブル)
        - 文字列自体が配列なので結果的に2次元になる
        - char name[3][5];

- input
    - scanf
        - 文字列 %s char*

- 文字列の比較(strcmp)
    - #include<string.h>
    - strcmp(文字列1, 文字列2);
    - 戻り値
        - 第1引数 < 第2引数 の場合はマイナスの値
        - 第1引数 > 第2引数 の場合はプラスの値
        - 第1引数 = 第2引数 の場合は0

- fflush
    - ストリームをフラッシュする関数
    - ストリームにたまっているデータを即座に吐き出す関数

- ソート(sort)
    - 

- ポインタの使い方集(from つよつよatcoderの方々)