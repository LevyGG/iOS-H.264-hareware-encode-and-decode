# iOS-H.264-hareware-encode-and-decode
使用 Video Toolbox 进行H.264编码

这个demo实现了H.264的硬件编码与硬件解码。编码视频来源为摄像头，调试的时候最好横屏

1、点击start按钮开始录像（把录像编码成H.h264存入沙盒中，文件名为：test.h264）

2、点击stop按钮停止录像。

3、点击play按钮播放录像（从沙盒中读取test.h264文件并解码播放）

4、点击stop停止播放、清除播放对象

沙盒中的test.h264文件可以通过设备连接电脑后打开iTunes，选定自己的设备，在文件共享那里可以找到第一步保存的test.h264源码文件

通过参考以下博客、github上的demo与苹果官方的资料整理出这个集H.264编码与解码于一身的demo供大家参考

参考博客：

http://www.jianshu.com/p/a6530fa46a88

http://www.zhihu.com/question/20692215/answer/37458146

苹果官方参考资料：

WWDC2014 513《direct access to media encoding and decoding》

参考开源项目：

https://github.com/stevenyao/iOSHardwareDecoder （解码）

https://github.com/manishganvir/iOS-h264Hw-Toolbox （编码）
