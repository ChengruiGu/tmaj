# tmaj
Tell Me A Joke would you

使用Qt编写的讲笑话软件，一键刷新+复制到剪贴板 

开发环境是Qt5.9.9, MSVC2015编译器

打包生成.exe：在release模式下编译，把生成的tmaj.exe文件复制到空文件夹，然后在shell里运行windeploy tmaj.exe即可(记得先添加到环境变量，在Qt安装目录的/bin里)。
windeploy之后，除了/platforms之外的文件夹都可以删掉节约空间


A simple meme cracker which show and copy a joke to your clipboard after one click.
Developed with Qt5.9.9 and MSVC2015 compiler.
