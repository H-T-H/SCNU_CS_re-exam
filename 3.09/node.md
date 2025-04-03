第一道文件读写题

ifstream.open() 不会抛出异常
input.open("input.txt"); 不会抛出异常，即使文件不存在。
C++ 的 ifstream 需要通过 input.fail() 检测是否打开失败，而不是使用 try-catch。
文件打开失败时，应该手动检查
如果 input.txt 不存在或无法打开，input.fail() 会返回 true，但你的代码没有检测它，所以不会输出 "open input.txt fail."。