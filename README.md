# Description
 将bin、csv、png等文件转换成Mat文件，并保存需要格式。默认图像深度为16bit，320*240排列方式。
# Environmet
 VS2015
 
 QT5.7.0
 
 Opencv2.4.13
# Contents
点击FileConversion.exe文件，界面显示如下：

![](https://github.com/dongmuliu/File-conversion-assistant/blob/master/FileConversion/Image/image.png)

1.**bin文件** 。读取bin文件，界面显示映射为0到255空间的灰度图及伪彩色图。可选择保存为.png,.bmp,.jpg格式。（默认保存为png格式）

2.**csv文件**。读取csv文件，根据csv文件数据存储格式，调节参数，可以分割多帧图像。界面显示当前帧的灰度图及伪彩色图，可自由显示其他帧图像。保存时，可选择保存当前帧图像，也可选择一次性保存所有帧图像。

3.**png文件**。读取png文件，目前只支持读取16bit图像。界面显示映射为0到255空间的灰度图及伪彩色图

4.**文件格式**。在file中，可以看到解析的文件格式。

5.**深度信息**。鼠标点击灰度图，可以实时显示该点的坐标、深度值及实际物理距离。

6.**Release版本**。

https://github.com/dongmuliu/File-conversion-assistant/releases/tag/FileConverAssV1.3
