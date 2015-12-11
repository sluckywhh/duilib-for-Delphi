##Duilib for Delphi
===============================================================================

### 什么是Duilib for Delphi?
***  
**Duilib for Delphi是一个基于C++ [duilib](https://github.com/duilib/duilib)的开源工程，主要致力于在Delphi中使用Duilib库构建漂亮的UI。 **   
**在此也非常感谢duilib作者的辛劳，没有他的库也许就没有现在这Duilib for Delphi。**  
**更多关于Duilib for Delphi的详情，可见[我的博客](http://blog.csdn.net/zyjying520/article/details/49976667)。**    

****

**此版代码已经更新至duilib最新版本**  

**欢迎加入[QQ群429151353](http://shang.qq.com/wpa/qunwpa?idkey=de0faba813de168a104d9160c9271d9873a8c91f30b416c11ff89cb2bdf6564b)一起交流，作者本人也一边写这个库，一边学习duilib。 **  

***
**代码主要提交到github上，另考虑到github经常被墙和访问慢故提交一份至git.oschina上，[github项目地址](https://github.com/ying32/duilib-for-Delphi/),   [git.oschina项目地址](http://git.oschina.net/ying32/Duilib-for-Delphi)**   


### 重要说明
***
代码基于DelphiXE6编写，其中有用到了不少新的新特性，使用最少需要符合以下条件：    

* 1、支持`Unicode`;
* 2、支持class的`helper`语法;
* 3、record的`运算符重载`；
* 4、`泛型`支持。


### 目录祥情
***

* 1、 DDuilib
   * duilib for Delphi源目录。

* 2、 DuilibExport
   * 需要加入到原[duilib](https://github.com/duilib/duilib)工程中编译的c++源文件。

* 3、Demo
   * 新的Demo工程目录
   
* 4、Duilib
   * 存放原[duilib](https://github.com/duilib/duilib)工程目录，这里不提供原[duilib](https://github.com/duilib/duilib)的源码，请自行下载。
   * 4.1、 bin
      * 存放编译后的二进制及图片和xml资源，里面有的包含原duilib的资源文件 

### 说明
***
  **需要将DuilibExport下的DirectUIlib.cpp和DirectUIlib.h加入原[duilib](https://github.com/duilib/duilib)工程中，然后查看ReadMe.txt修改一处duilib的源代码，然后重编译duilib工程, 主意vs中设置为Unicode工程** 


### 截图
***
![截图2](https://raw.githubusercontent.com/ying32/duilib-for-Delphi/master/screenshot3.png) 
![截图1](https://raw.githubusercontent.com/ying32/duilib-for-Delphi/master/screenshot1.png)  
![截图2](https://raw.githubusercontent.com/ying32/duilib-for-Delphi/master/screenshot2.png)  


### 作者信息
***
[ying32](mailto:1444386932@qq.com) 
[QQ群429151353](http://shang.qq.com/wpa/qunwpa?idkey=de0faba813de168a104d9160c9271d9873a8c91f30b416c11ff89cb2bdf6564b) 
